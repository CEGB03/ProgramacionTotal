#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;
/*En esta función vamos a colocar la ecuación con la que vamos
a aplicar el método osea F(x)
*/
double f(double x){
    //return log(x) + exp( sin( x ) ) - x ;//Modelo para probar los metodos
    //return pow(x,2)+x-4 ;
    return pow(x,5)-3*pow(x,3)-2*pow(x,2)+2;
    //return pow(x,x-cos(x));//Ejercicio 2)c Guia 2

}
/*En esta segunda función vamos a colocar el
despeje de x de mi F(x)
*/
double X(double x){
    return pow( (3 * pow(x, 3) + 2 * pow(x, 2) - 2), 1.0/5);
    //return 4-pow(x,2) ;
    //return pow(x,x-cos(x));//Ejercicio 2)c Guia 2
}
int main(){
    int i;
    double E,xi,xn,Ep,tol;
    cout<<" METODO DE PUNTO FIJO"<<endl;
    cout<<" --------------------\n"<<endl;
    cout<<"f(x)"<<endl;
    cout<<"----"<<endl;
/*En este "for" evaluamos nuestra función*/
    for(int j=0;j<=25;j++){
        E=f(j);/*Esta parte es en donde se evalúa la función*/
        cout<<"f("<<j<<")="<<E<<endl;
    }
    cout<<"\n\nIngrese el valor inicial:";
    cin>>xi;
    cout<<"Ingresa la tolerancia:";
    cin>>tol;
    system("cls");
    cout<<setw(1)<<"It";
    cout<<setw(18)<<" Xi";
    cout<<setw(40)<<" Error porcentual"<<endl;
    for(int j=0;j<65;j++){
        cout<<"-";
    }
    i=0;
    do{
        xn=X(xi);/*Aquí evaluamos la función que nos queda despues de despejar x*/
        Ep=fabs((xn-xi)/xn)*100;/*Error porcentual*/
        cout<<"\n";
        cout<<setw(1)<<i;
        cout<<setw(15)<<"X("<<xn<<")="<<xi;
        cout<<setw(30)<<Ep<<"%"<<endl;
        for(int j=0;j<65;j++){
            cout<<"-";
        }
        xi=xn;
        i++;
    }while(tol<=Ep);
    return 0;
    getch();
}