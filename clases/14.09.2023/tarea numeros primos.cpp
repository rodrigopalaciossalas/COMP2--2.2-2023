#include <iostream>
using namespace std;
#include <cmath>

bool primos(int num1) {
    
    if (num1 <= 1) 
    {
        return false;  
    }
    
    if (num1 <= 3) 
    {
        return true; 
    }
    
    if (num1 % 2 == 0 || num1 % 3 == 0) 
    {
        return false;  
    }
    
    for (int a = 5; a * a <= num1; a += 6) 
    {
        if (num1 % a == 0 || num1 % (a + 2) == 0) 
        {
            return false;  
        }
    }
    
    return true;
}

int main() {
  int n;
  cout << "numero a calcular: ";
  cin >> n;
  cout << endl;
  for(int i = 0; i<n; i++)
    {
      if(primos(i))
        cout<< i << endl;
    }
  
  return 0;
}