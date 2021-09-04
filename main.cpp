#include <stdio.h>


#define TAM 50
void ingresar(int a[],int n);
int busquedaLineal (int a[], int n, int datoBuscar);
void imprimir(int a[],int n);



int main()
{
    FILE *archivoRegistro;
    int arregloMain[TAM];
    int n,dato;
    printf("Ingrese el tamaño de arreglo: ");
    scanf("%d",&n);
    ingresar(arregloMain,n);
    printf("Arreglo Original\n");
    imprimir(arregloMain,n);
    printf("\nIngrese elelemento a encontrar en el arreglo: ");
    scanf("%d",&dato);
    archivoRegistro = fopen("miarchivo.txt", "w");
    if(busquedaLineal(arregloMain,n,dato)==-1)
    {
      printf("Por favor, revise el archivo generado");
      fprintf(archivoRegistro,"El elemento %d no existe en el arreglo ",dato);
    }
    else
    {
      printf("Por favor, revise el archivo generado");
      fprintf(archivoRegistro,"EL elemento si se se econtró y está en la posición %d",busquedaLineal(arregloMain,n,dato));
    }
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


int busquedaLineal (int a[], int n, int datoBuscar)
{
    
    for (int i=0; i<=n; i++)
    {
        if(a[i]==datoBuscar)
        {
            return i;
        }
    }  
        return -1;
    
}


