#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "innominds";
    char ch,ch1;
    ch= 'r';
    ch1= 'e';
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]== 'i')
        str[i]=ch;
        if(str[i]== 'm')
        str[i]=ch1;
    }
    printf("%s\n",str);
    return 0;
}