// Soal 1

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

// Soal 2

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
    cin >> a.x >> a.y;

    Koordinat b;
    cin >> b.x >> b.y;

    gradien(a, b);

    return 0;
}

// Soal 3
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
