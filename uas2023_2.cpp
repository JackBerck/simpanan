// Soal 2

#include <iostream>

using namespace std;

int penjumlahan(int angka)
{
    if (angka < 1)
    {
        return 1;
    }
    return angka + penjumlahan(angka - 1);
}

int main()
{
    int angka = 10;
    int hasil = penjumlahan(angka);

    cout << "Hasilnya: " << hasil;

    return 0;
}