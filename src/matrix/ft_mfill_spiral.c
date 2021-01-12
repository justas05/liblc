void lc_fill_spiral(int **arr, int m, int n)
{
	int count = 1;
	int i = 0;
	int j = 0;

	while (count < m * n)
	{
		while (j + 1 < n && arr[i][j + 1] == 0 && count < m * n)
			arr[i][j++] = count++;

		while (i + 1 < m && arr[i + 1][j] == 0 && count < m * n)
			arr[i++][j] = count++;
		
		while (j - 1 >= 0 && arr[i][j - 1] == 0 && count < m * n)
			arr[i][j--] = count++;
		
		while (i - 1 >= 0 && arr[i - 1][j] == 0 && count < m * n)
			arr[i--][j] = count++;
	}
	arr[i][j] = count;
}
