#include <iostream>
 
using namespace std;
 
int main()
{
    int num,positivo,negativo,cero,cant,i,suma,menos;
    positivo=0;
    suma = 0;
    negativo=0;
    menos = 0;
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
            suma=suma + num;
            
        }
        else
        if(num<0)
        {
            negativo+=+1;
            menos = menos + num;
        }
        else
        cero+=+1;
    }
 
    cout<<"\nLa Cantidad de Positivos Son:"<<positivo<<endl;
    cout<<"\nLa Cantidad de Negativos Son:"<<negativo<<endl;
    cout<<"\nLa Cantidad de Ceros Son:"<<cero<<endl;
    cout<<"\nLa Suma total de positivos son:"<<suma<<endl;
    cout<<"\nLa Suma total de negativos son:"<<menos<<endl;
    return 0;
}
