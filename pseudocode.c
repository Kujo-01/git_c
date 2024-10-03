#include <stdio.h>
#include <math.h>
int main () {
    int a;
    scanf("%d" ,&a);
    int c = a & 1;
    if (c)
    printf("Positive");
    else
    printf("Negative");
    return 0;
}


