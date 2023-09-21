#include <iostream>
using namespace std;

long long g1(long long a, long long b) 
{
    if (b == 0) 
    {
        return a;
    }
    return g1(b, a % b);
}

long long lcm(long long a, long long b) 
{
    return (a * b) / g1(a, b);
}

int main() 
{
    long long r1 = 1;
    for (int i = 2; i <= 20; i++) 
    {
        r1 = lcm(r1, i);
    }

    cout << "El menor multiplo es: " << r1 << endl;

    return 0;
}
