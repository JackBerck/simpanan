//SOAL 1
Terdapat array/larik 1 dimensi yang berisi nilai (3,2,5,1). 
Buatlah program untuk mengurutkan data yang ada pada array tersebut, gunakan algoritma sorting yang a kuasai 

#include <iostream>

using namespace std;

int main()
{
    int bilangan[4] = {3, 2, 5, 1}, temp;

    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7 - i - 1; j++)
        {
            if (bilangan[j] > bilangan[j + 1])
            {
                temp = bilangan[j];
                bilangan[j] = bilangan[j + 1];
                bilangan[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << bilangan[i] << " ";
    }

    return 0;
}

//SOAL 2
Sebuah titik didefinisikan sebagai data yang memiliki koordinat X dan Y
a. Buatlah definisi struktur data record/struct dari titik tersebut 
b. Jika M adalah gradient dengan rumusan M=(Y1-y2)/(X1-X2) maka buatlah sebuah
 fungsi untuk menghitung nilai M tersebut 
c. Gunakan fungsi tersebut dalam program utama 

#include <iostream>

using namespace std;

struct Koordinat //soal a
{
    int x;
    int y;
};

void gradien(Koordinat a, Koordinat b) // soal b.
{
    int m = (b.y - a.y) / (b.x - a.x);
    cout << m;
}

int main() // soal c.
{
    Koordinat a;
    cin >> a.x >> a.y;

    Koordinat b;
    cin >> b.x >> b.y;

    gradien(a, b);

    return 0;
}

//SOAL 3
Apakah yang dimaksud dengan fungsi rekursif, berikan sebuah contoh program

Rekursif adalah suatu konsep dalam pemrograman di mana suatu fungsi dapat memanggil dirinya sendiri.

#include <iostream>

using namespace std;

void countdown(int n) {
    if (n > 0) {
        cout << n << " ";
        countdown(n - 1);
    } else {
        cout << "Liftoff!" << endl;
    }
}

int main() {
    countdown(5);
    return 0;
}
