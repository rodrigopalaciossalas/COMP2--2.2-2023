#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n) 
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
    for (long long i = 5; i * i <= n; i += 6) 
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
    long long l1 = 2000000;
    long long s1 = 0;

    for (long long i = 2; i < l1; i++) 
    {
        if (isPrime(i)) 
        {
            s1 += i;
        }
    }

    cout << "la suma " << l1 << " es: " << s1 << endl;

    return 0;
}
