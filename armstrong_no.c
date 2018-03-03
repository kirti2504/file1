//program to find armstrong number in an given range input by the user.

#include<stdio.h>
void main()
{
  int n,rem ,arm_no ,temp , num;
  printf("Enter the range in which you want to find the armstrong number");
  scanf("%d" ,&n);
  printf("\nArmstrong number are :"); 
  for(num=1;num<=n;num++)
  {
     temp=num;  
     arm_no=0;
     while(temp>0)
       {
             rem =  temp%10;
          arm_no = arm_no + (rem*rem*rem);
            temp =   temp/10;
        }  
      if(arm_no==num)
      printf("\n%d is the armstrong number",num);
   
    }    
   
  
}
