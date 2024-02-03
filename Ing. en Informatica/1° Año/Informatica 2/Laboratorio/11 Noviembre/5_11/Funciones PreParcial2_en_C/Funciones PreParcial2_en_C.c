//		Listas Enlazadas Simples
struct Node{
	int Dato;
	struct Node *Next;
};
void Agregar_Final(struct Node **Head);
void Agregar_Inicio(struct Node **Head);
void Eliminar_Nodo(struct Node **Head);
void Imprimir_Nodos(struct Node *Head);
void Agregar_Medio(struct Node **Head);
int Contar_Nodos_Activos(struct Node *Head);
float Promedio_Nodos(struct Nodo *Head);
int main(){
	struct Node *Head=NULL;
}
void Agregar_Final(struct Node **Head){
	struct Node *New_Node=NULL;
	struct Node *Temp=NULL;
	int Dato;
	printf("Ingrese un Dato\n");
	scanf("%d",&Dato);
	New_Node=(struct Node *)malloc(sizeof(struct Node));
	if (New_Node == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	New_Node->Dato=Dato;
	New_Node->Next=NULL;
	if (*Head==NULL) {
		*Head=New_Node;
	}
	else {
		while(Temp->Next!=NULL)
			Temp=Temp->Next;
		Temp->Next=New_Node;
	}
}
void Agregar_Inicio(struct Node **Head){
	struct Node *New_Node=NULL;
	int Dato;
	New_Node=(struct Node * )malloc(sizeof(struct Node));
	if(New_Node==NULL) {
		printf("No hay memoria disponible");
		exit(0);
	}
	else{
		printf("Ingrese un Dato\n");
		scanf("%d",&Dato);
		New_Node->Dato=Dato;
		New_Node->Next=*Head;
		*Head=New_Node;
	}
}
void Eliminar_Nodo(struct Node **Head){
	struct Node *Temp=NULL;
	struct Node *Aux=NULL;
	struct Node *Current=NULL;
	int Dato;
	if( *Head==NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese el Dato a borrar\n");
		scanf("%d",&Dato);
		if (Dato==(*Head)->Dato) {
			Temp= *Head;
			*Head=(*Head)->Next;
			free(Temp);
		}
		else{
			Aux= *Head;
			Current=(*Head)->Next;
			while(Current!=NULL && Current->Dato!=Dato) {
				Aux=Current;
				Current=Current->Next;
			}
			if (Current!=NULL) {
				Temp=Current;
				Aux->Next=Current->Next;
				free(Temp);
			}
		}
	}
}
void Imprimir_Nodos(struct Node *Head){
	struct Node *Temp=Head;
	if(Head==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(Temp!=NULL) {
			printf("%d\n",Temp->Dato);
			Temp=Temp->Next;
		}
	}
}
void Agregar_Medio(struct Node **Head){
	int Anterior=0;
	struct Node *Aux=NULL;
	struct Node *Current=NULL;
	struct Node *New_Node=NULL;
	int Dato;
	if(Head==NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese Anteriors de que Dato ira el nuevo Dato a ingresar\n");
		Imprimir_Nodos(Headd);
		scanf("%d",&Anterior);
		
		New_Node=(struct Node *)malloc(sizeof(struct Node));
		if (New_Node==NULL) {
			printf("No hay memoria disponible");
			exit(0);
		}
		if(Anterior==Headd->Dato){
			printf("Ingrese un Dato\n");
			scanf("%d",&Dato);
			
			New_Node->Dato=Dato;
			New_Node->Next=(*Head);
			*Head=New_Node;
		}
		else{
			printf("Ingrese un Dato\n");
			scanf("%d",&Dato);
			New_Node=(struct Node * )malloc(sizeof(struct Node));
			if (New_Node==NULL){
				printf("No hay memoria disponible");
				exit(0);
			}
			New_Node->Dato=Dato;
			
			Aux=(*Head);
			Current=Headd->Next;
			
			while(Current!=NULL && Current->Dato!=Anterior) {
				Aux=Current;
				Current=Current->Next;
			}
			New_Node->Next=Current;
			Aux->Next=New_Node;
			
		}
	}
}
int Contar_Nodos_Activos(struct Node *Head){
	int Activos=0;
	struct Node *Temp=Head;
	if (Head==NULL){
		printf("Lista vacia\n");
		Activos=0;
	}
	else{
		while(Temp!=NULL){
			Activos++;
			Temp=Temp->Next;
		}
	}
	return Activos;
}
float Promedio_Nodos(struct Nodo *Head){
	struct Nodo *Temp= NULL;
	float Prom=0, Contador=0;
	if (Head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Temp = Head;
		while (Temp != NULL) {
			Prom+= (Temp -> Dato);
			Contador++;
			Temp = Temp -> Next;
		}
		Prom/=Contador;
	}
	return Prom;
}

//		Listas Enlazadas Dobles
struct Node{
	int data;
	struct Node *Next;
	struct Node *Prev;
};
int main(){
	struct Node *Head=NULL;
}
void Agregar_Inicio(struct Node **Head);
void Agregar_Medio(struct Node *Head); 
void Agregar_Final(struct Node **Head);
void Eliminar_Nodo(struct Node **Head);
void Imprimir_ID_DI(struct Node *Head);
void Imprimir_Todo(struct Node *Head);
void Agregar_Inicio(struct Node **Head){
	struct Node* New_Node = NULL;
	int new_data=0;
	New_Node = (struct Node * ) malloc(sizeof(struct Node));
	if (New_Node == NULL) {
		printf("No hay memoria disponible");
		exit(0);
	}
	else{
		New_Node -> data = new_data;
		New_Node -> Next = *Head;
		
		if((*Head) != NULL){
			New_Node->Next = (*Head);
			New_Node->Prev = NULL;
			(*Head)->Prev = New_Node;
		}
		else{
			New_Node->Next = NULL;
			New_Node->Prev = NULL;
		}
		(*Head) = New_Node;
	}
	
}
void Agregar_Medio(struct Node *Head){
	struct Node *New_Node = NULL;
	struct Node *Aux = *Head;
	struct Node *Temp = NULL;
	int Ante=0;
	if(Head == NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese antes de que dato ira el nuevo dato a ingresar\n");
		Imprimir_Todo(Aux);
		scanf("%d",&Ante);
		New_Node = (struct Node * ) malloc(sizeof(struct Node));
		if (New_Node == NULL){
			printf("No hay memoria disponible");
			exit(0);
		}
		else{
			if(Ante == (*Head) -> data){
				New_Node -> data = new_data;
				New_Node -> prev = NULL;
				New_Node -> next = *Head;
				*Head = New_Node;
			}
			else{
				New_Node ->data=new_data;
				
				Aux = (*Head);
				Temp = (*Head) -> next;
				
				while (Temp != NULL && Temp -> data != Ante) {
					Aux = Temp;
					Temp = Temp -> next;
				}
				New_Node -> next = Temp;
				Temp -> prev = New_Node;
				Aux -> next = New_Node;
				New_Node -> prev = Aux;
			}
			
		}
	}
}
void Agregar_Final(struct Node **Head){
	struct Node *New_Node = NULL;
	struct Node *Aux = NULL;
	New_Node = (struct Node * ) malloc(sizeof(struct Node));
	if (New_Node == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	else{
		New_Node->data = new_data;
		if((*Head) != NULL){
			New_Node->Next = (*Head);
			New_Node->Prev = NULL;
			(*Head)->Prev = New_Node;
		}
		else{
			New_Node->Next = NULL;
			Aux=(*Head);
			while (Aux -> Next != NULL)
				Aux = Aux -> Next;
			Aux -> Next = New_Node;
			New_Node=Aux;
		}
	}
}
void Eliminar_Nodo(struct Node** Head){
	struct Node* Aux = NULL;
	struct Node* Temp = NULL;
	struct Node* Temp2 = NULL;
	int new_data;
	if(Head == NULL){
		printf("Lista vacia\n");
	}
	else{
		if(new_data == (*Head) -> data){
			Temp= *Head;
			*Head = (*Head) -> next;
			(*Head) -> prev=NULL;
			free(Temp);
		}
		else{
			Temp = (*Head);
			Aux = (*Head) -> next;
			while (Aux != NULL && Aux -> data != new_data) {
				Temp = Aux;
				Aux = Aux -> next;
			}
			//El dato existe
			if (Aux != NULL) {
				Temp2 = Aux;
				Temp -> next = Aux -> next;
				free(Temp2);
			}
		}
	}
}
void Imprimir_ID_DI(struct Node *Head){
	struct Node *Aux = NULL;
	struct Node *Temp = NULL;
	if (Head == NULL)
		printf("Lista vacia\n");
	else{
		printf("Imprimir de Izquierda a Derecha (Del Inicio al final)\n");
		Aux = Head;
		while(Aux != NULL){
			printf("%d | ", Aux->data);
			Temp=Aux;
			Aux=Aux->next;
		}
		printf("\n");
		printf("Imprimir de Derecha a Izquierda (Del final al Inicio)\n");
		while(Temp != NULL){
			printf("%d | ", Temp->data);
			Aux=Temp;
			Temp=Aux->prev;
		}
		printf("\n");
	}
}
void Imprimir_Todo(struct Node *Head){
	struct Node *Aux = NULL;
	struct Node *Temp = NULL;
	if (Head==NULL)
		printf("Lista vacia\n");
	else{
		printf("Imprimir de Derecha a Izquierda (Del final al Inicio)\n");
		Aux = Head;
		while(Aux != NULL){
			printf("%d | ", (Aux->Next));
			Temp=Aux;
			Aux=Aux->Next;
		}
		printf("\n");
	}
	
}	
	
//		Pilas
struct Nodo {
	int Dato;
	struct Nodo *Next;
};
void Agregar(struct Nodo **Superior);
void EliminarUltimo(struct Nodo **Superior);
void Imprimir(struct Nodo *Superior);
int Tamanio(struct Nodo *Superior);
int Ultimo(struct Nodo *Superior);
void Comprobar(struct Nodo *Superior);
int Sumar(struct Nodo *Superior);
int main(){
	struct Nodo *Superior = NULL;
}
void Agregar(struct Nodo **Superior) {
	struct Nodo *New_Node = malloc(sizeof(struct Nodo));
	int Dato;
	if(New_Node==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingresa el numero que agregaremos:\n");
		scanf("%d", &Dato);
		printf("Agregando %d\n", Dato);
		New_Node->Dato = Dato;
		New_Node->Next = *Superior;
		*Superior = New_Node;
	}
}
void EliminarUltimo(struct Nodo **Superior) {
	struct Nodo *Temp = *Superior;
	if (*Superior != NULL) {
		printf("Eliminando el ultimo\n");
		*Superior = (*Superior)->Next;
		free(Temp);
	}
	else{
		if (*Superior == NULL)
			printf("La Lista esta Vacia\n");
	}
}
void Imprimir(struct Nodo *Superior) {
	struct Nodo *Temp = Superior;
	if(Temp == NULL)
		printf("La Lista esta Vacia\n");
	while (Temp != NULL) {
		printf("%d\n", Temp->Dato);
		Temp = Temp->Next;
	}
}
int Tamanio(struct Nodo *Superior) {
	struct Nodo *Temp = Superior;
	int Contador = 0;
	if (Superior == NULL)
		return Contador;
	while (Temp != NULL) {
		Contador++;
		Temp = Temp->Next;
	}
	return Contador;
}
int Ultimo(struct Nodo *Superior) {
	if (Superior == NULL)
		return -1;
	return (Superior->Dato);
}
void Comprobar(struct Nodo *Superior){
	if (Superior == NULL)
		printf("La Lista esta Vacia\n");
	else{
		if (Superior != NULL)
			printf("La Lista no esta Vacia\n");
	}
}
int Sumar(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	int Suma=0;
	Temp= Superior;
	while(Temp!=NULL){
		Suma=((Temp->Dato1)+(Temp->Dato2)+(Temp->Dato3)+(Temp->Dato4)+(Temp->Dato5));
		Temp=Temp->Next;
	}
	return Suma;
}
//		Colas
struct Nodo{
	int Dato;
	struct Nodo *Next;
};
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
int Sumar(struct Nodo *Front,struct Nodo *Back);
int Tam_Cola(struct Nodo *Front,struct Nodo *Back);
int Mostrar_Val_Frente(struct Nodo *Front,struct Nodo *Back);
int main(){
	struct Nodo *Front=NULL;
	struct Nodo *Back= NULL;
}
void Agregar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *New_Node=NULL;
	int Valor=0;
	printf("Ingrese un valor para el Nodo\n");
	scanf("%d",&Valor);
	New_Node=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(New_Node==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		New_Node->Dato = Valor;
		New_Node->Next=NULL;
		if(*Back == NULL){
			(*Back) = New_Node;
			(*Front) = (*Back);
		}
		else{
			(*Back) -> Next = New_Node;
			(*Back) = New_Node;
		}
	}
}	
void Eliminar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Temp=NULL;
	char Eliminacion=' ';
	do{
		Mostrar(*Front,*Back);
		printf("\n");
		printf("¿Quiere eliminar un Nodo? S/N  ");
		scanf(" %c",&Eliminacion);
		if(((*Front) == (*Back)) && ((*Back) == NULL)){
			printf("Vacia");
			exit(10);
		}
		else{
			Temp = *(Front);
			(*Front) = (*Front) -> Next;
			if(*Front == NULL)
				*(Back) = NULL;
			free(Temp);
		}
	} while(Eliminacion!='s' || Eliminacion!='S');
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
int Sumar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	int Suma=0;
	Temp= Front;
	while(Temp!=NULL){
		Suma=((Temp->Dato1)+(Temp->Dato2)+(Temp->Dato3)+(Temp->Dato4)+(Temp->Dato5));
		Temp=Temp->Next;
	}
	return Suma;
}
int Tam_Cola(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	int Cont=0;
	Temp= Front;
	while(Temp!=NULL){
		Cont++;
		Temp=Temp->Next;
	}
	return Suma;
}
int Mostrar_Val_Frente(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	int Val_Frente=0;
	while(Temp!=NULL){
		Val_Frente=Temp->Dato1;
		Temp=Temp->Next;
	}
	return Val_Frente;
}
//		Ordenamientos 
void ordenarQuicksort(int v[MAX], int izq, int der);
int dividir(int v[MAX], int inicio, int fin);
// Función recursiva para hacer el Ordenamiento Quicksort
void ordenarQuicksort(int v[MAX], int inicio, int fin){
	int pivote=0;
	printf("\nInicia el algoritmo: inicio=%d fin=%d",inicio,fin);
	if (inicio < fin) {
		printf("\nLlama a la funcion dividir");
		pivote = dividir(v, inicio, fin);
		printf("\nLa función dividir, devuelve el pivote=%d",pivote);
		// Ordeno la lista de los menores
		printf("\nSe llama nuevamente para los valores menores. Con valor de inicio=%d pivote-1=%d",inicio, (pivote-1));
		ordenarQuicksort(v, inicio, pivote - 1);
		// Ordeno la lista de los mayores
		printf("\nSe llama nuevamente para los valores menores. Con valor de pivote+1=%d fin=%d", (pivote+1), fin);
		ordenarQuicksort(v, pivote + 1, fin);
	}
}

// Función para dividir el array y hacer los intercambios
int dividir(int v[MAX], int inicio, int fin) {
	printf("\nSe ejecuta la función dividir\n");
	int izq=0, der=0, pivote=0, aux=0;
	pivote = v[inicio];
	izq = inicio;
	der = fin;
	printf("\nLos valores son: izq=%d der=%d privote=%d",izq, der, pivote);
	// Mientras no se cruzen los índices
	while (izq < der) {// Aca en la comparacion se debe poner estrictamente lo que se quiere ordenar
		printf("\nIngreso al while(izq < der)");
		printf("\nLos valores son: izq=%d der=%d pivote=%d",izq, der, pivote);
		while (v[der] > pivote) {// Aca en la comparacion se debe poner estrictamente lo que se quiere ordenar
			printf("\nIngreso al while (v[der] > pivote)\n");
			printf("\nLos valores son: izq=%d der=%d pivote=%d v[der]=%d",izq, der, pivote, v[der]);
			der--;
		}
		while ((izq < der) && (v[izq] <= pivote)) {// Aca en la comparacion se debe poner estrictamente lo que se quiere ordenar
			printf("\nIngreso al  while ((izq < der) && (v[izq] <= pivote))\n"); 
			printf("\nLos valores son: izq=%d der=%d pivote=%d", izq, der, pivote);
			printf("\nLos valores son: v[izq]=%d",v[izq]);
			izq++;
		}
		// Si todavía no se cruzan los índices segue intercambiando
		if (izq < der) {
			printf("\nIngreso al if (izq < der)\n"); 
			printf("\nLos valores son: izq=%d der=%d pivote=%d aux=%d",izq, der, pivote, aux);
			printf("\nLos valores son: v[izq]=%d  v[der]=%d", v[izq], v[der]);
			aux = v[izq];
			v[izq] = v[der];
			v[der] = aux;
		}
	}
	// Los índices ya se han cruzado, se pone el pivote en el lugar que le corresponde
	printf("\nLos índices ya se han cruzado, se pone el pivote en el lugar que le corresponde"); 
	printf("\nLos valores son: izq=%d der=%d pivote=%d aux=%d", izq,der,pivote,aux);
	printf("\nLos valores son: v[izq]=%d v[der]=%d", v[izq], v[der]);
	aux = v[der];
	v[der] = v[inicio];
	v[inicio] = aux;
	// La nueva posición del pivote
	return der;
}
// Otra manera de realizar el algoritmo Quicksort 
void ordenarQuicksort(int v[MAX], int izq, int der) {
	int i=0, j=0, x=0, aux=0;
	i=izq;
	j=der;
	x=v[(izq+der)/2];
	do {
		while((v[i]<x)&&(j<=der)) {	// Aca en la comparacion se debe poner estrictamente lo que se quiere ordenar
			i++;
		}
		while((x<v[j])&&(j>izq)) {
			j--;
		}
		if(i<=j) {
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;
			i++;
			j--;
		}
	} while(i<=j);
	if(izq<j)
		ordenarQuicksort(v,izq,j);
	if(i<der)
		ordenarQuicksort(v,i,der);
}
