#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main( int argc, char *argv[]){

    unsigned long long int a;

    if(argc < 2 || argc > 3){

      printf("Please enter a positive integer.");
      exit(0);
    }

    char str[100];
    char *ptr;

    strcpy(str, argv[1]);

    int stop = 1;
    int count = 0;

    while(count<strlen(str) && stop!=0) {
        if(str[count] != '1' && str[count] != '2' && str[count] != '3' && str[count] != '4' && str[count] != '5' && str[count] != '6' && str[count] != '7' && str[count] != '8' && str[count] != '9' && str[count] != '0') {
            printf("\n\nPlease enter only numbers.\n\n");
            exit(0);
            stop = 0;
        }
        count++;
    }

    a = strtoull(str, &ptr, 10);

    for(unsigned long long int i = 2; i<=a; i++) {
        if(i == 2) {
            printf("%20llu", i);
        }
        else {
            printf("%10llu", i);
        }
    }

    for(unsigned long long int i = 2; i<=a; i++) {
        printf("\n\n%10llu", i);

        for(unsigned long long int j = 2; j<=a; j++) {
            unsigned long long int d = i*j;
            printf("%10llu", d);
        }
    }

    printf("\n\n\n");


}