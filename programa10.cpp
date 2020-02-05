# escribirunprogramaqueacepte25enterosydescribacadaunocomoparoimpar.cpp
using namespace std;
void main()
{int n, cp=0,ci=0,c=0,x;
clrscr();
cout<<"Ingresar cantidad de numeros:";
cin>>n;
while (c<n)
{
cout<<"Ingresar numero:";
cin>>x;
if(x % 2==0)
cp=cp+1;
else
ci=ci+1;
c=c+1;
}
cout<<"los numeros pares son:"<<cp<<endl;
cout<<"los numeros impares son:"<<ci<<endl;
return 0;
getch();
}
