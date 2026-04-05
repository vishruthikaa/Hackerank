/*Given a string,s , consisting of alphabets and digits, find the frequency of each digit in the given string.*/#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *str=(char*)malloc(100*sizeof(char));
    int arr[20]={0};
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            arr[str[i]-'0']++;
        }
    } 
   
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

