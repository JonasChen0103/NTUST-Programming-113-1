#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}