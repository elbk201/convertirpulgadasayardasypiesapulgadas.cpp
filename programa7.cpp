# determinarsinunnumerodadoesdivisibleentre14.cpp
using namespace std;
int main(int argc, char**argv)
{
int numero;
cout<<"Ingrese el numero: "<<ENDL;
cin>>numero;
if(numero % 1 == 0) {cout<<"Es divisible"<<endl;}
if(numero % 2 == 0) {cout<<"Es divisible"<<endl;}
if(numero % 7 == 0) {cout<<"Es divisible"<<endl;}
if(numero % 14 == 0) {cout<<"Es divisible"<<endl;}

else{cout<<"No es divisible"}
return 0;
}
