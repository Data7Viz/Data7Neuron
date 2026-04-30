#include <stdio.h>
#define G "\033[32m"
#define Y "\033[33m"
#define R "\033[0m"
int main ()
{
        float x1;
        float w1 = 0.05;
        float bias = 0.0;
        float sk_obuch = 0.01;
        float error;
        float out;
        float targ = 1.0;

        scanf("%f", &x1);

        for (int i = 1; i <= 20; i ++)
        {
        // смотрим выход
        out = ( x1 * w1 ) + bias;

        // расстояние до цели
        error = targ - out;

        // спуск
        w1 += sk_obuch * error * x1;

        // смещение
        bias += sk_obuch * error;

        printf (G" Вес = %.3f"R, w1);
        printf (Y"  Расстояние до цели  = %.3f\n"R, error);
        }
        return 0;
}



