#include <stdio.h>
#define RED "\033[0;31m"
#define YOLT "\033[0;33m"
#define GRN "\033[0;32m"
#define RES "\033[0m"
int main ()
{
	float x1 = 0.0f, w1 = 0.0f, b = 0.0f, s = 0.0f, t = 0.0f;
	float x2 = 0.0f, w2 = 0.0f, out = 0.0f, er = 0.0f;
	int epo = 0;
	
	printf (" Вход 1 : "); scanf ("%f", &x1);
	printf (" Вес  1 : "); scanf ("%f", &w1);
	printf (" Вход 2 : "); scanf ("%f", &x2);
	printf (" Вес  2 : "); scanf ("%f", &w2);
	printf (" Смещ   : "); scanf ("%f", &b);
	printf (" Цель   : "); scanf ("%f", &t);
	printf (" Ск_об  : "); scanf ("%f", &s);
	printf (" Эпохи  : "); scanf ("%d", &epo);
	printf ("\n");

	for ( int i = 0; i < epo; i ++)
	{
		out = (x1 * w1) + (x2 * w2) + b;
		er = t - out;
		w1 += s * er * x1;
		w2 += s * er * x2;
		b += s * er;
	}
	printf (RED" w1 %.3f w2 %.3f b %.3f er %.3f\n\n"RES, w1, w2, b, er); 

		float temp_aqv = 0.0f, sk_nagrev = 0.0f;
		float output = 0.0f, buf = 0.0f;
		while (1)
		{
			printf (" Температура воды : "); scanf ("%f", &temp_aqv);
			sk_nagrev = temp_aqv - buf;
			output = (temp_aqv * w1) + (sk_nagrev * w2) + b;
			buf = temp_aqv;
			printf (YOLT" Если out < 1 включен =  %.3f "RES, output);
			printf (GRN" Скорость нагрева = %.3f\n\n"RES, sk_nagrev);
		} 
	return 0;
} 





