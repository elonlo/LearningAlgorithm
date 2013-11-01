//折中插入排序
void BInsertSort(int data[], int n)
{
	int low, high, mid;
	int temp, i, j;
	for(i = 1, i < n; ++i)
	{
		low = 0;
		temp = data[i];
		high = i - 1;
		while(low <= high)
		{
			mid = (low + high) / 2;
			if(data[mid] > temp)
				high = mid + 1;
			else
				low = mid + 1;
		}
		j = i;
		while((j > low) && (data[j-1] > temp))
		{
			data[j] = data[j-1];
			--j;
		}
		data[low] = temp;
	}
}
