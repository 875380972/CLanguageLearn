#include <stdio.h>
/*  ��fahr=0,20,...,300ʱ���ֱ��ӡ
�����¶Ⱥ������¶ȶ��ձ�*/
int main(    )
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;/*�¶ȵ�����*/
	upper = 300;/*�¶ȵ�����*/
	step = 20;/*����*/
	fahr = lower;
	while (fahr <= upper)

	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}















