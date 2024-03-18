#include <iostream>

struct node {
    int data;
    node *prev;
    node *next;
};

struct node *first = nullptr;
struct node *last = nullptr;

struct node *createNode(int data) {
    struct node *tmp = new node;
    tmp->data = data;
    tmp->prev = nullptr;
    tmp->next = nullptr;

    return tmp;
}

void insertFirst(struct node *new_node) {
    if (first!=nullptr) {
        first->prev = new_node;
        new_node->next = first;
        first = new_node;
    } else {
        first = last = new_node;
    }
}

void deleteFirst() {
    if (last == nullptr) {
        std::cout << "Error: Tidak bisa menghapus node pertama, list kosong\n";
        return;
    }
    if (last == first) {
        delete last;
        last = first = nullptr;
    } else {
        first = first->next;
        delete first->prev;
        first->prev = nullptr;
    }
}

void insertLast(struct node *new_node){
    if (last!=nullptr) {
        last->next = new_node;
        new_node->prev = last;
        last = new_node;
    } else {
        last = first = new_node;
    }
}

void deleteLast(){
    if (first == nullptr) {
        std::cout << "Error: Tidak bisa menghapus node terakhir, list kosong\n";

        return;
    }
    if (first == last) {
        delete first;
        first = last = nullptr;
    } else {
        last = last->prev;
        delete last->next;
        last->next = nullptr;
    }
}

void insertAfter(struct node *exist, struct node *new_node) {
    if (exist == nullptr) {
        std::cout << "Error: Tidak bisa membuat node setelah node yang Anda pilih, node yang Anda pilih tidak eksis\n";
        
        return;
    } else {
        new_node->next = exist->next;
        new_node->prev = exist;
        exist->next->prev = new_node;
        exist->next = new_node;
    }
}

void deleteAfter(struct node *exist) {
    if (exist == nullptr) {
        std::cout << "Error: Tidak bisa menghapus node setelah node yang Anda pilih, node yang Anda pilih tidak eksis\n";
        
        return;
    } else if (exist->next == nullptr) {
        std::cout << "Error: Tidak bisa menghapus node setelah node yang Anda pilih, tidak ada node setelah node yang Anda pilih\n";
    } else {
        struct node *tmp = exist->next;
        exist->next->prev = exist;
        exist->next = exist->next->next;
        delete tmp;
    }
}

void print() {
    if (first == nullptr) {
        std::cout << "Error: Tidak bisa mencetak linked list, list kosong\n";

        return;
    } else {
        struct node *tmp = first;
        while (tmp != nullptr) {
            std::cout << tmp->data << "\n";
            tmp = tmp->next; 
        }
    }
}

void deleteList() {
    if (first == nullptr) {
        std::cout << "Error: Tidak ada node dalam list untuk dihapus, list kosong\n";

        return;
    } else {
        struct node *tmp = first;
        while (tmp != nullptr) {
            struct node *next_node = tmp->next;
            delete tmp;
            tmp = next_node;
        }
    }
}

int main() {
    insertFirst(createNode(20));
    insertFirst(createNode(60));
    insertLast(createNode(10));
    insertLast(createNode(5));
    insertAfter(first, createNode(40));
    deleteFirst();
    deleteAfter(first);
    deleteLast();
    print();
    deleteList();

    return 0;
}

//'struct node *ptr' could be changed to just 'node *ptr'
//except when allocating memory and when declaring in global scope, and also when its a return type of a function
//but for now im gonna stuck with 'struct node *ptr' for better clarity