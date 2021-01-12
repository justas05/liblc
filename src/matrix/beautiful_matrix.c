#include <stdio.h>
#include <stdlib.h>

void	print(int **arr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			printf("%4d", arr[i][j]);
			++j;
		}
		printf("\n");
		++i;
	}
}

int		fill(int **matrix, size_t	size)
{
	int		**arr;
	size_t	i;
	size_t	j;
	int	up;
	int	right;
	int	down;
	int	left;

	i = 0;
	up = 1;
	down = up;
	right = up;
	left = up;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j > i)
			{
				if (j > size - 1 - i)
					arr[i][j] = right++;
				else if (j < size - 1 - i)
					arr[i][j] = up++;
				else
					arr[i][j] = 0;
			}
			else if (j < i)
			{
				if (j > size - 1 - i)
					arr[i][j] = left++;
				else if (j < size - 1 - i)
					arr[i][j] = down++;
				else
					arr[i][j] = 0;
			}
			else
				arr[i][j] = 0;
			++j;
		}
		++i;
	}
}
