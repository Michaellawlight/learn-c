// learning about char arrays

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void last_name(char[], const char[], char**);

int main(int argc, char const *argv[])
{

    char *name;
    last_name("Rafi", "Khan", &name);

    printf("My name is %s\n", name);

    return 0;
}

void last_name(char first_name[], const char last[], char **name) {
    printf("Size of first name:%ld\n", strlen(first_name));
    printf("Sizeo of last name:%ld\n", strlen(last));

    unsigned int len = strlen(first_name) + strlen(last) + 1 + 1;
    *name = malloc(len);

    *name[0] = '\0';
    strcat(*name, first_name);
    strcat(*name, " ");
    strcat(*name, last);
    /* new_str[0] ='\0'; */
    /* strcat(new_str, first_name); */
    /* strcat(new_str, " "); */
    /* strcat(new_str, last); */

    /* printf("Full name: %s\n", new_str); */

    printf("Name: %s\n", *name);

    printf("Name: %s\n", *name);
}