//NOMOR 1
1. Jelaskan beberapa definisi berikut?
a. Array/larik 
    Array atau larik adalah struktur data yang menyimpan elemen-elemen sejenis dengan indeks 
    atau nomor indeks yang digunakan untuk mengakses setiap elemen.
b. Pointer 
    Pointer adalah variabel yang menyimpan alamat memori dari variabel lain sehingga 
    dapat mengakses atau memanipulasi nilai yang disimpan di lokasi memori tertentu.
c. Record/Abstract Data Type 
    Record atau ADT adalah struktur data yang menyimpan beberapa variabel dengan tipe data 
    yang berbeda dalam satu kesatuan, sehingga membentuk suatu objek atau entitas.
d. Rekursif 
    Rekursif adalah suatu konsep dalam pemrograman di mana suatu fungsi dapat memanggil dirinya sendiri.

//NOMOR 2
2. Diberikan permasalahan sebagai berikut, sebuah tipe jam terdiri atas hh, mm, ss. 
Terdapat 2 buah jam yakni Seiko (1:40:52) dan quartz (12:10:45) permasalahan tersebut: 
a. Buatlah struktur/record dari tipe jam tersebut
b. Buatlah fungsi untuk mengkonversi tipe jam ke detik
c. Buatlah fungsi untuk menambahkan 2 jam tersebut 
d. Buatlah fungsi untuk mengurangkan 2 jam tersebut
e. Panggil fungsi-fungsi tersebut dalam program utama dan tuliskan 

#include <iostream>
using namespace  std;

// soal a. Definisi struktur/record untuk tipe jam
struct Jam {
    int hh;
    int mm;
    int ss;
};

// soal b. Fungsi untuk mengkonversi tipe jam ke detik
int konversiKeDetik(const Jam &waktu) {
    return waktu.hh * 3600 + waktu.mm * 60 + waktu.ss;
}

// Fungsi untuk menambahkan dua jam
Jam tambahJam(const Jam &jam1, const Jam &jam2) {
    Jam hasil;
    int detikTotal = konversiKeDetik(jam1) + konversiKeDetik(jam2);

    hasil.hh = detikTotal / 3600;
    detikTotal %= 3600;
    hasil.mm = detikTotal / 60;
    hasil.ss = detikTotal % 60;

    return hasil;
}

// soal c. Fungsi untuk mengurangkan dua jam
Jam kurangJam(const Jam &jam1, const Jam &jam2) {
    Jam hasil;
    int detikTotal = konversiKeDetik(jam1) - konversiKeDetik(jam2);

    if (detikTotal < 0) {
        detikTotal += 24 * 3600;  // Menangani hasil negatif
    }

    hasil.hh = detikTotal / 3600;
    detikTotal %= 3600;
    hasil.mm = detikTotal / 60;
    hasil.ss = detikTotal % 60;

    return hasil;
}

// soal d. Fungsi utama
int main() {
    Jam seiko = {1, 40, 52};
    Jam quartz = {12, 10, 45};

    // Konversi dan tampilkan waktu dalam detik
    cout << "Seiko dalam detik: " << konversiKeDetik(seiko) << endl;
    cout << "Quartz dalam detik: " << konversiKeDetik(quartz) << endl;

    // Tambahkan dan kurangkan dua jam
    Jam hasilTambah = tambahJam(seiko, quartz);
    Jam hasilKurang = kurangJam(seiko, quartz);

    // Tampilkan hasil
    cout << "Hasil Penambahan: " << hasilTambah.hh << ":" << hasilTambah.mm << ":" << hasilTambah.ss << endl;
    cout << "Hasil Pengurangan: " << hasilKurang.hh << ":" << hasilKurang.mm << ":" << hasilKurang.ss << endl;

    return 0;
}

