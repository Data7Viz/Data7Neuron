#include <stdio.h>
int main ()
{
	float x = 10.0; // вход 
	float w = 0.05; // вес
	float t = 1.0;  // цель
	float s = 0.01; // скорость обучения
	float b = 0.04; // смещение
	float out = 0.0; // предсказание
	float er = 0.0; // ошибка
	
	for (int i = 0; i <= 10; i ++)
	{
		// предсказание
		out = (x * w) + b;
		// расстояние до цели 
		er = t - out;
		// спуск
		w += er * s * x;
		//смещение
		b += s * er;
	}
	printf(" w %.3f b %.3f e %.3f\n", w, b, er);
	return 0;
} 




