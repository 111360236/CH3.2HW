#include <stdio.h>

int f(int a, int b);
int f1(int a, int b);

int main() {
	int x, y;
	scanf_s("%d%d", &x, &y);
	printf("LCM is %d\n\r", f(x, y));
	return 0;
}

int f(int a, int b) {
	int max, min;
	if (a <= b) return f1(b, a);
	else return f1(a, b);
}

int f1(int max, int min) {
	for (int i = min; i <= max * min; i++) {
		if (i % max == 0 && i % min == 0) {
			return i;
			break;
		}
	}
}