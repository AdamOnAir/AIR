#include "airlib/old.h"
#include "add/pad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char treatInput() {
    int error_no = 0;

    char input;
    printf("> ");
    scanf("%c", &input);

    if (strcmp(input, "q" "Q") == 0) {
        exit(0);
    } else if (strcmp(input, "r" "R") == 0) {
        richText("Rich Text Pad\n", KNRM, 0, 0, 1);
        pad();
    } else if (strcmp(input, "s" "S") == 0) {
        float time = stopWatch();
        printf("Time: %.2f seconds\n", time);
    } else if (strcmp(input, "c" "C") == 0) {
        float time = getGameTime();
        printf("Time: %.2f seconds\n", time);
    } else if (strcmp(input, "d" "D") == 0) {
        drawBox(10, 10, 10, 10, KNRM);
    } else if (strcmp(input, "z" "Z") == 0) {
        segFault();
    } else if (strcmp(input, "i" "I") == 0) {
        char input = nonBlockingInput();
        printf("Input: %c\n", input);
    } else {
        errorLog("Unknown command", 1, 0, 0);
        error_no++;
    }

    if (error_no > 10) {
        errorLog("RTFM!", 0, 0, 1);
    } else if (error_no > 20) {
        errorLog("You're driving me insane!", 0, 0, 1);
    } else if (error_no > 30) {
        errorLog("*Talking to developer* Is he attarded or something ?", 0, 1, 0);
    } else if (error_no > 40) {
        errorLog("Ayo, you have to stop that", 0, 1, 0);
    } else if (error_no > 50) {
        errorLog("Calm down or i'll throw an error.", 0, 1, 0);
    } else if (error_no > 60) {
        segFault();
    }
}

int main() {
    if (GET_PLATFORM == "Windows") {
        system("title AIR - AIR isn't restricted");
    }
    clrscr();

    richText("Actions : \n", KNRM, 1, 0, 0);
    richText("(R) Rich Text pad\n", KNRM, 0, 0, 1);
    richText("(S) Stop Watch\n", KNRM, 0, 0, 1);
    richText("(C) Clock\n", KNRM, 0, 0, 1);
    richText("(D) Draw Box\n", KNRM, 0, 0, 1);
    richText("(Z) Seg Fault\n", KNRM, 0, 0, 1);
    richText("(I) Input\n", KNRM, 0, 0, 1);
    richText("(F) File\n", KNRM, 0, 0, 1);
    richText("(J) Online Jokes", KNRM, 0, 0, 1);
    richText("(Q) Quit\n", KNRM, 0, 0, 1);

    while (1) {
        treatInput();
    }
}
