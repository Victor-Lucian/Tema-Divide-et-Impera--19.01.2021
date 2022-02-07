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



int main()
{
    fin >> n;
    return 0;
}
