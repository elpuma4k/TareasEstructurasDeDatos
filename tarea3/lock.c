/*
Autor = Juan David Tabares Perez
Codigo = 8977554
Fecha = 27/02/2023
Ejercicio = lock
*/

#include <stdio.h>

int main(){
    int dialPos, n1, n2, n3;
    int flag = 0;

    while (!flag && scanf("%d %d %d %d", &dialPos, &n1, &n2, &n3) == 4){
        if (dialPos == 0 && n1 == 0 && n2 == 0 && n3 == 0){
            flag = 1;
        }
        else{
            int grados = 0;
            grados += ((dialPos - n1 + 40) % 40) * 9;
            grados += ((n2 - n1 + 40) % 40) * 9;
            grados += ((n2 - n3 + 40) % 40) * 9;
            grados += 1080;
            printf("%d\n", grados);
        }
    }
    return 0;
}