#include <stdio.h>
#define RED "\033[1;31m"
#define YO "\033[1;33m"
#define RES "\033[0m"
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
	if (out <= 1) printf (RED" Чайник включен \n\n"RES);
	else printf (YO" Чайник выключен \n\n"RES);
	}
	return 0;
} 


