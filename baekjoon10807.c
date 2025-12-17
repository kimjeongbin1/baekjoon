#include <stdio.h>

int main()
{
	int N, v, count=0, integer[100];

	scanf_s("%d", &N); //입력받을 정수의 개수(N) 입력받기

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &integer[i]);
	}//N개 만큼 정수 입력받기

	scanf_s("%d", &v); //입력받은 정수들 중에서 찾을 수(v) 입력받기

	for (int i = 0; i < N; i++) {
		if (integer[i] == v) {
			count++;
		}
	} //입력받은 정수가 v와 같을때 count 증가

	printf("%d", count); //count 출력
}