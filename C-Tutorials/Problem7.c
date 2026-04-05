/*For each integer n  in the interval[a,b]  (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2 , and so on.
Else if n>9  and it is an even number, then print "even".
Else if n>9  and it is an odd number, then print "odd"*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char *words[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", words[n]);
        }
        else if (n > 9) {
            if (n % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }

    return 0;
}
