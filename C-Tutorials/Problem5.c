/*Task

Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. There is no return value, and no return statement is needed.*/
#include <stdio.h>

void update(int *a,int *b) {

    int temp1=*a;
    int temp2=*b;

    *a=(temp1)+(temp2);
    *b=(temp1)-(temp2);
    if(*b<0)
    {
        *b=(temp2)-(temp1);
    }

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

