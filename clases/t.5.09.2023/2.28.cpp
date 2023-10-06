#include <iostream>

using namespace std;

int main()
{

    int num1;
    int rem;

    cout << "numero de 4 digitos: " << endl;
    cin >> num1;

    int n1 = num1 / 1000;
    int n2 = (num1 % 1000) / 100;
    int n3 = (num1 % 100) / 10;
    int n4 = (num1 % 10);

    cout << n4 << "  " << n3 << "  " << n2 << "  " << n1 << endl;

}