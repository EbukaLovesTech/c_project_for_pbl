#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// gcc -Wall -Wextra -Werror custom_printf.c
/**
 
Since you’re building custom_printf, the correct learning path is:

Write a function that:

Scans a string

Detects %d, %s, %c

Calls va_arg accordingly

Prints values

 */





void print(int n, ...) {
    va_list args;
    va_start(args, n);  
    for (int i = 0; i < n; i++) 
        printf("%d ", va_arg(args, int));
    printf("\n");
    va_end(args);
}

int main() {

    /**int age;
    char full_name[20];
    char age_input[10];


    printf("Type your age and press enter\n");
    fgets(age_input, sizeof(age_input), stdin);
    age = strtol(age_input, NULL, 10);


     printf("Type your full name and press enter\n");
    fgets(full_name, sizeof(full_name), stdin);

    printf("Your name is: %s and you are %d\n", full_name,age);
    **/
    print(5, 1, 2, 3, 4, 5);
    print(8, 1, 2, 3, 4, 5, 6, 7, 8);


    return 0;
}