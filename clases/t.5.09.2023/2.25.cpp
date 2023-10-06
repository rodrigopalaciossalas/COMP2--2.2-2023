#include <iostream>

using namespace std;

int main(){

    int num1;
    int num2;
    int num3;

    cout << "primer numero: " << endl;
    cin >> num1;

    cout << "segundo numero: " << endl;
    cin >> num2;

    cout << "tercer numero: " << endl;
    cin >> num3;


    if (num3%num1==0)

        cout << "El " << num1 << " es factor del divisor de " << num3 << endl;
    
    else
    
        cout << "El " << num1 << " no es factor del divisor de " << num3 << endl;
    
    if (num2%num1==0)
    
        cout << "El " << num2 << " es factor del divisor de " << num3 << endl;

    else
    
        cout << "El " << num2 << " no es factor del divisor de " << num3 << endl;

    return 0;
}