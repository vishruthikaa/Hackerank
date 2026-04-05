/*Given a 5 digit number ,print the sum of its digits*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
