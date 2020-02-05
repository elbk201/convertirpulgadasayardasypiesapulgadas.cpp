# introducirunconjuntode25numeros.determinarlacantidaddenumerospositivosynegativos.cpp
using namespace std;
int main()
{
    int num,pos,neg,cero,cant,i;
    pos=0;
    neg=0;
    cero=0;
    cout<<"Introduzca Cantidad de Numeros:";
    cin>>cant;
    for(i=1; i<=cant;i++)
    {
        cout<<"Introduzca un Numero Entero:";
        cin>>num;
        if (num>0)
        {
            positivo+=+1;
        }
        else
        if(num<0)
        {
            negativo+=+1;
        }
        else
        cero+=+1;
    }
 
    cout<<"\nLa Cantidad de Positivos Son:"<<positivo<<endl;
    cout<<"\nLa Cantidad de Negativos Son:"<<negativo<<endl;
    cout<<"\nLa Cantidad de Ceros Son:"<<cero<<endl;
    return 0;
}
