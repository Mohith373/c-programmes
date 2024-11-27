#include<stdio.h>
void main()
{
    int n;
    printf("enter  value of n: ");
    scanf("%d",&n);
    for(int rows=1;rows<=n;rows++)
    {
        for(int column=1;column<=((2*n)-1);column++)
        {
            if(column==(n-(rows-1))||column==(n+(rows-1)))
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for(int rows=n-1;rows>=1;rows--)
    {
        for (int column =1; column <= ((2*n)-1); column++)
        {
            if(column==(n-(rows-1))||column==(n+(rows-1)))
                printf("* ");
            else
                printf(" ");
            
        }
        printf("\n");   
    }
   
}