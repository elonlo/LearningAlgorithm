#include <stdio.h>

void shellSort(int data[], int len);
int main(void)
{
	int data[] = {45, 20, 80, 40, 26, 58, 66, 70};
	printf("init data\n");
	for (int i = 0; i < 8; ++i)
		printf("%d, ", data[i]);
	printf("\n");
	shellSort(data, 8);
	return 0;
}

void shellSort(int data[], int len)
{
	int d = len;
	int i, j;
	while(d > 1)
	{
		d = (d+1) / 2;
		for (i = 0; i < len - d; ++i)
		{
			if (data[i+d] < data[i])
			{
				int temp;
				temp = data[i+d];
				data[i+d] = data[i];
				data[i] = temp;
			}
			printf("\nd=%d||||", d);
			for (j = 0; j < 8; ++j)
				printf("%d, ", data[j]);
			printf("\n");
		}
	}
	
	for (j = 0; j < 8; ++j)
		printf("%d, ", data[j]);
	printf("\n");
}
