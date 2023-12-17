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