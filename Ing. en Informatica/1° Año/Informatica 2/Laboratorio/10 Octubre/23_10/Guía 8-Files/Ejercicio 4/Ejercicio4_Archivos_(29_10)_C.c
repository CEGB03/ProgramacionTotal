/*
	4. Escriba un programa que busque dentro del archivo el_quijote.txt la
cantidad de veces que aparecen las palabras “Quijote”, “Rocinante” y “Sancho”.
Recuerden descargar el archivo en el mismo lugar donde corren el programa.

			Segun internet, la cantidad de apariciones es de:
"Quijote"  =  2174
"Rocinante"  =  
"Sancho"  =  2147

			Segun comparativa propia, la cantidad de apariciones es de:
"Quijote"  =  848
"Rocinante"  =  120
"Sancho"  =  691
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam_Buqueda_Palabras 5
#define Quijote 848
#define Rocinante 120
#define Sancho 691
int main(){
	FILE *P_Archivo_4=fopen("./el_quijote.txt","r");
	static const char 
		*Busqueda_Palabras[Tam_Buqueda_Palabras]={"QUIJOTE","Quijote","Rocinante","SANCHO","Sancho"};
	char Cadenas_Recuperada[60];
	int Repeticiones[Tam_Buqueda_Palabras]={0};
	if(P_Archivo_4==NULL){
		printf("Imposible abrir el libro del quijote\n\n");
		exit (10);
	}
	else{
		printf("Si se pudo abrir el libro del quijote\n\n");
		while(!feof(P_Archivo_4)){
			fscanf(P_Archivo_4, "%s", &Cadenas_Recuperada);
			for(int ii=0 ; ii<Tam_Buqueda_Palabras ; ii++){
				if(strstr(Cadenas_Recuperada,Busqueda_Palabras[ii])!=NULL)
					*(Repeticiones+ii)=+1;
			}
		}
		fclose(P_Archivo_4);
		for(int ii=0 ; ii<Tam_Buqueda_Palabras ; ii++)
			printf("Hubo %d apariciones de la palabra %s\n",*(Repeticiones+ii), *(Busqueda_Palabras+ii));
		/*
		for(int ii=0 ; ii<Tam_Buqueda_Quijote ; ii++){
				
				if(strcmp(Busqueda_Quijote[ii],Cadenas_Recuperada)==0){
					*(Repeticiones)+=1;
					*(Repeticiones_Q+ii)+=1;
				}
			}
			for(int ii=0 ; ii<Tam_Buqueda_Rocinante ; ii++){
				if(strcmp(Busqueda_Rocinante[ii],Cadenas_Recuperada)==0){
					*(Repeticiones+1)+=1;
					*(Repeticiones_R+ii)+=1;
				}
			}
			for(int ii=0 ; ii<Tam_Buqueda_Sancho ; ii++){
				if(strcmp(Busqueda_Sancho[ii],Cadenas_Recuperada)==0){
					*(Repeticiones+2)+=1;
					*(Repeticiones_S+ii)+=1;
				}
			}
		}
		fclose(P_Archivo_4);
		
		printf("Finalizo la busqueda en el libro del quijote\n\n");
		printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",Busqueda_Quijote[1], Repeticiones[0]);
		printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",Busqueda_Rocinante[0], Repeticiones[1]);
		printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",Busqueda_Sancho[1], Repeticiones[2]);
		
		
		
		printf("\n\n");
		printf("La cantidad de veces que aparecio la palabra %s realmente es de %d.\n",Busqueda_Quijote[1], Quijote);
		printf("La cantidad de veces que aparecio la palabra %s realmente es de %d.\n",Busqueda_Rocinante[0], Rocinante);
		printf("La cantidad de veces que aparecio la palabra %s realmente es de %d.\n",Busqueda_Sancho[1], Sancho);
		printf("\n\n");
		for(int ii=0 ; ii<Tam_Buqueda_Quijote ; ii++){
			printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",*(Busqueda_Quijote+ii), *(Repeticiones_Q+ii));
		}
		for(int ii=0 ; ii<Tam_Buqueda_Rocinante ; ii++){
			printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",*(Busqueda_Rocinante+ii), *(Repeticiones_R+ii));
		}
		for(int ii=0 ; ii<Tam_Buqueda_Sancho ; ii++){
			printf("La cantidad de veces que aparecio la palabra %s es de %d.\n",*(Busqueda_Sancho+ii), *(Repeticiones_S+ii));
		}
		printf("\n\n");
		*/
	}
	
	system("pause");
	return 0;
}

