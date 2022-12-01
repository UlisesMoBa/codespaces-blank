#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[10];
    int b[10];
    float c[10];
    double d[10];


    printf("----------Caracteres----------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valores [%i]: ",i+1);
        scanf("%c",&a[i]);
    }
    printf("Subindice\t valor\t Direccion en entero\t Direccion en Hexadecimal\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%i\t %c\t %d\t \t%p\n\n",i+1,a[i],&a[i],a[i]);
    }

    printf("----------Enteros----------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valores [%i]: ",i+1);
        scanf("%i",&b[i]);
    }
    printf("Subindice\t valor\t Direccion en entero\t Direccion en Hexadecimal\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%i\t %i\t %d\t \t%p\n\n",i+1,b[i],&b[i],b[i]);
    }

    printf("----------Flotantes----------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valores [%i]: ",i+1);
        scanf("%f",&c[i]);
    }
    printf("Subindice\t valor\t Direccion en entero\t Direccion en Hexadecimal\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%i\t %f\t %d\t \t%p\n\n",i+1,c[i],&c[i],c[i]);
    }

    printf("----------Dobles----------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valores [%i]: ",i+1);
        scanf("%lf",&d[i]);
    }
    printf("Subindice\t valor\t Direccion en entero\t Direccion en Hexadecimal\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%i\t %lf\t %d\t \t%p\n\n",i+1,d[i],&d[i],d[i]);
    }
    
    return 0;
}