#include <stdio.h>
int main() {
    int var;
    printf("which variable you want");
    scanf("%d",&var);
    switch (var)
    {
    case 1:
        printf("mohith is very good at flirting.... ");
        break;
    case 2:
        printf("gopal raj is a very good director:");
        break;
    default:
        printf("venky is so big");
        break;
    }

    return 0;
}

