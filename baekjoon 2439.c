#include <stdio.h>

int main()
{
	int N, star, space;
	scanf_s("%d", &N);
	while (N < 0 || N > 100) {
		printf("N의 범위는 1~100 사이의 정수입니다:");
		scanf_s("%d", &N);
	}

	for (int i = 0; i < N; i++) {
		star = i + 1;
		space = N - star;

		for (int j = 0; j < space; j++) {
			printf(" ");
		}
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
	}
}