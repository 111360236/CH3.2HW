#include <stdio.h>
int X(int n);
int main() {
	int n;
	printf("input:");
	scanf_s("%d", &n);
	printf("0\n");
	X(n);
}
int X(int n) {
	int a = 0, b = 1, c = 1;
	for (int i = 0; i < n - 1; i++) {
		printf("%d\n", b);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}