# Домашнее задание к работе 9

## Условие задачи

<img width="1250" height="380" alt="image" src="https://github.com/user-attachments/assets/f61499e0-0ff0-4958-959b-7c2a310577cb" />

## 1. Алгоритм и блок-схема

1. Начало.
2. Запросить у пользователя символ для отрисовки фигуры.
3. Запросить длину стороны квадрата.
4. Обнулить счетчик строк `i`.
5. Если `i` больше либо равно длине стороны, завершить программу (переход к шагу 12).
6. Обнулить счетчик символов в строке `j`.
7. Если `j` больше либо равно длине стороны, перейти к шагу 10.
8. Напечатать заданный символ.
9. Увеличить `j` на единицу и вернуться к шагу 7.
10. Перевести курсор на новую строку.
11. Увеличить `i` на единицу и вернуться к шагу 5.
12. Конец.

### Блок-схема
<img width="459" height="1062" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/8f55b1af-904b-4e2a-8c51-a53b51c39597" />
(Ссылка на блок схему)[https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22bzQ0GxcJ0CdXj7qkvOAg%22%3E3Vpbc6MgFP41vu7gNcljc%2Bu%2B7Exn8rDtU4cqiWRRHCRNsr9%2BUTHesrmooU77YOFwADnn4%2FuQiWbOgsMzg5H%2Fi3qIaAbwDpo51wxDByYQ%2FxLLMbM4wMgMG4Y96VQYVvgvyntK6w57KK44ckoJx1HV6NIwRC6v2CBjdF91W1NSnTWCG9QwrFxImtbf2ON%2BZh0bo8L%2BE%2BGNn8%2BsO5OsJYC5s1xJ7EOP7ksmc6GZM0Ypz0rBYYZIErw8Llm%2F5X9aTy%2FGUMhv6RBzyHizkxwn5sd8yaKbiK6oTPc%2B5mgVQTdp2YsEC5vPAyJquijCOMpCvsYHJGaZrjEhM0ooSwcy1%2BmfsMec0T%2Bo1ALSP9GSTf4JyU5Ors2BNpknzynQxCzjUV4Wz2n6XMhOiHF0KC1CLvsZ0QBxdhQufikztkzDvsiiDqRNjmI6si6xaskqlBjanEYuwiwKMtLno47DM4lqxlyAI0qKwgsSggjdMBiI%2BESIYTEnYvW2l6LhWpr6ykr6nBoyB8nTShZxDD4o6SslRj0lejUlutlDTpCMP%2FIae7%2BZI7pjbp6kYgeVt4sYZSWrlHGfbmgIyaKwTlHoPSVUJBxcAuMYu5lxiUmeI8lskG0QrwCnGUGGCOT4s%2Frm3SBqfHOICglRBdAT3XcCqNEOoCeyUQFPQxk8MX%2FHtyCU0V3oJUI0B0ogJ14KpKUcE3fCy7pfkk5w6wQvsy28DHXwypOuAGHi7OjdiDCfBh%2B7WB26DIfwtDEjMXPZCmiTM0Cza0Az7SrQJn0AzWoLtGLLPx5rRfoVYA3Z7UJSxqii7bc9r7GWPJAripczvHihA%2BavpfJbojg%2F7NRPLO%2B1Wn2TetSMshj1fIiz7x87%2Ff7pKrNpV7EieCw5RBSHPC6N%2FJIYCjZwrNqXkGSH5Y3%2BExPUkpy9QZHy01JuPwNsh3gG2Ko%2FA9h9HDHT%2FXFbRBVq3vZLNc8BfWjeqIPmbZVq3lYVh487cLiykERMUNp7fAwGIXuT4YWsL9nLAh2S83H%2Bcu2za1rmWJe1r%2B4%2FssFFf0u%2F6N9ZK2s4%2FhaXOgIL0wHcPo76uH3EoTv0o0wmw4kC66oONeNe7s3yfN1Lm7U9o%2BIDy1Unv3rL%2B%2B4SUh%2BlJeCCllSUJG170DmmlUwYdQBbl2m%2F7l%2BTlZ5oP1fV7836mj0LVXH%2BuI%2BLsGQnDfwKG6vn%2FMm4F843unB%2BvmHUUL6yW0a99RW%2F%2B%2Bhbs14ov2sg21E%2BqOJXB%2BAK59c61K7ROnP%2B6QJx6D%2FoeCoRePkDz%2BmLxa9RjQ7s%2B7lGVIuf52TpKX7kZC7%2BAQ%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E]

Программа написана на языке **Cи**.

```c
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
```
## 3. Результаты работы программы
```text
Введите символ для построения квадрата:*
Введите сторону квадрата:5

Квадрат:

*****
*****
*****
*****
*****
```
## 4. Информация о разработчике
```text
Имя: Страхова Виктория 
Вариант: 1
Группа: бИЦТ-261
