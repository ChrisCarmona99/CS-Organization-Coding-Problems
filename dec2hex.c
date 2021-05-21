#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main( int argc, char *argv[] ){
    if(argc < 2 || argc > 3){
    printf("\n\nPlease include only '32' or '64' to denote a 32-bit or 64-bit conversion.\n\n");
    exit(0);
    }
    
    int result32;
    int result64;

    char check32[3] = "32";
    char check64[3] = "64";

    result32 = strcmp(argv[1], check32);
    result64 = strcmp(argv[1], check64);

    if(result32 != 0 && result64 != 0){
        printf("\n\nPlease include only '32' or '64' to denote a 32-bit or 64-bit conversion.\n\n");
        exit(0);
    }

    //32 bit hex:
    if(result32 == 0) {
        char str[9], revStr[9];
        unsigned int a, b;

        printf("\nEnter a positive integer ( or 0): ");

        scanf("%u", &a);
        b = a;

        char ch0 = '0';
        char ch1 = '1';
        char ch2 = '2';
        char ch3 = '3';
        char ch4 = '4';
        char ch5 = '5';
        char ch6 = '6';
        char ch7 = '7';
        char ch8 = '8';
        char ch9 = '9';
        char ch10 = 'A';
        char ch11 = 'B';
        char ch12 = 'C';
        char ch13 = 'D';
        char ch14 = 'E';
        char ch15 = 'F';

        int count = 0;
        
        while(a>0) {
            int t = a%16;


            if (t == 0)  {
                strncat(str, &ch0, 1);
            }
            if (t == 1){
                strncat(str, &ch1, 1);
            }
            if(t == 2){
                strncat(str, &ch2, 1);
            }
            if(t == 3){
                strncat(str, &ch3, 1);
            }
            if(t == 4){
                strncat(str, &ch4, 1);
            }
            if(t == 5){
                strncat(str, &ch5, 1);
            }
            if(t == 6){
                strncat(str, &ch6, 1);
            }
            if(t == 7){
                strncat(str, &ch7, 1);
            }
            if(t == 8){
                strncat(str, &ch8, 1);
            }
            if(t == 9){
                strncat(str, &ch9, 1);
            }
            if(t == 10){
                strncat(str, &ch10, 1);
            }
            if(t == 11){
                strncat(str, &ch11, 1);
            }
            if(t == 12){
                strncat(str, &ch12, 1);
            }
            if(t == 13){
                strncat(str, &ch13, 1);
            }
            if(t == 14){
                strncat(str, &ch14, 1);
            }
            if(t == 15){
                strncat(str, &ch15, 1);
            }

            a = a/16;
            count++;
        }

        for(int i = count; i<8; i++) {
            strncat(str, &ch0, 1);
        }

        int length = strlen(str);
        int j = 0;
        int i;

        for(i = length-1; i>=0; i--){
            revStr[j++] = str[i];
        }
        revStr[i] = '\0';

        printf("The 32-bit hex equivalent of %u is: 0x%s\n", b, revStr);

    }


    //64-bit:
    if(result64 == 0) {
        char str[17], revStr[17];
        unsigned long long int a, b;

        printf("\nEnter a positive integer ( or 0): ");

        scanf("%llu", &a);
        b = a;



        char ch0 = '0';
        char ch1 = '1';
        char ch2 = '2';
        char ch3 = '3';
        char ch4 = '4';
        char ch5 = '5';
        char ch6 = '6';
        char ch7 = '7';
        char ch8 = '8';
        char ch9 = '9';
        char ch10 = 'A';
        char ch11 = 'B';
        char ch12 = 'C';
        char ch13 = 'D';
        char ch14 = 'E';
        char ch15 = 'F';

        int count = 0;
        while(a>0) {
            int t = a%16;


            if(t == 0) {
                strncat(str, &ch0, 1);
            }
            if(t == 1) {
                strncat(str, &ch1, 1);
            }
            if(t == 2) {
                strncat(str, &ch2, 1);
            }
            if(t == 3) {
                strncat(str, &ch3, 1);
            }
            if(t == 4) {
                strncat(str, &ch4, 1);
            }
            if(t == 5) {
                strncat(str, &ch5, 1);
            }
            if(t == 6) {
                strncat(str, &ch6, 1);
            }
            if(t == 7) {
                strncat(str, &ch7, 1);
            }
            if(t == 8) {
                strncat(str, &ch8, 1);
            }
            if(t == 9) {
            strncat(str, &ch9, 1);
            }
            if(t == 10) {
                strncat(str, &ch10, 1);
            }
            if(t == 11) {
                strncat(str, &ch11, 1);
            }
            if(t == 12) {
                strncat(str, &ch12, 1);
            }
            if(t == 13) {
                strncat(str, &ch13, 1);
            }
            if(t == 14) {
                strncat(str, &ch14, 1);
            }
            if(t == 15) {
                strncat(str, &ch15, 1);
            }


            a = a/16;
            count++;
        }

        for(int i = count; i<16; i++) {
            strncat(str, &ch0, 1);
        }

        int j = 0;
        int i;
        int length = strlen(str);

        for(i = length-1; i>=0; i--){
            revStr[j++] = str[i];
        }
        revStr[i] = '\0';

        printf("The 64-bit hex equivalent of %llu is: 0x%s\n", b, revStr);
  }

}