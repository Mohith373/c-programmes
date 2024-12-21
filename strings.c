// C Program to illustrate the strcat function
#include <stdio.h>

int main()
{
    char dest[50] = "This is an";
    char src[50] = " example";

    printf("dest Before: %s\n", dest);

    // concatenating src at the end of dest
    strcat(dest, src);

    printf("dest After: %s", dest);

    return 0;
}

// C program to demonstrate the strlen() function
#include <stdio.h>
#include <string.h>

int main()
{
    // Declare and initialize a character array 'str' with
    // the string "GeeksforGeeks"
    char str[] = "GeeksforGeeks";

    // Calculate the length of the string using the strlen()
    // function and store it in the variable 'length'
    size_t length = strlen(str);

    // Print the length of the string
    printf("String: %s\n", str);

    printf("Length: %zu\n", length);

    return 0;
}

// C program to demonstrate the strcmp() function
#include <stdio.h>
#include <string.h>

int main()
{
    // Define a string 'str1' and initialize it with "Geeks"
    char str1[] = "Geeks";
    // Define a string 'str2' and initialize it with "For"
    char str2[] = "For";
    // Define a string 'str3' and initialize it with "Geeks"
    char str3[] = "Geeks";

    // Compare 'str1' and 'str2' using strcmp() function and
    // store the result in 'result1'
    int result1 = strcmp(str1, str2);
    // Compare 'str2' and 'str3' using strcmp() function and
    // store the result in 'result2'
    int result2 = strcmp(str2, str3);
    // Compare 'str1' and 'str1' using strcmp() function and
    // store the result in 'result3'
    int result3 = strcmp(str1, str1);

    // Print the result of the comparison between 'str1' and
    // 'str2'
    printf("Comparison of str1 and str2: %d\n", result1);
    // Print the result of the comparison between 'str2' and
    // 'str3'
    printf("Comparison of str2 and str3: %d\n", result2);
    // Print the result of the comparison between 'str1' and
    // 'str1'
    printf("Comparison of str1 and str1: %d\n", result3);

    return 0;
}

// C program to illustrate the use of strcpy()
#include <stdio.h>
#include <string.h>

int main()
{
    // defining strings

    char source[] = "GeeksforGeeks";
    char dest[20];

    // Copying the source string to dest
    strcpy(dest, source);

    // printing result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}

// C program to demonstrate the strstr() function
#include <stdio.h>
#include <string.h>

int main()
{
    // Define a string 's1' and initialize it with
    // "GeeksforGeeks"
    char s1[] = "GeeksforGeeks";
    // Define a string 's2' and initialize it with "for"
    char s2[] = "for";
    // Declare a pointer 'result' to store the result of
    // strstr()
    char* result;

    // Find the first occurrence of 's2' within 's1' using
    // strstr() function and assign the result to 'result'
    result = strstr(s1, s2);

    if (result != NULL) {
        // If 'result' is not NULL, it means the substring
        // was found, so print it
        printf("Substring found: %s\n", result);
    }
    else {
        // If 'result' is NULL, it means the substring was
        // not found, so print appropriate message
        printf("Substring not found.\n");
    }

    return 0;
}

// C program to demonstrate
// example of strrev() function

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "geeksforgeeks";

    printf("The given string is =%s\n", str);

    printf("After reversing string is =%s", strrev(str));

    return 0;
}