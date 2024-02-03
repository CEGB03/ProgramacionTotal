# include <stdio.h>
# include <stdlib.h>

/*Definicion de la esctructura*/
struct node
{
    int data;
    struct node *link;
};






void main()
{
    struct node *front  =NULL;
    struct node *back   = NULL;
    struct node *temp   =NULL;
    int n,value,op=1;
    printf("Ingrese un elemento\n");
    scanf("%d",&value);
    do
    {   /*Creacion de un nuevo nodo*/
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {   printf("No Memory available\n");
            exit(0);
        }
        temp->data = value;
        temp->link=NULL;
        if(back == NULL)  /*Insercion del primer nodo*/
        {
            back = temp;
            front = back;
        }
        else /*Insercion del resto de los nodo*/
        {
            back->link = temp;
            back = temp;
        }
        printf("0 para salir\n");
        scanf("%d",&value);
    }while(value!=0);

    /*Impresion de toda la FIFO*/
    temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }







    do /*Eliminacion de nodos*/
    {
        if((front == back) && (back == NULL))
        {
            printf("Vacia");
            exit(0);
        }
        temp = front;
        front = (front)->link;
        if(front == NULL)
            back = NULL;
        free(temp);
        printf("0 para salir\n");
        scanf("%d",&value);
    }while(value!=0);

    /*Impresion de toda la FIFO*/
    temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }

}
