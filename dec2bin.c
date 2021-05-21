#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    int a[32];
    int i;
    unsigned int b, c;

    printf("\nEnter a positive integer ( or 0): ");
    
    scanf("%u", &b);
    c = b;

    for(i=0;b>0;i++) {
        a[i]=b%2;
        b=b/2;
    }

    for(i=i; i<32; i++) {
      a[i] = 0;
    }

    printf("\nThe binary equivalent of %u is: ", c);

    for(i=i-1;i>=0;i--) {
      printf("%d",a[i]);
    }

    printf("\n\n");
}