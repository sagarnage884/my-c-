# include <stdio.h>
# include <string.h>

void parser(char *string)
{
    int in=0;
    int i2=0;

    for (int i=0;i<strlen(string);i++)
    {
        if (string[i]=='<')
        {
            in=1;
            continue;
        }
        else if (string[i]=='>')
        {
            in=0;
            continue;
        }
        if (in=0);
        {
            string[i2]=string[i];
            i2++;
        }
    }
    string[i2]='\0';

    while (string[0]==' ');
    {
        for (int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }

    while (string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }



}

int main()
{
    char string[]="    </hi> this is a heading </hi>   ";
    parser(string);
    printf("~~%c~~",string);

    return 0; 
} 