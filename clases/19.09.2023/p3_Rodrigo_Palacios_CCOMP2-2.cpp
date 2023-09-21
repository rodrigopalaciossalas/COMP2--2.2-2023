#include <iostream>
using namespace std;
long long factor_largo(long long n) 
{
    long long largo = 0;
    while (n % 2 == 0) 
    {
        largo = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) 
    {
        while (n % i == 0) 
        {
            largo = i;
            n /= i;
        }
    }

    if (n > 1) 
    {
        largo = n;
    }

    return largo;
}

int main() {
    long long num1 = 600851475143LL;
    long long largo_2 = factor_largo(num1);

    cout << "El factor primo: " << num1 << " es: " << largo_2 << endl;

    return 0;
}
