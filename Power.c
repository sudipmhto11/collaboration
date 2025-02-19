#include<stdio.h>

long int power (int x, int y)
{
    if (y==1 || y==0)
      return x;
    else
      return x*power(x,y-1);
}

int main()
{
    int x,y;
    long int result;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    result=power(x,y);
    printf("The result of %d^%d is %ld.",x,y,result);
    return 0;
}