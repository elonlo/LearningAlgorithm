//快速排序
void quickSort(int s[], int low, int high)
{
	if(low < high)
	{
		int i = 1, j = high, x = s[low];
		while(i < j)
		{
			while(i < j && s[j] >= x)
				j--;
			if(i < j)
				s[i++] = s[j];
			
			while(i < j && s[i] < x)
				i++;
			if(i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quickSort(s, low, i - 1);
		quickSort(s, i - 1, high);
	}
}
