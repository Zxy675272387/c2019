#include<stdio.h>
#include<math.h>
void isPrime(int a)
{
	int b;
	b = int(sqrt(a));
	if (b == 1)printf_s("Yes\n");
	else
		for (int i = 2; i <= b; i++)
		{
			if (a % i == 0)
			{
				printf_s("No\n");
				break;
			}
			else if (i == b)printf_s("Yes\n");
		}
}
int main()
{
	int a;
start:
	printf_s("������һ������1������(����1�˳�)��");
	scanf_s("%d", &a);
	if (a != 1)
		{
			isPrime(a);
			goto start;
		}
	if(a==1) return 0;
}