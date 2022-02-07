#include <iostream>
#include <fstream>

using namespace std;

/**
    Se citeste un numar natural n (1 <=n <=100) si o matrice patratica de dimensiune n X n,
    din fisierul “xxx.mat”. Toate numerele din fisier au maxim 9 cifre.
    1. Sa se afiseze cele mai mari 2 elemente din matrice
*/

int n;
int a[n][n];

ifstream fin ("xxx.mat");

void citire(int i,int j)
{
    if(i==n)
        return;
    if(j==n)
    {
        citire(i+1,0);
        return;
    }
    cin>>a[i][j];
    citire(i,j+1);
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
