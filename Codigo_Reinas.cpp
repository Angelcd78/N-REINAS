#include <stdio.h>
#include <stdlib.h>

int isSafe(int x1, int y1, int x2, int y2) {
    return (x1 != x2) && (y1 != y2) && (abs(x1 - x2) != abs(y1 - y2));
}

int Ruta(int n) {
    int conteo = 0;
    int i, j, k, l;

    for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
    for (k = 0; k < n; k++) {
    for (l = 0; l < n; l++) {
    if (isSafe(i, j, k, l)) {
    conteo++;
                    }
                }
            }
        }
    }

    return conteo;
}

int main() {
     int n;
    
    printf("\nIngrese el tamaño del tablero de ajedrez   (n < 10): ");
    scanf("%d", &n);
    if (n >= 10) {
        printf("\nPor favor, ingrese un valor de n menor que 10.\n");
       
}else{
     int caminos = Ruta(n);
    printf("\nEl número de diferentes caminos que dos reinas pueden tomar en un tablero de %d x %d es: %d \n", n, n, caminos);
    return 0;
}
}

