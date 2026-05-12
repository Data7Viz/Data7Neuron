#include <stdio.h>
int main ()
{
	float temper_aqva = 0.0f; 
	float out = 0.0f; 
	float werg = 0.097, bias = 0.032;
	
	// бесконечный цикл без защиты от неверного символа
	while (1)
	{
	// виртуальная температура 
	printf (" Температура воды : "); 
	scanf ("%f", &temper_aqva);
	
	// функция активации
	out = (temper_aqva * werg) + bias;
	if (out <= 1) printf (" Чайник включен \n");
	else printf (" Чайник выключен \n");
	}
	return 0;
} 


