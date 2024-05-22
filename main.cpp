#include <iostream>
#include <cmath>

using namespace std;

int n,m,a[20][20];
int main() {


    /** @Author = ASEStefan **/
    /** @Date = 22.5.2024 **/

    /** Citire generica. **/

    cin >> n >> m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];

    /** Afisare generica. **/

 
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    /** Max si Min de pe o linie **/

    int maxi = -1;
    int mini = 999999;

    for (int i=1;  i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (a[i][j] > maxi)
                maxi = a[i][j];
            if (a[i][j] < mini)
                mini = a[i][j];
        }


        cout << maxi << " " << mini << " ";
    }
    
    /** Max si Min de pe o coloana **/

    int maxi2 = -1;
    int mini2 = 999999;

    for (int j=1;  j<=m; j++) {
        for (int i=1; i<=n; i++) {
            if (a[i][j] > maxi2)
                maxi2 = a[i][j];
            if (a[i][j] < mini2)
                mini2 = a[i][j];
        }


        cout << maxi2 << " " << mini2 << " ";
    }

    /** Inserare linie in matrice **/

    int poz;
    cin >> poz;
    for (int i=n; i>=poz; i--)
        for (int j=1; j<=m; j++)
            a[i+1][j] = a[i][j];
    n++;

    /** Stergere linie in matrice **/

    int poz2;
    cin >> poz2;

    for (int i=poz2; i<=n; i++)
        for (int j=1; j<=m; j++)
            a[i][j] = a[i+1][j];
    n--;

    /** Schimba valoarea pentru o linie inserata **/

    for (int j=1; j<=m; j++)
        a[poz][j] = j + 1; /// Poti da orice valoare aici.
        

    /** Palindrom si Oglindit **/
    
    int c = a[i][j]; /// idk ce puteam sa pun aici
    int og = 0;
    while (c != 0) {
        og = og * 10 + c % 10;
        c /= 10;
    }
    
    cout << og; /// -> Pentru Oglindit
    
    if (a[i][j] == og)
        cout << a[i][j] << "DA"; /// -> Pentru Palindrom, Numarul este Palindrom!
        
    /** Produsuri / Sume sunt Prea Usoare ca sa le mai scriu, dar trebuie sa tineti minte de aceste lucruri **/
    int suma = 0;
    int prod = 1;
    int medAritmetica = 0; /// -> suma / nr de elemente 

    
    /** Verificare daca un numar este prim **/
    
    int vex = a[i][j];
    for (int d=2; d*d<=vex; d++)
        if (vex % d != 0)
            /// NUMARUL ESTE PRIM
            
    
    
    /** Verificare daca un numar este patrat perfect **/
    
    int x0y;
    cin >> x0y;
    
    if ((int) sqrt(x0y) == sqrt(x0y)) /// AVEM NEVOIE DE LIBRARIA CMATH
        /// NUMARUL ESTE PATRAT PERFECT.
    
    
    
    /**
    
    Conditii de diagonale:
    
    Disclaimer: Matricea TREBUIE sa fie PATRATICA
    
    Diagonala Principala -> i == j;
    Diagonala Secundara -> i + j == n + 1;
    
    Deasupra Ambelor Diagonale -> i < j && i + j < n + 1
    Dedesubt Ambelor Diagonale -> i > j && i + j > n + 1
    
    Deasupra Diag Secundare si Sub cea Principala -> i > j && i + j < n + 1
    Deasupra Diag Principale si Sub cea Secundara -> i < j && i + j > n + 1
    
    **/

    return 0;
}
