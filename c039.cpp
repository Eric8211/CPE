#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void
swap(int*, int*);

void
sort(int*, int*);

int
main(void)
{
	for (int t = 0; t < 5; t++)
	{
		int array[600] = { 0 };
		int n1, n2, n3, n4, n5, n6;
		int count = 0;//count how much times
		int i = 0;

		scanf("%d %d", &n1, &n2);
		/*sort n1 n2 from small to larger*/
		n5 = n1;
		n6 = n2;
		sort(&n1, &n2);
		n3 = n2 - n1;

		for (; n1 < n2; n1++)
		{
			n4 = n1;
			count = 1;

			for (; n4 > 1;)
			{
				if ((n4 % 2) != 0 && n4 != 1)
				{
					n4 = 3 * n4 + 1;
					count++;
				}
				if ((n4 % 2) == 0)
				{
					n4 = n4 / 2;
					count++;
				}
			}

			if (n4 == 1)
			{
				array[i] = count;
				i++;
			}
		}

		/*sort array from small to larger*/
		for (int i = 0, j = 1; j <= n3; i++, j = i + 1)
		{
			if (array[i] > array[j])
			{
				int temp;

				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		printf("%d %d %d\n", n5, n6, array[n3]);

	}
	return 0;
}

void
swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void
sort(int* n1, int* n2)
{
	if (*n2 < *n1)
	{
		swap(n1, n2);
	}
}