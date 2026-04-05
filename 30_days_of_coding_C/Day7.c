/*Given a string,s , of length N  that is indexed from 0  to N-1  , print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[25000];
    int i=0;
    for(int j=0;j<n;j++)
    {
        scanf("%s",str);
        for(int i=0;i<strlen(str);i+=2)
            printf("%c",str[i]);

        printf(" ");

        for(int i=1;i<strlen(str);i+=2)
            printf("%c",str[i]);
        printf("\n");
        str[0]='\0';
    }
    return 0;
}

