#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void M (void)
{
    setlocale(LC_CTYPE, "RUS");
}
void DZ(void)
{
    int k;
    float c;
    float s;
    puts("введите количество товара");
    scanf_s("%d", &k);
    puts("введите стоимость единицы товара");
    scanf_s("%f", &c);
    s = k * c;
    printf("%d шт. по %.2f руб. - это %.2f руб.\n", k, c, s);
}
int main()
{
    M();
    DZ();
    return 0;
}