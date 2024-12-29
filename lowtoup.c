#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32; //small to capital
      else(s[i]>='A'&&s[i]<=Z)
         s[i]+=32;//capital to small
      }
   }
   printf("\nString in Upper Case = %s", s);
   printf("string in lower case=%s",s);
   return 0;
}
