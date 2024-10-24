#include <stdio.h>
#include "../airlib/old.h"
#include <string.h>

#include "pad.h"

void pad() {
    richText("Enter desired effects : {color}, {bold}, {italic}, {underline}\n", KNRM, 0, 0, 1);
    char input[100];
    scanf("%s", input);

    if(strcmp(input, "blue") == 0) {
        richText("Sample Text", KBLU, 0, 0, 0);
    } else if(strcmp(input, "red") == 0) {
        richText("Sample Text", KRED, 0, 0, 0);
    } else if(strcmp(input, "green") == 0) {
        richText("Sample Text", KGRN, 0, 0, 0);
    } else if(strcmp(input, "yellow")) {
        richText("Sample Text", KYEL, 0, 0, 0);
    } else if(strcmp(input, "magenta") == 0) {
        richText("Sample Text", KMAG, 0, 0, 0);
    } else if(strcmp(input, "cyan") == 0) {
        richText("Sample Text", KCYN, 0, 0, 0);
    } else if(strcmp(input, "white") == 0) {
        richText("Sample Text", KWHT, 0, 0, 0);
    } else if(strcmp(input, "clear" "cls") == 0) {
        richText("Sample Text", KCLS, 0, 0, 0);
    } else if(strcmp(input, "bold") == 0) {
        richText("Sample Text", KNRM, 1, 0, 0);
    } else if(strcmp(input, "underline") == 0) {
        richText("Sample Text", KNRM, 0, 0, 1);
    } else if(strcmp(input, "italic") == 0) {
        richText("Sample Text", KNRM, 0, 1, 0);
    } else if(strcmp(input, "reset") == 0) {
        richText("Sample Text", KNRM, 0, 0, 0);
    } else {
        errorLog("Not a valid effect", 1, 0, 0);
    }
}