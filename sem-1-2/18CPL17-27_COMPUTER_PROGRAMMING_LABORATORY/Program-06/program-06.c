/*To implement binary search technique in 1D Array*/

#include<stdio.h>

int main()
{
	int a[100], n, f, mid, l, i, key, flag = 0;
	
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the Array in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the key to be searched: ");
	scanf("%d", &key);
	
	f = 0;
	l = n - 1;
	
	while(f<=l)
	{
		mid = (f + l)/2;
		if(a[mid] == key)
		{
			flag = 1;
			break;
		}
		else if(a[mid]<key)
			{
				f = mid + 1;
			}
		else 
			{
				l = mid - 1;
			}
	}
	
	if(flag)
	{
		printf("\nKey is available at %d location.\n", mid + 1);
	}
	else
	{
		printf("Key is not Found.\n");
	}
	
	return 0;	
}

