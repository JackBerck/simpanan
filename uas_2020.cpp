// Soal 1

#include <iostream>

using namespace std;

void Tambah(float A, float B, float C)
{
    C = A + B;
    cout << C;
}

int main()
{
    int x, y;
    float A = 3.4, B = 5.7, C;

    Tambah(A, B, C);

    return 0;
}

// Soal 2

#include <iostream>

using namespace std;

int faktorialRekursif(int angka)
{
    if (angka <= 1)
        return 1;

    return angka * faktorialRekursif(angka - 1);
}

int main()
{
    int faktorial = faktorialRekursif(4);
    cout << "Hasilnya: " << faktorial;

    return 0;
}

// Soal 3
#include <iostream>

using namespace std;

void bubbleSort(int ukuran, int arr[])
{
    int temp;

    for (int i = 0; i < ukuran - 1; i++)
    {
        for (int j = 0; j < ukuran - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int ukuran;
    cin >> ukuran;

    int arr[ukuran];
    for (int i = 0; i < ukuran; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(ukuran, arr);

    for (int i = 0; i < ukuran; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}