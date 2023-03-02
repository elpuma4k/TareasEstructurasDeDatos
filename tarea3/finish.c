/*
Autor = Juan David Tabares Perez
Codigo = 8977554
Fecha = 28/02/2023
Ejercicio = finish
*/

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int numCase = 1; numCase <= T; numCase++){
        int N;
        scanf("%d", &N);
        int p[N], q[N];
        for (int i = 0; i < N; i++){
            scanf("%d", &p[i]);
        }
        for (int i = 0; i < N; i++){
            scanf("%d", &q[i]);
        }
        int inicio = -1;
        int gasolina = 0;
        int reservaGasolina = 0;
        for (int i = 0; i < N; i++){
            reservaGasolina += p[i] - q[i];
            if (reservaGasolina < 0){
                inicio = (i + 1) % N;
                gasolina += reservaGasolina;
                reservaGasolina = 0;
            }
        }
        gasolina += reservaGasolina;
        if (inicio == -1 && gasolina >= 0){
            inicio = 0;
        }
        if (inicio != -1 && gasolina >= 0){
            printf("Case %d: Possible from station %d\n", numCase, inicio + 1);
        }
        else{
            printf("Case %d: Not possible\n", numCase);
        }
    }
    return 0;
}