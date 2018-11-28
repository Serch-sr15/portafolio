#include<iostream>
using namespace std;

int ordenar(int[],int);
int imprimir(int[]);

int main()
{
  int c,lista[10],ord;
  for(c=0;c<=10;c++)
  {
    cout<<"Numero "<<c+1<<": "; cin>>lista[c];
  }
  cout<<"\n  Opcion: 1 Ascendente  Opcion: 2 Descendente "; cin>>ord;
  if(ord==1 || ord==2)
  {
    ordenar(lista,ord);
    imprimir(lista);
  }
}

int ordenar(int lista[],int ord)
{
  int c1,c2,aux;
  for(c1=0;c1<=10;c1++)
  {
    for(c2=0;c2<10;c2++)
    {
      if(ord==1)
      {
        if(lista[c2]>lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
      }
      else
      {
        if(lista[c2]<lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
      }
    }
  }
  return 0;
}

int imprimir(int lista[])
{
int c;
  for(c=0;c<=10;c++)
    cout<<lista[c]<<" ";
  cin.get();cin.get();
}
