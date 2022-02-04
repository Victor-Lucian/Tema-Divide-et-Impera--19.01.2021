#include <iostream>
#include <fstream>

using namespace std;

/**
    Se citeste un numar natural n (1 <=n <=100) si o matrice patratica de dimensiune n X n,
    din fisierul “xxx.mat”. Toate numerele din fisier au maxim 9 cifre.
    1. Sa se afiseze cele mai mari 2 elemente din matrice
*/

int n;
int a[n + 5][n + 5];

ifstream fin ("xxx.mat");

void citire(int st, int dr)
{
    if (st == dr)
        return;
    fin >> a[st][dr];
    int mij = (st + dr) / 2;
    citire(st, mij);
    citire(mij + 1, dr);
}

int maxi(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int nr_maxim (int st, int dr)
{
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        return maxi(a[st][dr], nr_maxim(st, mij))
    }
}

int main()
{
    fin >> n;
    return 0;
}
