#include <iostream>
using namespace std;
int main (){
 string x;
 int y;
 cout<<"Dime la letra: ";
 cin>>x;
 cout<<"Dime el numero: ";
 cin>>y;
 if (x=="a"||"c"||"e"||"g")
     if (y%2==0& 1<=y<=8)
         cout<<"Es negro";
     if (!y%2==0& 1<=y<=8)
         cout<<"Es blanco";
     else
         cout<<"el numero no es valido";
 if (x=="b"||"d"||"f"||"h")
    if (y%2==0& 1<=y<=8)
            cout<<"Es blanco";
    if (!y%2==0& 1<=y<=8)
        cout<<"Es negro";
    else
        cout<<"el numero no es valido";

}
