#include <stdio.h>
int main ()
{
	float x1 = 0.0f, w1 = 0.0f, b = 0.0f, s = 0.0f, t = 0.0f;
	float x2 = 0.0f, w2 = 0.0f, out = 0.0f, er = 0.0f;
	int epo = 0;
	
	while (1)
	{
	printf (" Вход1  : "); scanf ("%f", &x1);
	printf (" Вход2  : "); scanf ("%f", &x2);
	printf (" Вес1   : "); scanf ("%f", &w1);
	printf (" Вес2   : "); scanf ("%f", &w2);
	printf (" Смещ   : "); scanf ("%f", &b);
	printf (" Цель   : "); scanf ("%f", &t);
	printf (" Ск_об  : "); scanf ("%f", &s);
	printf (" Эпохи  : "); scanf ("%d", &epo);

	for ( int i = 0; i < epo; i ++)
	{
		out = (x1 * w1) + (x2 * w2) + b;
		er = t - out;
		w1 += s * er * x1;
		w2 += s * er * x2;
		b += s * er;
	}
	printf (" w1 %.3f w2 %.3f b %.3f er %.3f\n", w1, w2, b, er);
	} 
	return 0;
} 





