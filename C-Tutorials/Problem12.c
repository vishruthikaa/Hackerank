/*Given a sentence,s , print each word of the sentence in a new line.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int len=strlen(s);
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]==' ' && s[i]!=len-1 && i!=0)
        {
            printf("\n");

        }
        else
            printf("%c",s[i]);

    }

    return 0;
}

