// Do-While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double factorial(int n)
{
	if (n > 0)  return n*factorial(n - 1);
	else
		return 1;
}


void main()
{
	double e = 1e-4;
	double Sum = 0; 
	double si; 
	int n = 0; 
	int znak = 1; 
	do
	{
		n++; 
		si = 1. / factorial(n);
		Sum += znak*si; 
	} while (n < 5); 
	printf_s("Sum=%f  ln(2)=%f\n", Sum, log(2.));
	system("pause");
}
