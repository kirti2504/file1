//program to check validity of triangle
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter 3 sides of triangle");
  scanf("%d%d%d", &a,&b,&c);

  if((a+b>c)&&(b+c>a)&&(c+a>b))
    printf("triangle is valid");
  else
    printf("triangle is not valid");
} 
