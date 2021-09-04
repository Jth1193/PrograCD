#include <stdio.h>


#define TAM 50
void ingresar(int a[],int n);
void ordenar(int a[],int n);
void imprimir(int a[],int n);



int main()
{
    int arregloMain[TAM];
    int n;
    printf("Ingrese el tamaño de arreglo: ");
    scanf("%d",&n);
    ingresar(arregloMain,n);
    printf("Arreglo Original\n");
    imprimir (arregloMain,n);
    ordenar(arregloMain,n);
    printf("\nArreglo Ordenado\n");
    imprimir (arregloMain,n);
    return 0;
}


void ingresar(int a[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("Ingresa numero %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
}

void imprimir(int a[],int n)
{
    for (int i=0; i<n;i++)
    {
        printf("[ %d ]",a[i]);
    }
}


void ordenar(int a[],int n)
{
    int i,j,aux;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
            aux=a[j];
            a[j]=a[j+1];
            a[j+1]=aux;
            }
        }
       
    }
}



