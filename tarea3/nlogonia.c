/*
Autor = Juan David Tabares Perez
Codigo = 8977554
Fecha = 27/02/2023
Ejercicio = nlogonia
*/
#include <stdio.h>

int main(){
    int k, n, m, x, y;
    int flag = 0;

    while (!flag){
        scanf("%d", &k);
        if (k == 0){
            flag = 1;
        }
        else{
            scanf("%d %d", &n, &m);
            for (int i = 0; i < k; i++){
                scanf("%d %d", &x, &y);
                if (x == n || y == m){
                    printf("divisa\n");
                }
                else if (x > n && y > m){
                    printf("NE\n");
                }
                else if (x > n && y < m){
                    printf("SE\n");
                }
                else if (x < n && y > m){
                    printf("NO\n");
                }
                else{
                    printf("SO\n");
                }
            }
        }
    }
    return 0;
}