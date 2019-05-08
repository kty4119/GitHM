#include<stdio.h>
int main(void)
{
	int input, i;
	int tmp = 0;
	int in = 0;
	printf("임의의 정수 입력 : ");
	scanf_s("%d", &input);

	if (input < 0)
	{
		input = input * -1;
	}
	in = input;
		for (i = 0;0 < input;i++)
		{
			tmp += input % 10;
			input /= 10;
		}
		printf("%d : %d 자리 정수\n", in, i);
		printf("각 자리의 총합 : %d\n", tmp);
		return 0;
}