#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*4) Declara un tipo de dato estructura:
i) Para representar a una PC; los campos serán: velocidad de procesamiento en GHz, año
de fabricación, tipo de procesador, cantidad de núcleos.
ii) Considera valores enteros aleatorios para la velocidad: entre 1 y 3, para el año: entre
2015 y 2023, para la cantidad de núcleos: entre 1 y 8.
iii) Para evitar ingresar por teclado los tipos de procesador, considera que estos se
encuentran en un arreglo de cadenas de caracteres:
char tipos[6][10]={“Intel”, “AMD”, “Celeron”, “Athlon”, “Core”, “Pentium”}
La estructura será la siguiente:
struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
};
b) Define una variable del tipo arreglo de estructura para guardar las características de 5 PC
que cargara el usuario.
c) Escribe una función que presente la lista de las PC, cada una con sus características.
d) Escribe una función que presente la PC más vieja.
e) Escribe una función que presente la PC que tiene mayor velocidad.
*/
struct
{
    int velocidad;  // entre 1 y 3 GHz
    int anio;       // entre 2015 y 2023
    int cantidad;   // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos

} typedef compu;
void mostrarDatos(compu *computadoras);
void pcMasVIeja(compu *computadoras);
void mayorVelocidad(compu *computadoras);

int main()
{
    srand(time(NULL));

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int aleatorio = rand();
    compu compu1;
    compu1.anio = 2015 + aleatorio % (2024 - 2015);
    compu1.cantidad = 1 + aleatorio % (9 - 1);
    compu1.velocidad = 1 + aleatorio % (4 - 1);
    int tipo = 1 + aleatorio % (5 - 1);
    compu1.tipo_cpu = malloc(10 * sizeof(char));
    compu1.tipo_cpu = strcpy(compu1.tipo_cpu, tipos[tipo]);

    printf("APARTADO 4-a: \n");
    printf("La velocidad de procesamiento  es de %d GHz. \n", compu1.velocidad);
    printf("El anio de fabricacion es %d. \n", compu1.anio);
    printf("Tiene %d nucleos. \n", compu1.cantidad);
    printf("El tipo de procesador es %s. \n", compu1.tipo_cpu);
    printf(" FIN DEL APARTADO 4-a \n ************************* \n");

    compu *computadoras;
    computadoras = malloc(5 * sizeof(compu));
 
    int j = 0;
    char cadena[10];
    printf("*******************\n INICIO APARTADO 4-b: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n Ingrese los datos de la computadora numero %d \n", i + 1);
        printf("ingrese el anio de fabricacion \n");
        scanf("%d", &computadoras[i].anio);
        fflush(stdin);
        printf("Ingrese la velocidad de procesamiento en GHz. \n");
        scanf("%d", &computadoras[i].velocidad);
        fflush(stdin);
        printf("Ingrese la cantidad de nucleos que tiene la pc \n");
        scanf("%d", &computadoras[i].cantidad);
        fflush(stdin);
        computadoras[i].tipo_cpu = malloc(10 * sizeof(char));
        printf("Ingrese el tipo de procesador que tiene la pc \n");
        gets(cadena);
        fflush(stdin);
        computadoras[i].tipo_cpu = strcpy(computadoras[i].tipo_cpu, cadena);
        printf("\n************************ \n");

    }
    mostrarDatos(computadoras);
    pcMasVIeja(computadoras);
    mayorVelocidad(computadoras);
 

    return 0;
}

void mostrarDatos(compu *computadoras)
{
    printf("*********************INGRESANDO A MOSTRAR LISTA DE COMPUTADORAS ***************\n********************************* \n");
  
    for (int i = 0; i < 5; i++)
    {
        printf("computadora nro %d \n", i + 1);
        printf("El anio de fabricion %d \n",  computadoras[i].anio );
        printf("La velocidad de procesamiento  es de %d GHz. \n", computadoras[i].velocidad);
        printf("Tiene %d nucleos. \n", computadoras[i].cantidad);
        printf("El tipo de procesador es %s. \n", computadoras[i].tipo_cpu);
     
    }
    printf("\n ************FIN DE MOSTRAR LISTA ************* \n");
}

void pcMasVIeja(compu *computadoras)
{
        printf("*********************INGRESANDO A MOSTRAR PC MAS VIEJA ***************\n********************************* \n");

    int vieja = 2024;
    int indice = 6;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].anio < vieja)
        {
            vieja = computadoras[i].anio;
            indice = i;
        }
    }
    printf("Las caractericas de la computadora mas vieja son : \n ");
    printf("El anio de fabricion %d \n",  computadoras[indice].anio);
    printf("La velocidad de procesamiento  es de %d GHz. \n", computadoras[indice].velocidad);
    printf("Tiene %d nucleos. \n", computadoras[indice].cantidad);
    printf("El tipo de procesador es %s. \n", computadoras[indice].tipo_cpu);
        printf("\n ************FIN DE PC MAS VIEJA ************* \n");

}

void mayorVelocidad(compu *computadoras){
     int veloz = 0;
    int indice = 6;
            printf("*********************INGRESANDO A MOSTRAR PC MAS VELOZ ***************\n********************************* \n");

    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].velocidad > veloz)
        {
            veloz = computadoras[i].velocidad;
            indice = i;
        }
    }
    printf("las caractericas de la computadora mas veloz son : \n ");
    printf("El anio de fabricion %d \n",  computadoras[indice].anio);
    printf("La velocidad de procesamiento  es de %d GHz. \n", computadoras[indice].velocidad);
    printf("Tiene %d nucleos. \n", computadoras[indice].cantidad);
    printf("El tipo de procesador es %s. \n", computadoras[indice].tipo_cpu);
            printf("\n ************FIN DE PC MAS VIEJA ************* \n");


}