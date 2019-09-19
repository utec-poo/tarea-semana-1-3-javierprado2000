#include <iostream>
using namespace std;
int main() {
    int x;
    int c=0;
    do {
        cout << "Dime el numero: ";
        cin >> x;
        c += 1;
    }while (x!=0);
    cout<<"El numero de intentos fue "<<c;
}
