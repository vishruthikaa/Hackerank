#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct phonebook
{
    char name[20];
    char number[20];
};
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    struct phonebook pb[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s",pb[i].name,pb[i].number);
    }
    char query[20];
    int flag=0;
    while(scanf("%s",query)!=EOF)
    {
        flag=0;
        for(int i=0;i<n;i++)
        {
            if(strcmp(query,pb[i].name)==0)
            {   flag=1;
                printf("%s=%s\n",pb[i].name,pb[i].number);
                break;
            }
        }
        if(!flag)
        {
        printf("Not found\n");
        }
    }  
    return 0;
}

