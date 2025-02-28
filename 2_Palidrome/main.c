#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("You entered %s\n", argv[1]);
    for (int i = 0; i < strlen(argv[1]); ++i) {
        if (argv[1][i] >= 'a') {
            argv[1][i] -= 32;
        }
    }
    for (int i = 0; i < strlen(argv[1]) / 2; i++) {
        if (argv[1][i] != argv[1][strlen(argv[1]) - (1 + i)]) {
            printf("%s", "The string in not palindrome");
            return 0;
        }
    }
    printf("%s", "The string is palindrome");
    return 0;
}
