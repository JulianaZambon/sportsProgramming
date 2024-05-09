#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    scanf("%d %d", &x4, &y4);
    
    // Encontrar as maiores diferenças entre as coordenadas para determinar o lado do quadrado
    int lado_x = 0;
    int lado_y = 0;
    
    // Comparar todas as coordenadas para encontrar a maior diferença em x e y
    int xs[] = {x1, x2, x3, x4};
    int ys[] = {y1, y2, y3, y4};
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            int diff_x = xs[j] - xs[i];
            if (diff_x < 0) {
                diff_x = -diff_x;
            }
            if (diff_x > lado_x) {
                lado_x = diff_x;
            }
            
            int diff_y = ys[j] - ys[i];
            if (diff_y < 0) {
                diff_y = -diff_y;
            }
            if (diff_y > lado_y) {
                lado_y = diff_y;
            }
        }
    }
    
    // Assumimos que lado_x e lado_y são iguais, pois é um quadrado
    int lado = lado_x > lado_y ? lado_x : lado_y;

    // Calcular a área do quadrado
    int area = lado * lado;
    printf("%d\n", area);
}

