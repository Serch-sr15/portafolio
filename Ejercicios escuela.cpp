// Ejercicios escuela.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include "math.h"
	using namespace std;

int main()
{
	// clase 22 febrero.cpp : Defines the entry point for the console application.
	//


/*cout<<"-----------------------="<<endl<<"Primer programa"<<endl<<"---------------------"<<endl;
		int a[5], b[5], c[5];
		for (int i=0;i<5;i++)
		{
		cout<<"Ingrese el valor "<<i<<" valor de la primera matriz: ";
		cin>>a[i];
		}
		for (int i=0;i<5;i++)
		{
		cout<<"Ingrese el valor "<<i<<" valor de la segunda matriz: ";
		cin>>b[i];
		}
		for (int i=0;i<5;i++)
		{
		c[i]= a[i]+b[i];
		}
		for (int i=0;i<5;i++)
		{
		cout<<"la suma de las matrices en la posicion "<<i<<" es "<<c[i]<<endl;
		}
		getch();
		system("CLS");
		cout<<"--------------------"<<endl<<"Segundo programa"<<endl<<"-----------------"<<endl;
		int i=0;
		int vec[500];
		int vec2[500];

		for(i=0;i<=100;i++)
		{
		vec[i]=i;
		}
		for(i=0;i<=100;i++)
		{
		cout<<"Valor numero "<<i+1<<" :"<< vec[i]<<endl;
		}
		for(i=0;i<=100;i++)
		{
		vec2[i]=vec[i]*vec[i];
		}
		for(i=0;i<=100;i++)
		{
		cout<<"Valor 2  numero  "<<i+1<<" :"<<vec2[i] <<endl;
		}
		getch();
		system("cls");
		cout<<"------------------"<<endl<<"Tercer programa"<<endl<<"--------------------"<<endl;
		int z=5;
		int veca[5];
		int vecb[5];
		int vecc[5];

		for(int i=0;i<=4;i++)
		{
		cout<<"Introduce un valor del vector A ";
		cin>>veca[i];
		}
		cout<<"--------------------------------"<<endl;
		for(int i=0;i<=4;i++)
		{
		cout<<"Introduce un valor del vector B ";
		cin>>vecb[i];
		}
		cout<<"--------------------------------"<<endl;
		for(int i=0;i<=4;i++)
		{
		z--;
		vecc[i]=veca[i]*vecb[z];
		}
		for(int i=0;i<=4;i++)
		{
		cout<<"Vector c ="<<vecc[i]<<endl;
		}
		getch();
		system("cls");

		cout<<"--------------------"<<endl<<"Cuarto programa"<<endl<<"-----------------"<<endl;


		int _tmain(int argc, _TCHAR* argv[])
		{ long int FIB[100];
		long int cont = 0;

		FIB[0]=1;
		cout<<FIB[0]<<endl;
		FIB[1]=2;
		cout<<FIB[1]<<endl;
		for(cont=2; cont<25; cont++)
		{
		FIB[cont]= (FIB[(cont-1)]) + (FIB[(cont-2)]);
		cout<<FIB[cont]<<endl;
		}

		getch();
		return 0;
		}

		cout<<"--------------------"<<endl<<"Tarea primer programa"<<endl<<"-----------------"<<endl;
		getch();
		int matriz[5][6] = { { 0 } };
		int suma = 0;

		int time(NULL);

		for (int i = 0; i<5; i++) {
		for (int j = 0; j<6; j++) {
		matriz[i][j] = rand() % 2;
		suma += matriz[i][j];
		cout << matriz[i][j] << " ";
		}
		cout << endl;
		}

		cout << "La suma de todos los elementos de la matriz es: " << suma << endl;
		getch();
		system("cls");
		cout<<"----------------------"<<endl<<"Tarea tercer programa"<<endl<<"--------------------"<<endl;
		int d[2][2],e[2],f[2];
		e[0]=0;
		e[1]=0;
		f[0]=0;
		f[1]=0;
		for (int i=0;i<2;i++)
		{
		for(int k=0;k<2;k++)
		{
		cout<<"Esribe el valor de la matriz en el lugar "<<i<<", "<<k<<" de la matriz ";
		cin>>d[i][k];
		}
		}
		for (int i=0;i<2;i++)
		{
		e[0] += d[0][i];
		e[1] += d[1][i];
		f[0] += d[i][0];
		f[1] += d[i][1];
		}
		cout<<"Renglones"<<endl<<e[0]<<endl<<e[1];
		cout<<"Columna"<<endl<<f[0]<<endl<<f[1];
		getch();*/
		cout << "-----------------" << endl << "Tarea tercer programa" << endl << "-----------------" << endl;
		int g[2][2], l[2];
		l[0] = 0;
		l[1] = 0;
		for (int i = 0; i<2; i++)
		{
			for (int k = 0; k<2; k++)
			{
				cout << "Esribe el valor de la matriz en el lugar " << i << ", " << k << " de la matriz ";
				cin >> g[i][k];
			}
		}
		for (int i = 0; i<2; i++)
		{
			l[0] += g[i][0];
			l[1] += g[i][1];
		}
		if (l[0]>l[1])
		{
			cout << "El meyor es " << l[0];
		}
		else
		{
			cout << "El meyor es " << l[1];
		}
		getch();
		return 0;
	}

