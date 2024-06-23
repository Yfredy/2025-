// ""
// 清除出现三次及以上的字符

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void deleteTriple(char string[])
{
    int i=0,j;
    int found = 0;
    while(string[i] != '\0')
    {
        j = i + 1;
        while(string[i] == string[j] && string[j] == string[j+1])
        {
            j++;
            found = 1;
        }
        if(found)
        {
            strcpy(string+i, string+j+1);
            if(i != 0)
                i = 0;
            found = 0;
        }
        else
            i++;
    }
    puts(string);
}
int main(void)
{
    char string[256];
    gets(string);
    deleteTriple(string);
    system("pause");
    return 0;
}
