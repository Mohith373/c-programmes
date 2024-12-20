#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>  
#include <ctype.h>  // Required for tolower()

int main()  
{  
    char string[] = "Kayak";  
    bool flag = true;  
    int length = strlen(string); // Store the length of the string to avoid repeated calls to strlen()
      
    // Converts the given string into lowercase  
    for(int i = 0; i < length; i++) {  
        string[i] = tolower(string[i]);  
    }  
      
    // Iterate the string forward and backward, compare one character at a time   
    // till middle of the string is reached  
    for(int i = 0; i < length / 2; i++) {  
        if(string[i] != string[length - i - 1]) {  
            flag = false;  
            break;  
        }  
    }  
      
    if(flag)  
        printf("Given string is a palindrome\n");  
    else  
        printf("Given string is not a palindrome\n");  
          
    return 0;  
}  
