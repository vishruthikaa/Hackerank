/*Complete the code in the editor below. The variables , , and  are already declared and initialized for you. You must:

Declare 3 variables: one of type int, one of type double, and one of type String.
Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  3 variables.
Use the  operator +  to perform the following operations:
Print the sum of i  plus your int variable on a new line.
Print the sum of d  plus your double variable to a scale of one decimal place on a new line.
Concatenate s  with the string you read as input and print the result on a new line.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a;
    double b;
    char str[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a);
    scanf("%lf",&b);
      getchar();
    scanf("%[^\n]",str);

    // Print the sum of both integer variables on a new line.
    printf("%d\n",a+i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",b+d);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,str);
    return 0;
}
