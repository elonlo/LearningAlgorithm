//直接插入排序

void InserSort(int arr[], int n)
{
	int temp;
	int i, j;
	for(i = 1, i < sizeof(arr)/sizeof(int); ++i)
	{
		temp = arr[i];
		j = i;
		while((j > 0) && (arr[j-1] > temp))
		{
			arr[j] = arr[j-1];
			--j;
		}
		arr[j] = temp;
	}
}
