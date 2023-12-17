//nomor 1
//Apa yang dimaksud dengan pointer buatlah sebuah contoh penggunaannya

Pointer adalah variabel yang menyimpan alamat memori dari variabel lain sehingga 
dapat mengakses atau memanipulasi nilai yang disimpan di lokasi memori tertentu.

//contoh pointer
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


//NOMOR 2
//a. Apa yang dimaksud dengan rekursif ?

Rekursif adalah suatu teknik dalam pemrograman di mana suatu fungsi memanggil dirinya sendiri 
selama proses eksekusi.

//b. sebutkan dan jelaskan 2 jenis rekursif
    Rekursif adalah suatu konsep dalam pemrograman di mana suatu fungsi dapat memanggil dirinya sendiri.
Jenis-jenis rekursif:
1. Rekursi langsung, suatu fungsi memanggil dirinya sendiri secara langsung.
2. Rekursi tidak langsung, dua atau lebih fungsi saling memanggil untuk mencapai solusi.


//NOMOR 3
3. Sebuah titik pada bidang direpresentasikan dengan koordinat (x, y). Misalkan a=(x1,y1) dan b=(x2,y2) 
adalah dua titik pada sebuah bidang, dan m adalah gradien atau kemiringan garis yang melalui titik a dan b 
yang dirumuskan dengan m= (y2-y1)/(x2-x1). Buatlah sebuah program dengan ketentuan:
    (a) Buatlah tipe record koordinat (15)
    (b) a dan b bertipe koordinat (5) (c) Buatlah prosedur/fungsi untuk menghitung gradien dengan dua parameter 
        yang bertipe koordinat dan sebuah variabel lokal sebagai hasil perhitungan gradien
    (d) Buatlah bagian main() nya (10)

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