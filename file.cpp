#include <iostream>
using namespace std;

typedef struct node *address;
struct node
{
    address prev;
    int data;
    address next;
};

address first = NULL, last = NULL, temp = NULL;

address alokasi(int datax)
{
    address x = new node;
    x->prev = NULL;
    x->next = NULL;
    x->data = datax;
    return x; // tambahkan return statement untuk mengembalikan alamat dari node yang dialokasikan
}

void insertfirst(address baru)
{
    if (first != NULL)
    {
        baru->next = first;
        first->prev = baru;
        first = baru;
    }
    else
    {
        first = baru;
        last = baru;
    }
}

void insertlast(address baru)
{
    if (first != NULL)
    {
        last->next = baru;
        baru->prev = last;
        last = baru;
    }
    else
    {
        first = baru;
        last = baru;
    }
}

void insertafter(address lama, address baru)
{
    baru->next = lama->next;
    baru->prev = lama;
    lama->next = baru;
    baru->next->prev = baru;
}

void deletefirst()
{
    first = first->next;
    delete first->prev;
    first->prev = NULL;
}

void deletelast()
{
    last = last->prev;
    delete last->next;
    last->next = NULL;
}

void deleteafter(address suatualamat)
{
    address temp = suatualamat->next;
    temp->next->prev = suatualamat;
    suatualamat->next = temp->next;
    delete temp;
}

void cetak()
{
    address jalan = first;
    while (jalan != NULL)
    {
        cout << jalan->data << endl;
        jalan = jalan->next;
    }
}

int main()
{
    insertfirst(alokasi(30));
    cetak();
    cout << "============" << endl;
    insertfirst(alokasi(10));
    cetak();
    cout << "============" << endl;
    insertfirst(alokasi(50));
    cetak();
    cout << "============" << endl;
    insertlast(alokasi(60));
    cetak();
    cout << "============" << endl;
    insertafter(first->next, alokasi(90));
    cetak();
    cout << "============" << endl;
    deletefirst();
    cetak();
    cout << "============" << endl;
    deletelast();
    cetak();
    cout << "============" << endl;
    deleteafter(first);

    return 0;
}

/*

#include <iostream>
using namespace std;

typedef struct node *address;
struct node
{
    address prev;
    int data;
    address next;
};

address first = NULL, last = NULL, temp = NULL;

address alokasi(int datax)
{
    address x = new node;
    x->prev = NULL;
    x->next = NULL;
    x->data = datax;
    return x; // tambahkan return statement untuk mengembalikan alamat dari node yang dialokasikan
}

void insertfirst(address baru)
{
    if (first != NULL)
    {
        baru->next = first;
        first->prev = baru;
        first = baru;
    }
    else
    {
        first = baru;
        last = baru;
    }
}

void insertlast(address baru)
{
    if (first != NULL)
    {
        last->next = baru;
        baru->prev = last;
        last = baru;
    }
    else
    {
        first = baru;
        last = baru;
    }
}

void insertafter(address lama, address baru)
{
    baru->next = lama->next;
    baru->prev = lama;
    lama->next = baru;
    baru->next->prev = baru;
}

void deletefirst()
{
    first = first->next;
    delete first->prev;
    first->prev = NULL;
}

void deletelast()
{
    last = last->prev;
    delete last->next;
    last->next = NULL;
}

void deleteafter(address suatualamat)
{
    address temp = suatualamat->next;
    temp->next->prev = suatualamat;
    suatualamat->next = temp->next;
    delete temp;
}

void cetak()
{
    address jalan = first;
    while (jalan != NULL)
    {
        cout << jalan->data << endl;
        jalan = jalan->next;
    }
}

int main()
{
    insertfirst(alokasi(30));
    cetak();
    cout << "============" << endl;
    insertfirst(alokasi(10));
    cetak();
    cout << "============" << endl;
    insertfirst(alokasi(50));
    cetak();
    cout << "============" << endl;
    insertlast(alokasi(60));
    cetak();
    cout << "============" << endl;
    insertafter(first->next, alokasi(90));
    cetak();
    cout << "============" << endl;
    deletefirst();
    cetak();
    cout << "============" << endl;
    deletelast();
    cetak();
    cout << "============" << endl;
    deleteafter(first);

    return 0;
}


*/
