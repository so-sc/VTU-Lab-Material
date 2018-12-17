#include<stdio.h>
#include<stdlib.h> //for exit(0);
void main()
{
int a[100][100],b[100][100],m[100][100],a1,a2,b1,b2,i,j,k,sum;
printf("enter the number of rows and columns of matrix A \n");
scanf("%d%d",&a1,&a2);
printf("enter the number of rows and column of matrix B \n");
scanf("%d%d",&b1,&b2);
if(a2==b1)
{
printf("matrices can be multiplied ");
}
else
{
printf("matrices cannot be multiplied ");
exit(0);
}
printf("enter the elements of matrix A"); //input matrix A
for(i=0;i<a1;i++)
{
for(j=0;j<a2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of matrix B"); //input matrix B
for(i=0;i<b1;i++)
{
for(j=0;j<b2;j++)
{
scanf("%d",&b[i][j]);
}
}
//Compute product Matrix
for(i=0;i<a1;i++)
{
sum=0;
for(j=0;j<b2;j++)
{
for(k=1;k<b1;k++)
{
sum=sum+a[i][k]*b[k][j];
}
m[i][j]=sum;
}
}
printf("matrices after multiplication \n"); //Display product matrix
for("i=o;i<a1;i++)
{
for(j=o;j<b2;j++)
{
printf("%d \t ",m[i][j]);
}
}
}
