#include <stdio.h>
int pow3(int a,int b);
int pow3(int a, int b)
{
	int ans = 1, base = a;
	while (b != 0)
	{
		if (b & 1)
			ans *= base;
		base *= base;
		b >>= 1;
	}
	return ans;
}
int main()
{
	printf("%d",pow3(2,30402457));