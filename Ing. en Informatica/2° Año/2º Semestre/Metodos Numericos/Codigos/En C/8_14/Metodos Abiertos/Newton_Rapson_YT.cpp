#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
/*En esta funcion vamos a colocar la ecuacion con la que vamos
a aplicar el metodo osea F(x)
*/
double f (double x)
{
    return pow (x, 3) - 2 * x - 5;
//return pow(x,5)-x-1;
}
/*En esta segunda funcion vamos a colocar la derivada de F(x)
*/
double fp (double x)
{
    return 3 * pow (x, 2) - 2;
//return 5*pow(x,4)-1;
}
int
main ()
{
    int i;
    double xn, X, x, Ep, tol;
    cout << " METODO DE NEWTON-RAPHSON" << endl;
    cout << " ------------------------\n\n" << endl;
/*Este "for" nos sirve para evaluar F(x) y es la lista de valores
que se despliega primero para asi poder en donde hay cambios de signo
y colocar el valor inicial.
*/
    cout << "f(x)" << endl;
    for (int j = 0; j <= 15; j++)
    {
        X = f(j); //F(x)
// X=pow(j,5)-j-1;
        cout << "f(" << j << ")=" << X << "\n";
    }
    cout << "\n\nIngresa la primera aproximacion(x1):";
    cin >> x;
    cout << "Ingresa la tolerancia:";
    cin >> tol;
    system ("cls");
    cout << setw (1) << "i";
    cout << setw (18) << " X(n)";
    cout << setw (40) << " Error porcentual" << endl;
    for (int j = 0; j < 65; j++)
    {
        cout << "-";
    }
    i = 1;
    do
    {
/*Aqui ya aplicamos los conceptos del metodo.
*/
        if (fp (x) > 0)
        {
            xn = x - (f (x) / fp (x));
            Ep = fabs ((xn - x) / xn) * 100;
        }
        else
        {
            printf ("no converge");
            break;
        }
        cout << "\n";
        cout << setw (1) << i;
        cout << setw (15) << "X(" << i << ")=" << x;
        cout << setw (30) << Ep << "%" << endl;
        for (int j = 0; j < 65; j++)
        {
            cout << "-";
        }
        x = xn;
        i++;
    }
    while (tol <= Ep);
    getch ();
    return 0;
}