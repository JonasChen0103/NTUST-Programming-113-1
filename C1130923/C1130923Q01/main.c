#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space_top = n - 1;
    int star_top = 1;
    
    while (star_top <= (n * 2 - 1)) {
        for (int i = 1; i <= space_top; i++) printf(" ");
        for (int j = 1; j <= star_top; j++) printf("*");
        printf("\n");
        space_top--;
        star_top += 2;
    }

    int space_bottom = 1;
    int star_bottom = n * 2 - 3;

    while (star_bottom >= 1) {
        for (int i = 1; i <= space_bottom; i++) printf(" ");
        for (int j = 1; j <= star_bottom; j++) printf("*");
        printf("\n");
        space_bottom++;
        star_bottom -= 2;
    }

    return 0;
}