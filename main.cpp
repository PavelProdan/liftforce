#include <iostream>
using namespace std;

int main()
{
    float lungime,latime,viteza,aria,rezultat,rz;
    cout<<"\n Toate datele trebuie sa fie exprimate in unitatea de masura internationala.";
    cout<<"\n Lift=coeficient * (densitate*viteza^2)/2 * aria aripii";
    cout<<"\n Lungimea efectiva a aripii:";
    cin>>lungime;
    cout<<"\n Latimea efectiva a aripii:";
    cin>>latime;
    cout<<"\n Viteza de deplasare:";
    cin>>viteza;
    aria=lungime*latime;
    rz=(1.225*viteza*viteza)/2;
    rezultat=0.29*rz*aria;
    cout<<"Lift="<<rezultat<<" kg";


    return 1;
}
