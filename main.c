#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");
  
    double a;
    int n;

    puts("1/a + 1/a^2 + 1/a^4 + ... + 1/a^2^n");
    puts("Введите число a:");
    scanf("%lf", &a);

    puts("Введите число n:");
    scanf("%d", &n);

    double result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += 1 / pow(a, pow(2.0, (double)i));
    }
    
    printf("Результат: %f", result);

    return 0;
}
