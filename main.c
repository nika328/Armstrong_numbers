#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
  int limit;
    printf("Enter the number up to which you want to find the Armstrong numbers: ");
    scanf("%d", &limit);



  for (int i=0; i<=limit; i++)
  {
    //printf("\n1i is %d", i);
    //how many digits it has
    int temp=i;
    int digits=0;
    while (temp>0)
    {
      temp/=10;
      digits++;
    }
     if(i==0)
    {
      digits=1;
    }
    //printf("\nthere are %d digits", digits);

    //isolating the individual digits
    int sum=0;
    temp=i;
    int power=0;
    while(temp>=0)
    {
      sum+=pow((temp%(10)),digits);

      /*printf("\n2temp is %d", temp);
      printf("\n3sum is %d ", sum);*/
      temp=temp/10;
      power++;
      if(temp==0)
      {
        break;
      }
    }
    if(sum==i)
    {
      printf("\nArmstrong! %d", sum);
    }



  }
}
