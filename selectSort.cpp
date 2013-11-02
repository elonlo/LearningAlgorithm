//直接选择排序
void selectSort(int data[])
{
	int i, j, k;
	for(i = 0; i < sizeof(data) / sizeof(int) - 1; ++i)
	{
		k = i;
		for(j = i + 1; j <= n; ++j)
			if(data[j] > data[k])
				k = j;
		if(k != i)
		{
			int temp = data[i];
			data[i] = data[k];
			data[k] = temp;
		}
	}
}
