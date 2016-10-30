// one-dimensional array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
void main()
{
	double *pMas;
	int n;
	printf_s("n=");
	scanf_s("%d", &n);
	pMas = (double *)malloc(n * sizeof(double));
	for (int i = 0; i<n; i++)
	{
		pMas[i] = rand() % 10;
		printf("%f ", pMas[i]);
	}
	for (int i = 0; i<n / 2; i++)
	{
		double buf = pMas[i] * 2;
		pMas[i] = pMas[n-1-i] * 3;
		pMas[n-1-i] = buf;
	}
	printf("\n");
	for (int i = 0; i<n; i++)
		printf("%f ", pMas[i]);
	free(pMas);
	system("pause");
}

