#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "RUS");
    int i, j;
    char c;
    printf("Программа для вывода закрашенной фигуры.\n");
    printf("Введите символ для закрашивания: ");
    scanf(" %c", &c);
    printf("\n");
    for (i = 3; i >= 0; i--) {
        for (j = -3; j <= 6; j++) {
            if ((j < 0 && j * j + i * i <= 9) ||
                (j >= 0 && j + 2 * i <= 6)) {
                printf("%c ", c);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\nФигура расположена на координатной плоскости.");
    return 0;
}
