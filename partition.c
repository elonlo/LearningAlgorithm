//快速排序

int partition(int *data, int low, int high)
{
	int t = 0;
	t = data[low];
	while(low < high)
	{
		while(low < high && data[high] >= t)
			high--;
		data[low] = data[high];
		while(low < high && data[low] <= t)
			low++;
		data[high] = data[low];
	}
	data[low] = t;	
	return low;
}	

void sort(int *data, int low, int high)
{
	if(low >= high)
		return;
	int pivotloc = 0;
	pivotloc = partition(data, low, high);
	sort(data, low, privotloc - 1);
	sort(data, privotloc + 1, high);
}


