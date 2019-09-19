#include <iostream>
using namespace std;
int main() {
    int x;
    do {
        cout << "Dime el numero: ";
        cin >> x;
    }while (10>x||x>30);
    do{cout<<"*";
        x-=1;
    }while (x!=0);

}
