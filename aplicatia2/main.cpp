#include <iostream>
#include <fstream>

using namespace std;

/**
    Se citeste un numar natural n (1 <=n <=100) si o matrice patratica de dimensiune n X n,
    din fisierul“xxx.mat”. Toate numerele din fisier au maxim 9 cifre.
    2. Sa se verifice daca exista macar o coloana ale carei elemente aflate in triunghiul din vest au
    toate acelasi numar de divizori primi.
*/

int n;
int a[n + 5][n + 5];

ifstream fin ("xxx.mat");

void citire (int st, int dr)
{
    if (st == dr)
        return;
    fin >> a[st][dr];
    int mij = (st + dr) / 2;
    citire(st, mij);
    citire(mij + 1, dr);
}



int main()
{
    fin >> n;
    return 0;
}
