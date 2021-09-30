#include <stdio.h>

int main() {
    int input;
    int in  = 0;
    int count = 0;
    while((input = getchar()) != EOF) {
        if(input != ' ' && in == 0) {
            in = 1;
            ++count;
        }

        if(input == ' ' && in == 1) {
            in = 0;
        }
    }
    printf("%d\n", count);
    
    return 0;
}