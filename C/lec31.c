#include<stdio.h>

void changeValue(int*address)
{
    *address=235;   //value at address is *address only is address address ,pointer concept
    return ;
}
int main()
{
    int a=34;
    printf("the value of a now is %d\n",a);
    changeValue(&a);     // address is given
    printf("the value of a is now %d\n",a); // value will be updated



return 0;


}