#include <stdio.h>
int main() {
    for (int i = 0; i < 10; i++)
    {
        if(i==5){
        continue;}
        printf("%d\n",i);
    }
    
    return 0;
}

#include <stdio.h>
void main()
{
    for(int j=1;j<=10;j++)
    {
        if(j==5){
        break;}
        printf("%d\n",j);
    }
}

