#include <stdio.h>
int main ()
{
	float x1 = 0.0f, w1 = 0.0f, b = 0.0f, s = 0.0f, t = 0.0f;
	float out = 0.0f, er = 0.0f;
	int epo = 0;
	
	printf (" Вход1  : "); scanf ("%f", &x1);
	printf (" Вес1   : "); scanf ("%f", &w1);
	printf (" Смещ   : "); scanf ("%f", &b);
	printf (" Цель   : "); scanf ("%f", &t);
	printf (" Ск_об  : "); scanf ("%f", &s);
	printf (" Эпохи  : "); scanf ("%d", &epo);
	printf ("\n");

	for ( int i = 0; i < epo; i ++)
	{
		out = (x1 * w1) + b;
		er = t - out;
		w1 += s * er * x1;
		b += s * er;
	}
	printf (" w1 %.3f b %.3f er %.3f\n\n", w1, b, er); 
	return 0;
} 





