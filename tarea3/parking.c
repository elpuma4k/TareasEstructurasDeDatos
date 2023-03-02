/*
Autor = Juan David Tabares Perez
Codigo = 8977554
Fecha = 25/02/2023
Ejercicio = parking
*/

#include "stdio.h"
#include "limits.h"

int main(){
    int casos, cantidad, numeros, max, min, diferencia;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++){
        scanf("%d", &cantidad);
        max = 0;
        min = INT_MAX;
        for (int j = 0; j < cantidad; j++){
            scanf("%d", &numeros);
            if (numeros > max){
                max = numeros;
            }
            if (numeros < min){
                min = numeros;
            }
        }
        diferencia = (max - min) * 2;
        printf("%d\n", diferencia);
    }
    return 0;
}