# include <stdio.h>
# include <string.h>

void parser(char s[])
{
    for (int i=0;i<strlen(s)-5;i++)
    {
        printf("%s",s[i+5]); 
    }

}

int main()
{
    char string[]="</hi> this is a heading </hi>";
    parser(string);
    printf("%d",strlen(string));

    return 0;
}