#include<stdio.h>
/*program for unit conversion
    kms to miles
    inches to foot
    cm inche
    pound to kgs
    inches to meter */

int main()
{
    int input;
    
    while (1)
    {
    
    
    printf("Press 6 if you want to exit\n\n");
    printf("what conversion you want to do\n\n");
    printf("1.kms to miles\n2.inches to foot\n3.cm to inche\n4.pound to kg\n5.inches to meter\n");
    scanf("%d",&input); 
    
    
 
    int k,i,c,p,inch;
    switch(input)
    {
        
                
        case 1:
            
            printf("enter km\n");
            scanf("%d",&k);
            printf("%d km=%f miles\n",k,k*0.621);
            break;

        case 2:
            
            printf("enter inches\n");
            scanf("%d",&i);
            printf("%d inches=%f foot\n",i,i*0.0883);
            break;

        case 3:
            
            printf("enter cm\n");
            scanf("%d",&c);
            printf("%d cm=%f inches\n",c,c*0.394);
            break;

        case 4:
            
            printf("enter pounds\n");
            scanf("%d",&p);
            printf("%d pounds=%f kg\n",p,p*0.454);
            break;

        case 5:        
            
            printf("enter inches\n");
            scanf("%d",&inch);
            printf("%d inches=%f meter\n",inch,inch*0.0254);
            break;

        case 6:                                 
                printf("Exiting the program\n");
                goto end;
                break;
                
        default:
            printf("wrong choice\n");
    }

    }
    end:

        return 0;

}          

