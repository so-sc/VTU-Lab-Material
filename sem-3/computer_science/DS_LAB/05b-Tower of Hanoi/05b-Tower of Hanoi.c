#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void tower(int n,int source,int temp,int dest)
{
	if(n==0)
	return;
	tower(n-1,source,dest,temp);
	printf("\nMove disk %d from %c to %c\n",n,source,dest);
	tower(n-1,temp,source,dest);
}

void main()
{
	int n;
	printf("Enter the number of disks:\n");
	scanf("%d",&n);
	tower(n,'A','B','C');
	printf("\nThe total number of moves are:\n%d\n",(int)pow(2,n)-1);
}
	
	

/*
OUTPUT:

Enter the number of disks:
3

Move disk 1 from A to C

Move disk 2 from A to B

Move disk 1 from C to B

Move disk 3 from A to C

Move disk 1 from B to A

Move disk 2 from B to C

Move disk 1 from A to C

The total number of moves are:
7



Enter the number of disks:
0

The total number of moves are:
0
*/



