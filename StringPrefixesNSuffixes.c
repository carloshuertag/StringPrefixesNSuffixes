#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stringPrefixesNSuffixes(const char * string) {
    int i;
    char prefix[strlen(string)];
    printf("\nString Prefixes:\n");
    printf("{%s, ", string);
    for(i = strlen(string) - 1; i > 0; i--){
        strncpy(prefix, string, i);
        prefix[i] = '\0';
        printf("%s, ", prefix);
    }
    printf("€}\n");
    printf("\nString Suffixes:\n");
    printf("{%s, ", string);
    for(i = strlen(string) - 1; i > 0; i--){
        ++string;
        printf("%s, ", string);
    }
    printf("€}\n");
}

void main(){
    printf("\nStringPrefixesNSuffixes\n@author: Carlos Huerta Garcia, Marco Antonio Ocaña\nDescription: Displays all the prefixes and suffixes from a given string\n(€ is used as the empty string)\nEnter a string: ");
    char string[256];
    fflush(stdin);
    scanf("%s", string);
    stringPrefixesNSuffixes(string);
}
