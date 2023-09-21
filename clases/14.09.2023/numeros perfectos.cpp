#include <iostream>
using namespace std;

bool prefectos(int n1) 
{
    int s1 = 1; 

    for (int i = 2; i * i <= n1; i++) 
    {
        if (n1 % i == 0) 
        {
            s1 += i;

            if (i != n1 / i) 
            {
                s1 += n1 / i;
            }
        }
    }

    return s1 == n1;
}

int main() 
{
    int n;
    cout << "numero ";
    cin >> n;
  
    for (int i = 0; i < n; i++) {
      if(prefectos(i))
        cout<< i << ", ";
    }
    return 0;
}