// Soal 1
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain sehingga dapat mengakses atau memanipulasi nilai yang disimpan di lokasi memori tertentu.
#include <iostream>

using namespace std;

int main() {
    int angka = 42;
    int *pointerAngka = &angka;

    cout << "Nilai dari angka: " << angka << endl;
    cout << "Alamat memori dari angka: " << &angka << endl;
    cout << "Nilai yang disimpan di alamat pointerAngka: " << *pointerAngka << endl;

    return 0;
}

// Soal 2
Rekursif adalah suatu konsep dalam pemrograman di mana suatu fungsi dapat memanggil dirinya sendiri.
Jenis-jenis rekursif:
1. Rekursi langsung, suatu fungsi memanggil dirinya sendiri secara langsung.
2. Rekursi tidak langsung, dua atau lebih fungsi saling memanggil untuk mencapai solusi.

// Soal 3

#include <iostream>

using namespace std;

struct Koordinat
{
    int x;
    int y;
};

void gradien(Koordinat a, Koordinat b)
{
    int m = (b.y - a.y) / (b.x - a.x);
    cout << m;
}

int main()
{
    Koordinat a;
    a = {1, 2};
    // cin >> a.x >> a.y;

    Koordinat b;
    b = {3, 4};
    // cin >> b.x >> b.y;

    gradien(a, b);

    return 0;
}
