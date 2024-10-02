#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	while (n != 0) {
		const int input = n;

		int prime[25] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
		int res[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		if (n >= 2 && n <= 100) {
			printf("%3d! =", n);

			while (n >= 2) {
				int temp = n;
				for (int i = 2; i <= temp; i++) {
					int count = 0;
					while (temp >= i) {
						if (temp % i == 0) {
							temp = temp / i;
							count++;
						}
						else
							break;
					}
					if (isPrime(i)) addCount(i, count, prime, res);
				}
				n--;
			}
		}

		for (int i = 0; i < 25; i++) {
			if (prime[i] <= input) printf(" %d", res[i]);
		}
		printf("\n");

		scanf_s("%d", &n);
	}
}

int addCount(int num, int count, int prime[25], int res[25]) {
	for (int i = 0; i < 25; i++) {
		if (num == prime[i]) res[i] += count;
	}
	return 0;
}

int isPrime(int num) {
	int i;
	if (num == 1) {
		return 0;
	}
	else {
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}