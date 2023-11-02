#include <stdio.h>

int main()
{
	int A[10] = { 1,3,4,7,14,15,17,18,19,20 };
	int B[10] = { 2,5,6,8,9,10,11,12,13,16 };
	int C[20];
	int i = 0, j = 0, k = 0;

	for (k = 0; k < 20; k++)
	{	if (i < 10 && j < 10)
		{	if (A[i] < B[j])
			{	C[k] = A[i];
				i++;
			}
			else
			{	C[k] = B[j];
				j++;
			}
		}
		else
			break;
	}
	if (k < 20)
	{	if (i < 10)
		{	for (int m = k; m < 20; m++)
			{	C[m] = A[i];
				i++;
			}
		}
		else
		{	for (int m = k; m < 10; m++)
			{	C[m] = B[j];
				j++;
			}
		}
	}
	for (i= 0; i < 20; i++)
		printf("%3d", C[i]);
	return 0;
}
