#include <stdio.h>
#include <math.h>

int main () {
	float temperature;
	printf("type the temperature in Celsius: ");
	scanf("%f", &temperature);
	float temp_converted = 9*temperature;
	float temp1 = temp_converted/5;
	float temp_done = temp1 + 32;
		printf("A temperatura em Farenheit é %f", temp_done);
	return 0;
}