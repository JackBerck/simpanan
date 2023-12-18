// Soal 3
// Sequential searching itu metode pencarian di mana setiap elemen dalam suatu struktur data diurutkan satu per satu hingga elemen yang dicari ditemukan atau seluruh struktur data telah dijelajahi
#include <iostream>

using namespace std;

bool pencarian(int arr[], int panjangArr, int cari)
{
    for (int i = 0; i < panjangArr; i++)
    {
        if (arr[i] == cari)
        {
            cout << "Nilai " << cari << " ditemukan pada urutan " << i;
            return 1;
        }
    }
    cout << "Nilai " << cari << " tidak ditemukan";
    return 0;
}

int main()
{
    int arr[5] = {5, 4, 7, 2, 1};
    int panjang = 5;
    int cari = 7;
    int hasil = pencarian(arr, panjang, cari);

    return 0;
}
