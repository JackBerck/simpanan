// Soal 1
a. Pointer adalah variabel yang menyimpan alamat memori dari variabel lain sehingga dapat mengakses atau memanipulasi nilai yang disimpan di lokasi memori tertentu.
b. Fungsi dipanggil dengan menggunakan metode "call by value" yaitu nilai variabel yang dikirim sebagai argumen ke fungsi tersebut disalin ke dalam parameter fungsi sehingga fungsi tersebut tidak memengaruhi nilai variabel di luar fungsi.
c. Fungsi dipanggil menggunakan "call by reference" alamat memori variabel yang dikirim sebagai argumen ke fungsi disalin ke dalam parameter fungsi. Oleh karena itu, perubahan pada parameter fungsi memengaruhi nilai variabel di luar fungsi.


// Soal 2

#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {9, 3, 10, 7, 6, 5, 1}, temp;

    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Soal 3

#include <iostream>
#include <string>

using namespace std;

struct jam
{
    int jam;
    int menit;
    int detik;
};

void penambahanJam(jam jam_1, jam jam_2)
{
    int sisaMenit, sisaJam, hasilDetik, hasilMenit, hasilJam;

    // penambahan detik
    hasilDetik = jam_1.detik + jam_2.detik;

    // penambahan menit
    hasilMenit = jam_1.menit + jam_2.menit;

    // penambahan jam
    hasilJam = jam_1.jam + jam_2.jam;

    if (hasilDetik > 60)
    {
        hasilDetik %= 60;
        hasilMenit += 1;
    }

    if (hasilMenit > 60)
    {
        hasilMenit %= 60;
        hasilJam += 1;
    }

    cout << "Hasil penambahan kedua jam: " << hasilJam << ":" << hasilMenit << ":" << hasilDetik;
}

int main()
{
    jam jam_1;
    jam jam_2;

    // jam 1
    jam_1.jam = 17;
    jam_1.menit = 25;
    jam_1.detik = 54;

    // jam 2
    jam_2.jam = 9;
    jam_2.menit = 50;
    jam_2.detik = 45;

    // pemanggilan fungsi
    penambahanJam(jam_1, jam_2);

    return 0;
}
