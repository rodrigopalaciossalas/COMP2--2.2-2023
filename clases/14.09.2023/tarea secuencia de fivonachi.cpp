#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int cont1=1;
    int cont2=0;
    int f;

    cout<<" cantidad de numeros: "<<endl;
    cin>>f;

    cout<<"numeros fibonacci son" << f << endl;
    
    for(int a= 1; a<=f; a++) 
    {
      cout << cont2 << ",";

      cont1 = cont1+cont2; 
      cont2 = cont1 - cont2;
    }
}