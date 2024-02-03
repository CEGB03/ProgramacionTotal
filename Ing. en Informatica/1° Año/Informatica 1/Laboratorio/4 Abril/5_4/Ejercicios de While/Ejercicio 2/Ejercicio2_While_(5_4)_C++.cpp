#include <iostream>
#define Sumar(a,b) a+b
#define Restar(a,b) a-b
#define Multiplicar(a,b) a*b
#define Dividir(a,b) a/b

using namespace std;

int main()
{
	float Suma=0, Resta=0, Multi=0, Divi=0, Result=0, Num1=0, Num2=0;
	int Accion=0;
	char Respuesta= ' ';
	cout<<"¿Esta listo para empezar(S/N)?  ";
	cin>>Respuesta;
	
	while(Respuesta == 'S' || Respuesta == 's')
	{
		cout<<"Ingrese el primer numero: ";
		cin>>Num1;
		cout<<"Ingrese el segundo numero: ";
		cin>>Num2;
		
		Suma=Sumar(Num1,Num2);
		Resta=Restar(Num1,Num2);
		Divi=Dividir(Num1,Num2);
		Multi=Multiplicar(Num1,Num2);
		
		cout<<"Ingrese 1 si quiere hacer una Suma entre "<<Num1<<" y "<<Num2<<endl;
		cout<<"Ingrese 2 si quiere hacer una Resta entre "<<Num1<<" y "<<Num2<<endl;
		cout<<"Ingrese 3 si quiere hacer una Miltiplicacion entre "<<Num1<<" y "<<Num2<<endl;
		cout<<"Ingrese 4 si quiere hacer una Divicion entre "<<Num1<<" y "<<Num2<<endl;
		cin>>Accion;
		if(Accion==1)
			cout<<"El resultado de la suma es: "<<Suma<<endl;
		if(Accion==2)
			cout<<"El resultado de la resta es: "<<Resta<<endl;
		if(Accion==3)
			cout<<"El resultado de la multiplicacion es: "<<Multi<<endl;
		if(Accion==4)
			cout<<"El resultado de la divicion es: "<<Divi<<endl;
		
		
		cout<<"¿Otra operación con los mismos números (S/N)?  ";
		cin>>Respuesta;
	}
	cout<<"Has salido del bucle.";
	return 0;
}

