#include <stdio.h>
#define G "\033[32m"
#define Y "\033[33m"
#define S "\033[34m"
#define R "\033[0m"
int main ()
{
        float x1; float w1 = 0.05; float bias = 0.01;
        float sk_obuch; float error; float out;
        float targ; int cikl;

        while (1)
        {
        printf(" Вход  : "); scanf("%f", &x1);
        printf(" Ск_об : "); scanf("%f", &sk_obuch);
        printf(" Цель  : "); scanf("%f", &targ);
        printf(" Цикл  : "); scanf("%d", &cikl);

        for (int i = 0; i < cikl; i ++)
        {
                out = ( x1 * w1 ) + bias;
                error = targ - out;
                w1 += sk_obuch * error * x1;
                bias += sk_obuch * error;

                printf (Y"   %d", i);
                printf (G"  Вес = %.3f"R, w1);
                printf (S"  Bias  = %.3f"R, bias);
                printf (G"   Ошиб  = %4.3f"R, error);
                printf (S"   Out  = %.3f\n"R, out);
        }
        }
        return 0;
}


