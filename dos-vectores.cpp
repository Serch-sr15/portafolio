#include <iostream>
using namespace std;
 
void sumar(int a[], int b[], int c[],int dim) {
    for (int i = 0; i < dim; i++) {
        c[i] = a[i] + b[i];
    }
}
 
void imprimir(int v[], int dim)
{
   for(int i = 0; i < dim; i++) {
        cout << v[i] << endl;
   }
   cout << endl << endl;
}
 
int main()
{
    int dim;
    cout << "Ingresa la dimensión" << endl;
    cin >> dim;
 
    int a[dim];
    int b[dim];
 
    for(int i = 0; i < dim; i++) {
        a[i] = i * 10;
        b[i] = i * 5;
    }
 
    cout << "Vector A " << endl;
    imprimir(a, dim);
 
    cout << "Vector B " << endl;
    imprimir(b, dim);
 
    return 0;
}
