#include <stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	long long a[n + 10];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	int t;
	for (long long i = 0; i < n - 1; i++)
	{
		for (long long j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	int sum = 1, max = 0;
	for (long long i = 0; i < n; i++)
	{
		if (a[i + 1] == a[i])
		{
			sum++;
			if (sum > max)
			{
				max = sum;
			}
		}
		else
		{
			sum = 1;
		}
	}
	if (max >= n / 2 && max <= n)
	{
		printf("1");
	}
	else
	{
		printf("%d", n / 2 - max + 1);
	}
	return 0;
}
