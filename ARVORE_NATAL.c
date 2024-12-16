#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define HEIGHT 10

void printTree(int state) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT - i - 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("%c", state ? '1' : '0');
        printf("\n");
    }
}

int main() {
    while (1) {
        printTree(1); 
        usleep(500000); 
        system("clear"); 
        printTree(0); 
        usleep(500000); 
        system("clear"); 
    }
    return 0;
}
