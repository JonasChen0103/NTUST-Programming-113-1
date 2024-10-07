#include <stdio.h>

int main()
{
    FILE* fp = fopen("input.txt", "r");

    int lines;
    fscanf(fp, "%d", &lines);

    for (int i = 0; i < lines; i++) {
        int count[10] = { 0 };
        int n;
        fscanf(fp, "%d", &n);

        for (int j = n; j > 0; j--) {
            int temp = j;
            while (temp != 0) {
                count[temp % 10]++;
                temp /= 10;
            }
        }

        for (int k = 0; k < 10; k++)
            printf(k == 9 ? "%d" : "%d ", count[k]);

        if (i != lines - 1)
            printf("\n");
    }

    fclose(fp);
    return 0;
}
