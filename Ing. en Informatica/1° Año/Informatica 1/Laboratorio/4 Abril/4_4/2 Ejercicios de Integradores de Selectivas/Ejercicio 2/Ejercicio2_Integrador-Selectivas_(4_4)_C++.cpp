/*
2. Una expendedora de alfajores de chocolate tiene 3 tipos: simple, doble y triple capa de dulce de leche, las cuales tienen un costo de $10.00, $20.00 y $30.00 respectivamente. La máquina permite realizar el pago total de la compra en “efectivo”, “débito” o “tarjeta”. Para cada caso:
- Si el cliente paga en efectivo, el programa deberá calcular el vuelto en caso de no pagar justo.
- Si el cliente paga con débito, tiene un descuento del 2% del total de la compra
- Si el cliente paga con tarjeta de crédito, tiene un recargo del 2% del total de la compra.

Realice un algoritmo que permita solicitar el tipo de alfajor, el modo de pago y calcule el monto a abonar por el cliente. 
*/

/*
precio=precio-((descuento*precio)/100)
*/

#include <iostream>
using namespace std;

int main()
{
	int Alfajor_S=10, Alfajor_D=20, Alfajor_T_C_DL=30;
	int Total=0, Tipo_Pago=0, Pago=0;
	float Tipo_Pago_Tarjetas=0;
	
	cout<<"\nDijite 1 si va a comprar el Alfajor Simple\n";
	cout<<"Dijite 2 si va a comprar el Alfajor Doble\n";
	cout<<"Dijite 3 si va a comprar el Alfajor Triple capa de Dulce de Leche\n\n";
	cin>>Total;
	switch(Total)
	{
	case 1:
		Total=10;
		cout<<"\nAh seleccionado el Alfajor Simple que tiene un valor de $10\n";
		break;
	case 2:
		Total=20;
		cout<<"\nAh seleccionado el Alfajor Doble que tiene un valor de $20\n\n";
		break;
	case 3:
		Total=30;
		cout<<"\nAh seleccionado el Alfajor Triple capa de Dulce de Leche que tiene un valor de $30\n\n";
		break;
	default:
		cout<<"\nAh ingresado un caracter invalo, vualva a intentar.";
		break;	
	}
	
	cout<<"\nDijite 1 si va a pagar con Efectivo\n";
	cout<<"Dijite 2 si va a pagar con Debito\n";
	cout<<"Dijite 3 si va a pagar con Tarjeta\n\n";
	cin>>Tipo_Pago;
	switch(Tipo_Pago)
	{
	case 1:
		Tipo_Pago=Total;
		cout<<"\nAl pagar con efectivo ahora tendra que ingresar con caunto pagara. \n\n\n";
		break;
	case 2:
		Tipo_Pago_Tarjetas=Tipo_Pago;
		Tipo_Pago_Tarjetas=Tipo_Pago_Tarjetas-((20*Tipo_Pago_Tarjetas)/100);
		cout<<"Al pagar con debito tiene un desceunto del 2%, y su total a pagar sera de: "<<Tipo_Pago_Tarjetas<<"\n";
		break;
	case 3:
		Tipo_Pago_Tarjetas= Total*1.02;
		cout<<"Al pagar con tarjeta tiene un recargo del 2%, y su total a pagar sera de: "<<Tipo_Pago_Tarjetas<<"\n";
		break;
	default:
		cout<<"Ah ingresado un caracter invalo, vualva a intentar.";
		break;		
	}
	
	if(Tipo_Pago == Total)
	{
		cout<<"\nIngrese con caunto pagara para saber si hay que darle un vuelto\n\n";
		cin>>Pago;
		if(Pago>Total)
		{
			Pago-=Total;
			cout<<"Su vuelto sera de: "<<Pago<<"\n";
		}
	}
	
	return 0;
}

