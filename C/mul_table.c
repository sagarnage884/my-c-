#include<stdio.h>
int main()
{
    int a;
    printf("enter no\n");
    scanf("%d",&a);
    
    for (int i=1;i<11;i++)
        {
            printf("%d X %d=%d\n",a,i,a*i);

        }

    return 0;
 
}
