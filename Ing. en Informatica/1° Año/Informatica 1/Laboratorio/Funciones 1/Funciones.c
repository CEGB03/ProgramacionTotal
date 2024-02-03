//	Todas las funciones que hice en Info 1

//	Funcion de para averiguar la si es par o no
int Paridad(int x){
	if(x%2==0)
		printf("\nEl numero %d es par\n",x);
	if(x%2==1)
		printf("\nEl numero %d no es par\n",x);
}
//	Funcicion de Suma
float Sumar(float x, float y){
	float Suma=0;
	Suma=x+y;
	printf("La suma de %f y %f es %f\n",x,y,Suma);
}
//	Funcicion de Resta
float Restar(float x, float y){
	float Resta=0;
	Resta=x-y;
	printf("La resta de %f y %f es %f\n",x,y,Resta);
}
//	Funcicion de Multiplicacion
float Multiplicar(float x, float y){
	float Multiplicacion=0;
	Multiplicacion=x*y;
	printf("La multiplicacion de %f y %f es %f\n",x,y,Multiplicacion);
}
//	Funcicion de Divicion
float Dividir(float x, float y){
	float Divicion=0;
	Divicion=x/y;
	printf("La divicion de %f y %f es %f\n",x,y,Divicion);
}
//	Funcion de Calculadora Completa
float Calculadora(float x, float y){
	float Suma=0, Resta=0, Divicion=0, Multiplicacion=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para sumar.\n");
	printf("Ingrese 2 para restar.\n");
	printf("Ingrese 3 para multiplicar.\n");
	printf("Ingrese 4 para dividir.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		Suma=x+y;
		printf("La suma de %f y %f es %f\n",x,y,Suma);
		break;
	case 2:
		Resta=x-y;
		printf("La resta de %f y %f es %f\n",x,y,Resta);
		break;
	case 3:
		Multiplicacion=x*y;
		printf("La multiplicacion de %f y %f es %f\n",x,y,Multiplicacion);
		break;
	case 4:
		Divicion=x/y;
		printf("La divicion de %f y %f es %f\n",x,y,Divicion);
		break;
	}
	printf("\n");
}
//	Funcion para el Perimetro
void Perimetro(){
	//	hay que agregar #include <math.h> ya que usa funciones matematicas
	float x=0, y=0, Perimetro=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para realizar el Perimetro del Cuadrado.\n");
	printf("Ingrese 2 para realizar el Perimetro del Rectangulo.\n");
	printf("Ingrese 3 para realizar el Perimetro del Circulo.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		Perimetro=x*2+y*2;
		printf("El Perimetro del Cuadrado es: %f\n",Perimetro);
		break;
	case 2:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		Perimetro=x*2+y*2;
		printf("El Perimetro del Rectangulo es: %f\n",Perimetro);
		break;
	case 3:
		printf("ingrese el valor del radio\n");
		scanf("%f",&x);
		Perimetro=2*M_PI*x;
		printf("El Perimetro del Circulo es: %f\n",Perimetro);
		break;
	}
}
//	Funcion para el Area
void Area(){
	//	hay que agregar #include <math.h> ya que usa funciones matematicas
	float x=0, y=0, Area=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para realizar el Area del cuadrado.\n");
	printf("Ingrese 2 para realizar el Area del rectangulo.\n");
	printf("Ingrese 3 para realizar el Area del circulo.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		Area=x*y;
		printf("El Area del Cuadrado es: %f\n",Area);
		break;
	case 2:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		Area=x*y;
		printf("El Area del Rectangulo es: %f\n",Area);
		break;
	case 3:
		printf("ingrese el valor del radio\n");
		scanf("%f",&x);
		Area=M_PI*pow(x,2);
		printf("El Area del Cuadrado es: %f\n",Area);
		break;
	}
}
int Sumar_Arreglo1D(int Arreglo_Suma[ARREGLO1D]){
	int ii=0, Suma=0;
	for(ii=0; ii<ARREGLO1D; ii++){;
		Suma+=Arreglo_Suma[ii];
	}
	printf("La suma del arreglo es: %d\n",Suma);
	return(Suma);
}
float Dividir(float x, float y){
	float Divicion=0;
	Divicion=x/y;
	//printf("La divicion de %f y %f es %f\n",x,y,Divicion);
	return(Divicion);
}
void Promedio_Arreglos1D(int Arreglo_Suma[ARREGLO1D]){
	int ii=0, Suma=0, Divi=ARREGLO1D;
	float Promedio=0;
	for(ii=0; ii<ARREGLO1D; ii++){;
		Suma+=Arreglo_Suma[ii];
	}
	Promedio=Dividir(Suma,Divi);
	printf("El promedio del arreglo es: %f\n",Promedio);
}
void Trasformar_Num_en_Letras1D(int ArregloEje4Fun[ARREGLO1D]){
	int ii=0;
	for(ii=0; ii<ARREGLO1D; ii++){
		printf("Elemento %d del arrego es %c\n",ii,ArregloEje4Fun[ii]);
	}
}
