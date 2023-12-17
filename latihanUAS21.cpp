//nomor 1 Apa yang dimaksud dengan rekursif tail buatlah contohnya!
//Rekursi tail adalah bentuk rekursi di mana pemanggilan rekursif berada di posisi terakhir 
//dari suatu fungsi, dan hasil dari pemanggilan rekursif tersebut dapat langsung dikembalikan 
//sebagai nilai hasil fungsi tanpa perlu dilakukan operasi tambahan.

#include <iostream>
using namespace std;

// Fungsi rekursi tail untuk menghitung faktorial
int faktorial(int n, int hasil = 1) {
    if (n == 0 || n == 1) {
        return hasil;
    } else {
        return faktorial(n - 1, n * hasil);
    }
}

int main() {
    // Input bilangan untuk menghitung faktorial
    int bilangan;
    cout << "Masukkan bilangan untuk menghitung faktorial: ";
    cin >> bilangan;

    // Memanggil fungsi rekursi tail
    int hasil = faktorial(bilangan);

    // Menampilkan hasil faktorial
    cout << "Hasil faktorial dari " << bilangan << " adalah: " << hasil << endl;

    return 0;
}

//nomor 2
//Buatlah larik dinamis 1 (satu) dimensi untuk menyimpan nilai {31,23,5,10,28,0}. 
//Buatlah program untuk memproses nilai-nilai tersebut untuk
//menentukan banyaknya bilangan ganjil dan genap yang ada pada larik tersebut.

#include <iostream>

using namespace std;

int main() {
    int nilai[6] = {31, 23, 5, 10, 28, 0};

    // variabel untuk menyimpan banyaknya bilangan ganjil dan genap
    int banyakGanjil = 0;
    int banyakGenap = 0;

    // Memproses nilai-nilai dalam larik pakainya perulanngan ya
    for (int a = 0; a < 6; ++a) {
        // Menentukan apakah nilai ganjil atau genap
        if (nilai[a] % 2 == 0) {
            banyakGenap++;
        } else {
            banyakGanjil++;
        }
    }

    // Menampilkan nilai-nilai dalam larik
    cout << "Nilai dalam larik: ";
    for (int a = 0; a < 6; ++a) {
        cout << nilai[a] << " ";
    }
    cout << endl;

    // Menampilkan hasil
    cout << "Banyaknya bilangan ganjil: " << banyakGanjil << endl;
    cout << "Banyaknya bilangan genap: " << banyakGenap << endl;

    return 0;
}

//NOMOR 3
//Jam/Clock adalah sebuah tipe yang berisi HH, MM, SS . Jika dinginkan dibuat
//sebuah program yang dapat melakukan pengolahan berupa pengurangan
//terhadap 2 (dua) buah jam yang masing masing berisi data 16:45:24 dan
//10:50:35, buatlah method/fungsi-fungsi yang diperlukan serta gunakan dalam
//program utama (Gunakan tipe struct/record untuk menyimpan data jam)

#include <iostream>

using namespace std;

// Tipe struct untuk menyimpan data jam
struct Jam {
    int HH;
    int MM;
    int SS;
};

// Fungsi untuk mencetak jam
void cetakJam(const Jam &waktu) {
    cout << waktu.HH << ":" << waktu.MM << ":" << waktu.SS;
}

// Fungsi untuk mengurangkan dua jam
Jam kurangiJam(const Jam &jam1, const Jam &jam2) {
    Jam hasil;

    // Menghitung total detik dari setiap jam
    int totalDetik1 = jam1.HH * 3600 + jam1.MM * 60 + jam1.SS;
    int totalDetik2 = jam2.HH * 3600 + jam2.MM * 60 + jam2.SS;

    // Menghitung selisih total detik
    int selisihDetik = totalDetik1 - totalDetik2;

    // Mengonversi total detik menjadi jam, menit, dan detik
    hasil.HH = selisihDetik / 3600;
    selisihDetik %= 3600;
    hasil.MM = selisihDetik / 60;
    hasil.SS = selisihDetik % 60;

    return hasil;
}

int main() {
    // Inisialisasi dua jam
    Jam jam1 = {16, 45, 24};
    Jam jam2 = {10, 50, 35};

    // Cetak jam awal
    cout << "Jam 1: ";
    cetakJam(jam1);
    cout << std::endl;

    cout << "Jam 2: ";
    cetakJam(jam2);
    cout << std::endl;

    // Mengurangkan dua jam
    Jam hasilPengurangan = kurangiJam(jam1, jam2);

    // Cetak hasil pengurangan
    cout << "Hasil Pengurangan: ";
    cetakJam(hasilPengurangan);
    cout << std::endl;

    return 0;
}
