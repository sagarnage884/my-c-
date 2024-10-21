#include<stdio.h>
int main()
{
   /* int n;
    
    int fibonici_recursive(n)
    {
        if (n==0 || n==1)
        {
            return n;
        }
        else
        {
            return (fibonici_recursive(n-1)+fibonici_recursive(n-2));
        }

    }

    printf("enter the length of the sereis\n");
    scanf("%d",&n);
   // printf("sum of series is %d\n\n\n\n",fibonici_recursive(n)); // this method is taking around 3-4 seconds to calculate
    */

    // by for loop 
    int n;
    printf("enter the length of fibonici sereis\n");
    scanf("%d",&n);

    int a=0;
    int b=1;
    for (int i=1;i<n;i++)
    { 
      int c=a+b;
      
      a=b;
      b=c;
      if (i !=n-1)
      { 
        continue;
      }
      else
      {
        goto end;
      }
      end:
      printf("%d\n",b);
    } 
    

        return 0; 

}