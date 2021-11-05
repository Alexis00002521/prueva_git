#include <stdio.h>

int main(int argc, char const *argv[]) {
    int cantEstudiantes = 0;
    int carnet = 0;
    printf("Ingrese la cantidad de Estudiantes: ");
    scanf("%d", &cantEstudiantes);

    float Estudiantes;
//
    for(int i = 0; i < cantEstudiantes; i++) 
    {
        printf("ingrese el numero el numero de carnet: ");
        scanf("%d", &carnet);
        for(int i = 0; i < 30; i++) {
            //Llenado el arreglo  nota
            printf("Ingrese la temperatura %d: ", i + 1);
            scanf("%f",&Estudiantes);
            }
    
        // Y calcular temperatura
        float tempFinal = 0;
        printf("  TEMPERATURA\tPROMEDIO\n");

        for (int i = 0; i < 30; i++) {
            tempFinal += Estudiantes;
        }tempFinal=tempFinal/30;
        
        printf("Carnet:\t%d\n",carnet);
        printf("Temperatura Promedio:%3.2f\n",tempFinal);    

    }
//
    return 0;
}