/** ASEStefan */

#include <iostream>
#include <cmath>

using namespace std;

/// CMMDC = Cel mai mare divizor comun

int cmmdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        while (a % b != 0)
        {
            int c = a % b;
            a = b;
            b = c;
        }

        return a;
    }
}

/// CMMMC = Cel mai mic multiplu comun

int cmmmc(int a, int b)
{
    return abs(a * b) / cmmdc(a, b);
}

/// oglindit

int oglindit(int n)
{
    int og = 0;
    while (n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }

    return og;
}

/// palindrom

bool palindrom(int n)
{
    int og = 0;
    int cn = n;
    while (n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }

    return og == cn;
}

/// clonare de cifre
int clone(int n)
{
    int prod = 1;
    int nr = 0;
    while (n)
    {
        /// asta e clonarea basic, la restul va trebui sa pui un if si sa pui doar cifrele care fac ce iti cer in exercitiu.
        nr = (n % 10) * prod + nr;
        prod *= 10;
        n /= 10;
    }

    return nr;
}


/// cloneaza DOAR cifrele impare si le pune intr-un nou numar!
int clonareImpara(int n)
{
    int prod = 1;
    int nr = 0;
    while (n)
    {
        if ((n % 10) % 2 != 0)
        {
            nr = (n % 10) * prod + nr;
            prod *= 10;
        }
        n /= 10;
    }

    return nr;
}

/// factorialul
long long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        long long prod = 1;
        for (int k = 1; k <= n; k ++)
        {
            prod *= (1LL * k);
        }

        return prod;
    }
}


/// media geometrica a cifrelor( aritmetica era prea usoara )
double geom(int n)
{
    double mg = 0;
    short int cnt = 0;
    while (n)
    {
        cnt ++;
        mg += n % 10;
        n /= 10;
    }

    return (double) pow(mg, 1.0 / cnt);
}


/// suma cifrelor
int sumacif(int n)
{
    int suma = 0;
    while (n)
    {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}


/// media armonica a cifrelor
double harmon(int n)
{
    int numarator = 1;
    int numitor = 0;
    short int cnt = 0;
    while (n)
    {
        cnt ++;
        numarator *= (n % 10);
        numitor += n % 10;
        n /= 10;
    }

    numarator *= cnt;
    return (double) ((double) numarator / numitor);
}


/// media patratica a cifrelor
double patr(int n)
{
    int numitor = 0;
    short int cnt = 0;
    while (n)
    {
        cnt ++;
        numitor += pow(n % 10, 2);
        n /= 10;
    }

    return (double) sqrt((double) numitor / cnt);
}

void permutare_spre_stanga(int n, int v[])
{
    int cv = v[1];
    for (int i = 1; i <= n; i ++)
    {
        v[i] = v[i + 1];
    }
    v[n] = cv;
}

void adaugare_nr_x(int &n, int v[], int p, int x)
{
    if (p > n)
    {
        return;
    }

    for (int i = n; i >= p; i --)
    {
        v[i + 1] = v[i];
    }
    n ++;
    v[p] = x;
}

bool prim(int n)
{
    if (n == 0 || n == 1 || (n % 2 == 0 && n > 2))
    {
        return false;
    }
    else
    {
        for (int d = 3; d * d <= n; d += 2)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
    }

    return true;
}


void citireVector(int &n, int v[])
{
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        cin >> v[i];
    }
}

void afisareVector(int n, int v[])
{
    for (int i = 1; i <= n; i ++)
    {
        cout << v[i] << " ";
    }
}



/// ignora asta

/**
*
*
*
*
*
*
*
*
*
*
*/

void back(int n, int k, int p[], int f[])
{
    for (int i = 1; i <= n; i ++)
    {
        if (!f[i])
        {
            f[k] = i;
            p[i] = 1;
            if (k < n)
                back(n, k + 1, p, f);
            else
                //
            p[i] = 0;
        }
    }
}

/// si asta
/// https://www.pbinfo.ro/probleme/256/fiboverif
bool isFibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        int a = 1;
        int b = 1;
        int c;
        do
        {
            c = a + b;
            a = b;
            b = c;
            if(n == c)
            {
                return true;
            }

        }while(c <= n);

        return false;
    }
}


int main()
{


    int n;
    cin >> n;
    int x;
    for (int i = 1; i <= n; i ++)
    {
        cin >> x;
        isFibonacci(x) ? cout << "DA" << '\n' : cout << "NU" << '\n';
    }
    /// cout << geom(n) << " ";
    /// cout << harmon(n) << " ";
    /// cout << patr(n) << " ";


    return 0;
}
