#include<stdio.h>
char ASCII(char cc);
int main() {
	char a;
	scanf_s("%c", &a);
	printf("%c", ASCII(a));
}
char ASCII(char cc) {
	int b;
	b = (int)(cc);
	if (b >= 65 && b <= 90) {
		b = b + 32;
	}
	else if (b >= 97 && b <= 122) {
		b = b - 32;
	}
	return (char)(b);
}