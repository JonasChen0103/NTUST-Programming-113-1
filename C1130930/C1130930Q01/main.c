#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf_s("%d", &n);
    intToBinary(n, true);

    int rev_n = reverseBits(n);
    intToBinary(rev_n, false);
    printf("\n%d", rev_n);
}

int intToBinary(int n, bool printCount)
{
    int zero = 0;
    int one = 0;

    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            one++;
            printf("1");
        }
        else {
            zero++;
            printf("0");
        }
    }

    if (printCount) {
        printf("\n");
        printf("Zeros: %d\n", zero);
        printf("Ones: %d\n", one);
    }
}

int reverseBits(int n) {
    int rev = 0;

    for (int i = 0; i < 32; i++)
        rev = (rev << 1) | ((n >> i) & 1);

    return rev;
}