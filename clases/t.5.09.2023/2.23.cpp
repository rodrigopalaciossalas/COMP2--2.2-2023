 #include <iostream>

using namespace std;

int main(){

    //Definiendo los valores
    
    string o2 = "Y el numero menor es: "; 
    string o1 = "El numero mayor es: ";

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    
    //datos ingresados

    cout << "numero 1: " << endl;
    cin >> n1;
    
    cout << "numero 2 :" << endl;
    cin >> n2;
    
    cout << "numero 3 :" << endl;
    cin >> n3;
    
    cout << "numero 4: " << endl;
    cin >> n4;
    
    cout << "numero 5: " << endl;
    cin >> n5;
// if comparador

    if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5)

        cout << o1 << n1 << endl;

    if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5)

        cout << o1 << n2 << endl;
    
    if (n3 >= n2 && n3 >= n1 && n3 >= n4 && n3 >= n5)

        cout << o1 << n3 << endl;

    if (n4 >= n2 && n4 >= n3 && n4 >= n1 && n4 >= n5)

        cout << o1 << n4 << endl;

    if (n5 >= n2 && n5 >= n3 && n5 >= n4 && n5 >= n1)

        cout << o1 << n5 << endl;

    if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5)

        cout << o2 << n1 << endl;
    
    if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5)

        cout << o2 << n2 << endl;
    
    if (n3 <= n2 && n3 <= n1 && n3 <= n4 && n3 <= n5)

        cout << o2 << n3 << endl;
    
    if (n4 <= n2 && n4 <= n3 && n4 <= n1 && n4 <= n5)

        cout << o2 << n4 << endl;
    
    if (n5 <= n2 && n5 <= n3 && n5 <= n4 && n5 <= n1)

        cout << o2 << n5 << endl;

    return 0;

}