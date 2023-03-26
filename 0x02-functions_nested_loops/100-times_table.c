#include "main.h"
/**
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n > 0 && n < 15)
	{
		for (a = 0 ; a <= 15 ; a++)
		{
			for (b = 0 ; b <= 15 ; b++)
			{
				c = a * b;
				if (c < 10)
				{
					_putchar(c);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('\n');
				}
				if (c > 10)
				{
					if (c >= 100)
					{
						_putchar(((c % 100) / 10) + '0');
						_putchar(((c % 100) % 10) + '0');
						_putchar((c / 10) + '0');
						 _putchar(',');
						 _putchar(' ');
						 _putchar(' ');
						 _putchar(' ');
					}
					if (c < 100)
					{
						_putchar(((c % 100) / 10) + '0');
						_putchar(((c % 100) % 10) + '0');
						_putchar((c / 10) + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
