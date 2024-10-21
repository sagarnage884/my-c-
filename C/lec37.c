#include<stdio.h>
#include<strings.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} sagar,harry,ravi,name[30];
// or you can create this global variable of structure data type like   struct Student sagar,harray,ravi; 

int main()
{
    sagar.id=47;
    sagar.id=47;
    harry.id=1;
    harry.marks=90;
    sagar.marks=75;
    ravi.marks=80;
    sagar.fav_char= '$' ;
    harry.fav_char= '%';
    ravi.fav_char= '@';

    char name1[]="sagar";
    strcpy(sagar.name,name1);  // using string function to assign the name
    //strcpy(harry.name, "Harry Potter");
    //strcpy(ravi.name, "Ravi kishan");

    printf("%s has Id %d and he has got marks %d and his fhav charachter is %c  \n",sagar.name[30],sagar.id,sagar.marks,sagar.fav_char);
    printf("%s has Id %d and he has got marks %d and his fhav charachter is %c  \n",harry.name[30],harry.id,harry.marks,harry.fav_char);
    printf("%s has Id %d and he has got marks %d and his fhav charachter is %c  \n",ravi.name[30],ravi.id,ravi.marks,ravi.fav_char);

    return 0;



     
}

