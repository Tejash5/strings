#include <stdio.h>
#include <string.h>
void string_char(char *str)
{
    char ch, ch1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'i')
            str[i] = ch;
        if (str[i] == 'm')
            str[i] = ch1;
    }
    printf("%s\n", str);
}
 int main()
{
    char str[] = "innominds";
    char ch, ch1;
    ch = 'r';
    ch1 = 'e';
    string_char(str);
    return 0;
}