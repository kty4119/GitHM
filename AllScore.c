#include<stdio.h>
int main(void)
{
	int input, i;
	int tmp = 0;
	int in = 0;
	printf("������ ���� �Է� : ");
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
		printf("%d : %d �ڸ� ����\n", in, i);
		printf("�� �ڸ��� ���� : %d\n", tmp);
		return 0;
}