//希尔排序
void shellSort(int *data, size_t size)
{
	for(int gap = size / 2; gap > 0; gap /= 2)
		for	(int i = gap; i < size; ++i)
		{
			int key = data[i];
			int j = 0;
			for (j = i - gap; j >= 0 && data[j] > key; j -= gap)
				data[j+gap] = data[j];
			data[j+gap] = key;
		}
}
