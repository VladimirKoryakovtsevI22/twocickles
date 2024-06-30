// twocikles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "random"
#include <ctime>
#include <iostream>
#include <iomanip>


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	int end = 1000;
	int start = 0;
	int N;
	int M;
	printf("enter arrea size");
	scanf_s("%d%d", &N, &M);

	int **a = new int*[N];
	for (int i = 0; i < N; i++)
		a[i] = new int[M];

	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			a[i][j] = rand()%(end - start + 1) + start;
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		std::cout << std::setw(4) << a[i][j] << "   ";
		std::cout << std::endl;
	}
	return 0;
}

