#include <stdio.h>
int main ()
{
	float x = 0.0f, w = 0.0f, b = 0.0f, s = 0.0f, t = 0.0f;
	float out = 0.0f, er = 0.0f;

	printf (" Вход  : "); scanf ("%f", &x);
	printf (" Вес   : "); scanf ("%f", &w);
	printf (" Смещ  : "); scanf ("%f", &b);
	printf (" Цель  : "); scanf ("%f", &t);
	printf (" Ск_об : "); scanf ("%f", &s);

	for ( int i = 0; i < 10; i ++)
	{
		out = (x * w) + b;
		er = t - out;
		w += s * er * x;
		b += s * er;
	}
	printf (" w %.3f b %.3f er %.3f\n", w, b, er);
	return 0;
} 





