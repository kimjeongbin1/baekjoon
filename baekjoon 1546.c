#include <stdio.h>

int main()
{
	int N,M;
	double score[1000];
	double total = 0;
	do
	{
		scanf_s("%d", &N);//과목수 입력 받기
		if (N <= 0 || 1000 < N)//범위 안맞을시 경고
			printf("과목수는 0~1000사이의 정수여야 합니다.\n");
	} while (N <= 0 || 1000 < N);//입력 과목수 범위 검사
	

	do
	{
		for (int i = 0; i < N; i++)//과목수 만큼 반복
		{
			scanf_s("%lf", &score[i]);//성적 초기화

			while (score[i] > 100 || score[i] < 0)//성적 범위 안맞을시 경고하고 다시 입력받기
			{
				printf("점수는 0~100사이의 정수여야 합니다.\n");
				scanf_s("%lf", &score[i]);
			}
			

			if (i == 0)// 최댓값 찾기, 처음 반복할때 최댓값 초기화
				M = score[i];
			else if (score[i] > M)
				M = score[i];
			
		}
		if (M == 0)//모든 성적이 0일때 경고
			printf("적어도 하나의 성적은 0보다 커야합니다.\n");
	} while (M == 0);//모든 성적이 0이 아닐때까지 반복
	

	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100.0;
		total += score[i];
	}
	//각 점수들 세준이 방식으로 바꾸기 + 총합 구하기

	printf("%f", total / N);
	//평균 출력
	
}