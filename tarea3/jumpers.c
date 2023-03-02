/*
Autor = Juan David Tabares Perez
Codigo = 8977554
Fecha = 28/02/2023
Ejercicio = jumpers
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 3000

int main(){
    int n, i, valAbs;
    int nums[MAX];
    int diferencias[MAX - 1];

    while (scanf("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf("%d", &nums[i]);
        }
        for (i = 0; i < n-1; i++){
            diferencias[i] = 0;
        }
        for (i = 1; i < n; i++){
            valAbs = abs(nums[i] - nums[i-1]);
            if (valAbs >= 1 && valAbs <= n-1){
                diferencias[valAbs-1] = 1;
            }
        }
        int flag = 1;
        for (i = 0; i < n-1; i++){
            if (!diferencias[i]){
                flag = 0;
            }
        }
        if (flag){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }
    return 0;
}