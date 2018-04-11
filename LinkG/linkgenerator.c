#include <stdio.h>

static const char base62 [] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main ()
{
	unsigned long long number;

	while (scanf("%llu", &number) == 1)
	{
		do
			putchar (base62 [number % 62]);
		while (number /= 62);
	}
}