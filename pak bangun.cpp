#include <iostream>
using namespace std;
typedef struct node* alamat;
struct node{
    int info;
     alamat next;
};
alamat first;

alamat alokasi(int data){
    alamat tmp =new node;
    tmp->info=data;
    tmp->next=NULL;
    return tmp;
}
void insertfirst(alamat baru){
    baru->next=first;
    first=baru;
}
void deletefirst(){
    alamat tmp=first;
    first=first->next;
    free(tmp);
}

void insertlast(alamat baru){
    alamat last=first;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=baru;
}

void deletelast(){
    alamat last=first;
    while(last->next->next!=NULL){
        last=last->next;
    }
    last->next=NULL;
}

void cetak(){
    alamat tmp=first;
    while(tmp!=NULL){
        cout<<tmp->info<<"\n";
        tmp=tmp->next;
    }
}

int main()
{
    insertfirst(alokasi(5));
    insertfirst(alokasi(30));
    insertfirst(alokasi(40));
    insertfirst(alokasi(60));
    insertlast(alokasi(1));
    deletelast();
    cetak();
    

    return 0;
}