#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

//冒泡排序
void Bublesort(int a[], int n)
{	
	int i, j, k;
	for (j = 0; j < n; ++j)
	{
		for (i = 0; i < n - j; ++i)
		{
			if (a[i] > a[i+1])
			{
				k = a[i];
				a[i] = a[i+1];
				a[i+1] = k;
			}
		}
	}
}

//冒泡排序2
void BubbleSort2(int a[], int n)
{
	int j, k;
	bool flag;
	k = n;
	flag = true;
	while(flag)
	{
		flag = false;
		for (j = 1, j < k; ++j)
		{
			if (a[j-1] > a[j])
			{
				Swap(a[j-1], a[j]);
				flag = true;
			}
		}
		k--;
	}
}

void BubbleSort3(int a[], int n)
{
	int j, k;
	int flag;
	flag = n;
	while(flag > 0)
	{
		k = flag;
		flag = 0;
		for (j = 1; j < k; ++j)
			if (a[j-1] > a[j])
			{
				Swap(a[j-1], a[j]);
				flag = j;
			}
	}	
}

