#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 3

char space[n][n];

void inicjacja() {

    char a='0';
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            space[i][j]=a;
            a++;
        }
    }
}

void show() {

    printf("\t\t    |   |   \n");
    printf("\t\t ___|___|___  \n");
    printf("\t\t    |   |     \n");
    printf("\t\t____|___|___\n");
    printf("\t\t    |   |   \n");
    printf("\t\t    |   |   \n");
}

void map() {

    printf("\t\t   %c|  %c| %c\n",space[0][0], space[0][1], space[0][2]);
    printf("\t\t ___|___|___  \n");
    printf("\t\t   %c|  %c|%c \n",space[1][0], space[1][1], space[1][2]);
    printf("\t\t____|___|___\n");
    printf("\t\t   %c|  %c|%c   \n",space[2][0], space[2][1], space [2][2]);
    printf("\t\t    |   |   \n");
}

int main(int argc, char **argv) {

    show();
    inicjacja();
    map();
    int final_state = 1;
    while(final_state != 0) {
        roz()
    }


    return 0;
}