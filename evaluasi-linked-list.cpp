#include <iostream>
using namespace std;

typedef struct node *address;
struct node
{
    address prev;
    int data;
    address next;
};
address first = NULL, last = NULL;

address createNode(int data)
{
    address current = new node;
    current->prev = NULL;
    current->data = data;
    current->next = NULL;
    return current;
}

void insertFirst(address newNode)
{
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->next = first;
        first->prev = newNode;
        first = newNode;
    }
}

void insertLast(address newNode)
{
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->prev = last;
        last->next = newNode;
        last = newNode;
    }
}

void insertAfter(address selectedNode, address newNode)
{
    newNode->next = selectedNode->next;
    newNode->prev = selectedNode;
    selectedNode->next = newNode;
    newNode->next->prev = newNode;
}

void deleteFirst()
{
    if (first == NULL)
    {
        cout << "Daftar isi telah kosong";
    }
    else if (first->next == NULL)
    {
        delete first;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
}

void deleteLast()
{
    last = last->prev;
    delete last->next;
    last->next = NULL;
}

void deleteAfter(address selectedNode)
{
    address temp = selectedNode->next;
    selectedNode->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = selectedNode;
    }
    delete temp;
}

void print()
{
    address current = first;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int main()
{
    insertFirst(createNode(10));
    insertFirst(createNode(20));
    insertLast(createNode(30));
    insertFirst(createNode(40));
    insertLast(createNode(50));
    print();

    return 0;
}
