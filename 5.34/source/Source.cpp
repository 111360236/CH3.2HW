#include<stdio.h>

int power(int x, int y);

int main() {
	int a, b;
	printf("輸入一數和次方");
	scanf_s("%d %d", &a, &b);
	printf("%d", power(a, b));
}
int power(int x, int y) {
	if (y == 1) return x;
	return x * power(x, y - 1);
}