/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	if (Arr == NULL || len < 0)
		return -1;
	int i, j = 0, index, temp;
	int flag = 0;
	for (i = 1; i < len; i++)
	{
		for (index = 0; index <= j; index++)
		{
			if (Arr[i] == Arr[index])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			j++;
			temp = Arr[j];
			Arr[j] = Arr[i];
			Arr[i] = temp;
		}
		else
			flag = 0;
	}
	return j + 1;
}