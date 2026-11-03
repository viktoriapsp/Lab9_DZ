#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int side;
    char symbol;
    printf("Введите сторону квадрата: ");
    scanf("%d", &side);
    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);
    printf("\n");
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}