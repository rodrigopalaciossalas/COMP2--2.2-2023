#include <iostream>

using namespace std;

int main(){
    char ascii1;

    cout << "ingresa simbolo o numero del ASCII: "<<endl;
    cin >> ascii1;

    cout << "le damos 5 valores mas uwu\n"<<endl;
    int num1= int(ascii1);

for (int x=1;x<=6;x++)
{
    cout << "\n su valos en ASCII es " << num1 << endl;

    cout << "su caracter es " << char(num1) << endl;

    num1 = num1 + 1;     
     
}
}