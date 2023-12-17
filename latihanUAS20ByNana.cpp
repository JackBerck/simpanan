//1. Terdapat sebuah record yakni point terdiri atas field x dan y yang masing- masing bertipe integer. 
//Diketahui A dan B merupakan dua variabel bertipe point. Diketahui pula nilai dari dua titik A dan B 
//tersebut adalah A=(3,4) dan B=(5,7). kerjakan :

//a. Definisikan tipe record point tersebut serta variabel/field nya
#include <iostream>

using namespace std;

//Definisi tipe record point
struct Point {
    int x;
    int y;
};

int main() {
    // Inisialisasi dua point A dan B
    Point A = {3, 4};
    Point B = {5, 7};

    // Menampilkan nilai dari dua titik A dan B
    cout << "Titik A: (" << A.x << ", " << A.y << ")" << endl;
    cout << "Titik B: (" << B.x << ", " << B.y << ")" << endl;

    return 0;
}

//b. Diperlukan sebuah prosedur bertipe void yang dinamakan Tambah yang akan menambahkan 2 buah point 
//A dan B tersebut. Hasil penjumlahan disimpan dalam point C. Ketiga point A, B, dan C dideklarasikan/diinisiasi 
//pada prosedur/fungsi main. Buatlah prosedur Tambah tersebut. 

#include <iostream>

using namespace std;

// Definisi tipe record point
struct Point {
    int x;
    int y;
};

// Proses Tambah untuk menambahkan dua point
void Tambah(const Point &A, const Point &B, Point &C) {
    C.x = A.x + B.x;
    C.y = A.y + B.y;
}

int main() {
    // Inisialisasi dua point A dan B
    Point A = {3, 4};
    Point B = {5, 7};

    // Inisialisasi point C untuk menyimpan hasil penambahan
    Point C;

    // Memanggil prosedur Tambah
    Tambah(A, B, C);

    return 0;
}

//c. Tampilkan pada layar hasil penambahan 2 buah point tersebut. 

#include <iostream>
using namespace std;

// Definisi tipe record point
struct Point {
    int x;
    int y;
};

// Proses Tambah untuk menambahkan dua point
void Tambah(const Point &A, const Point &B, Point &C) {
    C.x = A.x + B.x;
    C.y = A.y + B.y;
}

int main() {
    // Inisialisasi dua point A dan B
    Point A = {3, 4};
    Point B = {5, 7};

    // Inisialisasi point C untuk menyimpan hasil penambahan
    Point C;

    // Memanggil prosedur Tambah
    Tambah(A, B, C);

    // Menampilkan hasil penambahan 2 buah point
    cout << "Hasil penambahan A dan B: (" << C.x << ", " << C.y << ")" << endl;

    return 0;
}


//2. Diketahui perhitungan faktorial 4!=4*3*2*1. Buatlah perhitungan tersebut
// program menggunakan sebuah fungsi rekursif. 

#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int Faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Faktorial(n - 1);
    }
}

int main() {
    // Menghitung dan menampilkan faktorial 4
    int hasilFaktorial = Faktorial(4);
    cout << "4! = " << hasilFaktorial << endl;

    return 0;
}


//3. Terdapat larik/array 1 dimensi yang berisi nilai (3,2,5,1} lakukan pengurutan array tersebut 
//menggunakan buble short dan jelaskan cara kerjanya. 

#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen pada larik
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan pengurutan menggunakan Bubble Sort
void bubbleSort(int arr[], int panjang) {
    for (int i = 0; i < panjang - 1; ++i) {
        for (int j = 0; j < panjang - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Menukar jika elemen ke-j lebih besar dari elemen ke-(j+1)
                tukar(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Inisialisasi larik
    int larik[] = {3, 2, 5, 1};
    int panjangLarik = sizeof(larik) / sizeof(larik[0]);

    // Menampilkan larik sebelum diurutkan
    cout << "Larik sebelum diurutkan: ";
    for (int i = 0; i < panjangLarik; ++i) {
        cout << larik[i] << " ";
    }
    cout << endl;

    // Melakukan pengurutan menggunakan Bubble Sort
    bubbleSort(larik, panjangLarik);

    // Menampilkan larik setelah diurutkan
    cout << "Larik setelah diurutkan: ";
    for (int i = 0; i < panjangLarik; ++i) {
        cout << larik[i] << " ";
    }
    cout << endl;

    return 0;
}
