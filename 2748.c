#include <stdio.h>

int main()
{
    long long fibo[100] = {0, 1};
    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    printf("%lld", fibo[n]);

    return 0;
}