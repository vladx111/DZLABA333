#include <stdio.h>
#include <locale.h>

#define C  29979245800 

int main()
{
    setlocale(LC_CTYPE, "RUS");

    float f;
    float lamda;

    printf("¬ведите частоту сигнала (50Ц200 √√ц): ");
    scanf_s("%f", &f);
    if (f < 50 || f > 200)
    {
       printf("¬ыход за пределы частоты");
       
       return 0;
    }

    lamda = C / (f * 1e9);

    printf("ƒлина волны при частоте %.2f √√ц = %.2f см\n", f, lamda);

    return 0;
}
