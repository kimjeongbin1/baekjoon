#include <stdio.h>

int main()
{
	int a[3];
	int reward, max;

	for (int i = 0; i < 3; i++) //3개의 주사위 수 입력받기 
	{
		scanf_s("%d", &a[i]);
		if (a[i] > 6 || a[i] < 1) // 범위 검사
		{
			printf("1~6사이의 정수를 입력해주세요.\n");
			i--;
		}
	}

	if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) //3개 다 다른 경우
	{
		max = a[0];//3개의 수 중에 최댓값 찾기
		for (int i = 1; i < 3; i++)
		{
			if (a[i] > max)
				max = a[i];
		}
		reward = max * 100;//보상 계산
	}

	else if (a[0] == a[1] && a[1] == a[2]) //3개 다 같은 경우
	{
		reward = 10000 + a[0] * 1000;
	}

	else if (a[0] == a[1] || a[0] == a[2]) //2개가 같은경우 중 a[0]이 같은 수 일때
	{
		reward = 1000 + a[0] * 100;
	}
	else //2개 같은경우 중 a[1]이 같은 수 일때
	{
		reward = 1000 + a[1] * 100;
	}

	printf("%d", reward); //보상 출력

}