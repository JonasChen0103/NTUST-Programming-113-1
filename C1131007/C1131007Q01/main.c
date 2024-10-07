#include <stdio.h>

int main()
{
	FILE* fp = fopen("input.txt", "r");
	int n;
	fscanf(fp, "%d", &n);

	int space_top = 0;
	int star_top = n * 2 - 1;

	while (star_top >= 1) {
		for (int i = 1; i <= space_top; i++) printf(" ");
		for (int j = 1; j <= star_top; j++) printf("*");
		printf("\n");
		space_top++;
		star_top -= 2;
	}

	int space_bottom = n - 2;
	int star_bottom = 3;

	while (star_bottom <= (n * 2 - 1)) {
		for (int i = 1; i <= space_bottom; i++) printf(" ");
		for (int j = 1; j <= star_bottom; j++) printf("*");
		if (star_bottom != (n * 2 - 1)) printf("\n");
		space_bottom--;
		star_bottom += 2;
	}

	fclose(fp);

	return 0;
}