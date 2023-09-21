#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindromo(int n) 
{
    string str = to_string(n);
    string reverso = str;
    reverse(reverso.begin(), reverso.end());
    return str == reverso;
}

int l_palindromo() 
{
    int l_palindromo = 0;

    for (int i = 100; i < 1000; i++) 
    {
        for (int j = i; j < 1000; j++) 
        {
            int p1 = i * j;
            if (palindromo(p1) && p1 > l_palindromo) 
            {
                l_palindromo = p1;
            }
        }
    }

    return l_palindromo;
}

int main() 
{
    int r1 = l_palindromo();
    cout << "El palíndromo es: " << r1 << endl;

    return 0;
}
