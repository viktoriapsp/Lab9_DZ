# Домашнее задание к работе 9

## Условие задачи

Напишите программу, выводящую на экран заданную геометрическую фигуру из домашнего задания по лабораторной работе №6, нарисованную с помощью заданного с клавиатуры символа

<img width="662" height="476" alt="image" src="https://github.com/user-attachments/assets/cbfce68e-9bbb-4c29-a207-bb74b5bbdd42" />

### Алгоритм работы программы

1. Начало.
2. Ввести символ `c` для закрашивания фигуры.
3. Запустить цикл `for` с переменной `i`, которая отвечает за текущую строку. Цикл выполняется от `i = 3` до `i = 0`.
4. Запустить внутренний цикл `for` с переменной `j`, которая изменяется от `-3` до `6`.
5. Проверить условие нахождения текущей позиции внутри фигуры: `(j < 0 && j * j + i * i <= 9) || (j >= 0 && j + 2 * i <= 6)`.
6. Если условие выполняется, вывести символ `c` и пробел. В противном случае вывести два пробела.
7. После завершения внутреннего цикла перейти на следующую строку.
8. Повторять циклы до завершения построения фигуры.
9. Вывести сообщение о расположении фигуры на координатной плоскости.
10. Конец.

### Блок-схема

<img width="870" height="1012" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/80f49edc-3348-4a59-a18c-a0a29fcc49ed" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22aVUcqnOGHkxFmiIzWJgb%22%3E3ZrPc9o6EMf%2FGo7pyD%2BxjxCgvXTmzeTw2qMLCha1LcaIQvrXV7Ila2VISoQRee%2FiSGutsT%2F71UraySh4LI%2Bf62ybf6UrXIx8tDqOgtnI9z0UIP5HWF5aS4z81rCuyUoO0oYn8hsrT2ndkxXeGQMZpQUjW9O4pFWFl8ywZXVND%2BawZ1qYv7rN1vjE8LTMilPrv2TF8taa%2BGNt%2F4LJOle%2F7MVpe6fM1GD5Jbs8W9EDMAXzUfBYU8raVnl8xIWAp7i0fotX7nYvVuOKXeKwY1nNTp3kc3bsRX0yd%2BN0eWd6yAnDT9tsKe4ceIC5LWdlwXseb7aev7JiLz1HMzRKZ%2BI6RSM%2BJBmrNr9Om%2BtcOuGa4SN4A%2FnOnzEtMatf%2BJAcYI0kw4MOgae4yqdESjFSaEp4mRTAunuyZsQbEtN5ZKTa7i9Cxu9mRYELuq6z0hZcc52216jB5zXX1pJwD2VsuuL6CFzmkjKfC1aM4zOME5NxmJiMuxhcBZlU5CLINd1XKyy8kAViIviJFgpcSdAfBM8yx8ufF%2FHJafljv7Nl48drJm42jDiqhRWm9AymqKeiNDJnqjcApo0bFW06FT04k1EYDcHHgYw2rYwKLaPYoYyicABMfBuxui0kkaUnAcjkU5C9fZDboybh8wZcRCeNIwJLbAJcfDBypux8zMI2DB46E4dxf1Ew4xCnA8SB7tmZDc7tFl4Oafrhl1%2Bvt%2FwmQyQGTtr%2FgKR5YwG03tL1lEs7bZpH3Yh1gm7AerMteM5wuEi1GVmI0nO1WqVDTP8KHwpSYWe6XAAtIiCy9Jwu1QHH6Hb5m49vs%2FscZIz2IT01T%2BTggRTs9wIzjs3AREMomJSkciFhvVsXrYdbCjjpb7eGODmWeLcTlYWPl1i7JWxuJlZuT4Hyu%2B0D3Il0koYbEE8la7AI6nb8yjO7lwmBMQDTB12R38fvnx0BGiDq%2BLLN45UFlgnAOwOxjl3NkG6tvIqV5IJXJwW4U3Z0Xy%2FlKFDGgkj5U55kl9Ysp2taZcVcW6dmPgKQedAmolDIuz8Kys9Iijv%2FoTWWL9JVgk5h1rjIGPllfsRVZHw7MqBa5ZKMOni7IBNYktHFAZdkuiO3CzShJRpQF3DIBpRr%2BuktVNsrN9wiO26bu0hq41RSsSWa%2B0hKl27urKixHTb9%2Fg6h6TrLnaEl%2Fy1o%2FnlocDvmu0KX2qHToXeZwFQFxAUYtW21IOP%2Fz8lYbr5BAetmaPCRsG9ypGh%2FF%2B1PUTOYf2d3S3T0vbfWytfqPbBm0xVxm6PndWFoXPlnZS9gwJaSisEA%2FyMM%2BpAV%2Br1DFvIiGNO%2FOkRJ1NNA%2BwpaEd23XCgSy3PIndZ%2Fo2Z4y8RsFd5x%2BGa03jt%2BgOhanqUMzC5PU13l0UmCtD1OgfrozTOk93qG9C7JkMRJhpSCfkCffBTHf5lWeh6oIfT5eYcZDN57p56HenMpjN6eeycOQTT05LM8dd7ptG5Usz%2FEntezPJsaX%2BKQoKwMD4%2BGd%2FW%2FELZS1P%2BIGcz%2FAA%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы

Программа написана на языке Си.

```c
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
```

## Результат работы программы

```text
Программа для вывода закрашенной фигуры.
Введите символ для закрашивания: *

      *
  * * * * *
  * * * * * * *
* * * * * * * * * *

Фигура расположена на координатной плоскости.
```

## Информация о разработчике

```text
Имя: Страхова Виктория
Группа: бИЦТ-261
Вариант: 27
```
