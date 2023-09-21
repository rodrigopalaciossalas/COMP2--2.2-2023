#include <iostream>
using namespace std;

bool isPrime(int n)
 {
    if (n <= 1) 
    {
        return false;
    }

    if (n <= 3) 
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) 
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int c1 = 0;
    int n1 = 2;

    while (c1 < 10001) 
    {
        if (isPrime(n1)) 
        {
            c1++;
        }

        if (c1 < 10001) 
        {
            n1++;
        }
    }

    cout << "El 10,001er número primo es: " << n1 << endl;

    return 0;
}
