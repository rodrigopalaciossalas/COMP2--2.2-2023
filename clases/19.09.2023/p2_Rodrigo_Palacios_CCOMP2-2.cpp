#include <iostream>

int main() 
{
    int sum1 = 0;
    int sum2 = 1;
    int sum3 = 2;

    while (sum3 <= 4000000) 
    {
        if (sum3 % 2 == 0) 
        {
            sum1 += sum3;
        }

        int temp = sum2 + sum3;
        sum2 = sum3;
        sum3 = temp;
    }

    std::cout << "la suma de fibonachi es: " << sum1 << std::endl;

    return 0;
}
