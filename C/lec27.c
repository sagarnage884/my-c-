#include<stdio.h>
int main()
{
    char b='x';
    char *ptrb=&b;
    int a=34;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+2); // will add size of data type given i.e here 4 (for int) to memory location of a
    
    printf("%d\n",ptra); 

   // printf("%d\n",ptrb);
   // printf("%d\n",ptrb+2); // will add 2 X (size of char i.e 1)
    //printf("%d\n",ptrb++); // will add 1 
   // printf("%d\n",ptrb--); // will add 1 
   // printf("%d\n",ptrb--); // will add 1 
 
    return 0;

} 