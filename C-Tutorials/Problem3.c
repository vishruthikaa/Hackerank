/*Input Format

The first line contains two integers.
The second line contains two floating point numbers.
Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to 1 decimal place) separated by a space on the second line.

Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);
    return 0;
}

