#include <iostream>
using namespace std;
int main (){
    int x;
    int y;
    cout<<"Que sona desea comprar, Super Vip (1), Vip (2), Preferencial (3), General (4): \n";
    cin>> x;
    cout<<"Si eres cliente claro, poner 1, de lo contrario poner 0:\n ";
    cin>> y;
    if (x==1)
        if (y==1)
            cout<<" Debe pagar 212 - 20% \n";
        if (y==0)
            cout<<" Debe pagar 212  \n";
    if (x==2)
        if (y==1)
            cout<<" Debe pagar 170 - 20% \n";
        if (y==0)
            cout<<" Debe pagar 170  \n";

    if (x==3)
        if (y==1)
            cout<<" Debe pagar 136 - 20% \n";
        if (y==0)
            cout<<" Debe pagar 136  \n";
    if (x==4)
        if (y==1)
            cout<<" Debe pagar 59 - 20% \n";
         if (y==0)
            cout<<" Debe pagar 59  \n";

     return 0;
}
