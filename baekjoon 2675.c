#include <stdio.h>
#include <string.h>

int main()
{
	int T, R[1000];
	char S[1000][21];


	scanf_s("%d", &T);
	while (T > 1000 || T < 1) {
		printf("테스트 케이스의 입력수는 1~1000사이의 정수입니다:");
		scanf_s("%d", &T);
	}

	for (int i = 0; i < T; i++) {
		scanf_s("%d %s", &R[i], S[i], sizeof(S[i]));

		while (R[i] > 8 || R[i] < 1) {
			printf("반복횟수 크기는 1~8사이의 정수입니다:");
			scanf_s("%d %s", &R[i], S[i], sizeof(S[i]));
		}
		while (sizeof(S[i]) > 21 || sizeof(S[i]) < 1) {
			printf("문자열의 크기는 1~20사이의 정수입니다:");
			scanf_s("%d %s", &R[i], S[i], sizeof(S[i]));

		}
	}

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < strlen(S[i]); j++) {
			for (int k = 0; k < R[i]; k++) {
				printf("%c", S[i][j]);
			}
		}
		printf("\n");
	}
}