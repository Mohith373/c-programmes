#include <stdio.h>
int main() {
    for(int i=0;i<=10;i++)
    {
        if(i%2==0)
        continue;
        printf("the odd numbers is  %d\n",i);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    for (int j = 0; j < 10; j++)
    {
        if(j%2!=0)
        continue;
        printf("even nums are%d\n",j);
    }
    
    return 0;
}

