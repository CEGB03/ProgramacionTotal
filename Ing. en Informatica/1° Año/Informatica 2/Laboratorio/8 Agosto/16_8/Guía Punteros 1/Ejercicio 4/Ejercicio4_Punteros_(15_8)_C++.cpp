/*
4. Escribir un programa que intercambie los valores enteros de a y b
utilizando punteros.
*/
/*
sumarlos en una variable, y al intercambiar el primer numero restrle el sumado a la variable q quedo sin cambiar
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

float Carga_Nums(float *x, float *y);

int main(){
	float Num1=0, Num2=0, Suma=0, *Operador1=NULL, *Operador2=NULL;
	Operador1=&Num1;
	Operador2=&Num2;
	Suma=Carga_Nums(Operador1, Operador2);
	cout<<"Numeros Orginales:"<<endl;
	cout<<"Primer numero cargado: "<<Num1<<endl;
	cout<<"Segundo numero cargado: "<<Num2<<endl;
	cout<<"Numeros Intercambiados:"<<endl;
	Num1=Num2;
	Num2=Suma-Num1;
	cout<<"Primer numero cargado: "<<*Operador1<<endl;
	cout<<"Segundo numero cargado: "<<*Operador2<<endl;
	system("pause");
	return 0;
}
	float Carga_Nums(float *x,float *y){
		for(int ii=1 ; ii<=2 ; ii++){
			if(ii==1){
				cout<<"Ingrese el primer numero a intercambiar"<<endl;
				cin>>*x;
			}
			else{
				if(ii==2){
					cout<<"Ingrese el segundo numero a intercambiar"<<endl;
					cin>>*y;
				}
			}
		}
		return (*x)+(*y);
	}
		
