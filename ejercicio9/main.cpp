#include <iostream>

using namespace std;
int main() {
    int x;
    int z;
    int y;
    int w;
    cout<<"Dime los segundos: ";
    cin>>x;
    z=(x/3600);
    y=((x%3600)/60);
    w=((x%3600)%60);
    cout<<"Tiene "<<z<<" Horas\n";
    cout<<"Tiene "<<y<<" Minutos\n";
    cout<<"Tiene "<<w<<" segundos\n";
}

//no se como hacerlo con funciones
