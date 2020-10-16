#include <stdio.h>
/*  当fahr=0,20,...,300时，分别打印
华氏温度和摄氏温度对照表*/
int main(    )
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;/*温度的下限*/
	upper = 300;/*温度的上限*/
	step = 20;/*步长*/
	fahr = lower;
	while (fahr <= upper)

	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}















