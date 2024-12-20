#include <stdio.h>
int main() {
    int i;
    printf("enter value of i");
    scanf("%d",&i);
    if(i<0)
    printf("this is a negative number");
    else if(i>0)
    printf("this is a positive number");
    else
    printf("number is equal to zero");
    return 0;
}

