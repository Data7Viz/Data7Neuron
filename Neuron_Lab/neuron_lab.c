#include <stdio.h>
#define YOLT "\033[0;33m"
#define GRN "\033[0;32m"
#define RES "\033[0m"
int main ()
{
	float x1 = 0.0f, w1 = 0.0f, b = 0.0f, s = 0.0f, t = 0.0f;
	float x2 = 0.0f, w2 = 0.0f, out = 0.0f, er = 0.0f;
	int epo = 0;
	while (1)
	{ 
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
	printf (GRN" w1 %.3f w2 %.3f b %.3f er %.3f\n\n"RES, w1, w2, b, er); 

		float input1 = 0.0f, input2 = 0.0f;
		float output = 0.0f;
		
			printf (" Перцептрон Вход 1 : "); scanf ("%f", &input1);
			printf (" Перцептрон Вход 2 : "); scanf ("%f", &input2);
			output = (input1 * w1) + (input2 * w2) + b;
			printf (YOLT" Выход -- %.3f\n\n"RES, output);
		} 
	return 0;
} 





