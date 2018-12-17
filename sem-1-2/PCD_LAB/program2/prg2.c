/*Program to implement square root without builtin function*/

#include<stdio.h>
 main()
 {
    float x, n;
    int i;
    printf("Enter the numbers:");
    scanf("%f", &x);
    for(i=0;i<10;i++)
    {
        x = (x*x + n)/(2*x); // Implementing newton-raphson square-root method
    }
    printf("Square root of number %f = %f\n", n, x); //Display square-root
 }
 
 
