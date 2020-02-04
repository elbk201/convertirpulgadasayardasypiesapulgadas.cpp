# convertirpulgadasayardasypiesapulgadas.cpp
using namespace std;
int main(int argc, char**argv)
{
int pulgadas, yardas;
cout<<"Ingrese el numero de pulgadas: "<<ENDL;
cin>>pulgadas;
yardas = pulgadas * (1.0 / 36);
cout<<"\nLas yardas son: "<<yardas;
return 0;
}
