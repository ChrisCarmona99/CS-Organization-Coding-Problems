
// This is a link to a list of every key and its respective ASCII value: https://docstore.mik.ua/orelly/webprog/DHTML_javascript/0596004672_jvdhtmlckbk-app-b.html

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <conio.h>

int second = 0;
int minute = 0;
int keyCheck = 0;


// The following function takes in how long you want to delay the program in milliseconds...
void delay(int milliseconds) {
    clock_t timeDelay = milliseconds + clock();
    while (timeDelay > clock());
}

// The following function just prints the time in 'minutes : seconds'
int printData() {
    printf("    %d : %d \n", minute, second);
}

// The following function increments the time.
int secondCounter() {
    while(!kbhit() && keyCheck == 1) { // This while-loop uses the 'kbhit' function from teh conio.h c library... basically kbhit() checks if any key has been pressed.
                                       // basically, while no key is pressed AND keyCheck == 1, this while loop will continue to run... as soon as any key is pressed,
                                       // the loop is broken.
        if (second > 59) {
            second = 0;
            minute++;
        }

        printData();
        delay(1000);
        second++;
    }   
    StartStopControl();
}

// The following function uses the 'getch()' function to get ASCII value from the most recent key pressed...
int StartStopControl() {
    switch(getch()) {
        // In the following case, if the "enter" key is pressed, 'getch()' will be 13, which will prompt this case to run:
        case 13:  // "enter" keyboard ASCII value = 13
            keyCheck = 1;
            break;
        // In the following case, if the "spacebar" key is pressed, 'getch()' will be 32, which will prompt this case to run:
        case 32: // "spacebar" keyboard ASCII value = 32
            keyCheck = 0;
            printf("You held your break for %d minutes and %d seconds! \n", minute, second);
            printf(" \n");
            printf("Use the enter and spacebar keys to try again! \n");
            second = 0;
            minute = 0;
            break;
    }
}
    



int main() {
    printf(" \n");
    printf("Welcome to holdit! This is a program that sees how good your lungs are! (Not really but you can see how long you can hold your breath ;)  \n");
    printf(" \n");
    printf("This program will time how long you can hold your breath in minutes and seconds. \n");
    printf("Take a deep breath, then press the 'ENTER' key. \n");
    printf("When you absolutely have to exhale, press the 'SPACEBAR' key. \n");
    printf(" \n");
    printf("The duration will be displayed in 'minutes : seconds' \n");
    printf(" \n");

    int run = 1;
    while (run == 1) {
        secondCounter();
    }
    
    return 0;
}