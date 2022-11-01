#include <stdio.h>
void hanoi(int n, char A, char B, char C)
{
	if (n > 0) {
		hanoi(n - 1, A, C, B);
		printf("移動盤子 %d 從柱 %c 到柱 %c\n", n, A, C);
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n;
	printf("(從小到大編號1、2、3....)\n請輸入盤數：");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}