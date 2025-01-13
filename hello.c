#include <stdio.h>

int main() {
    char text[] = "Hello, World!, I Am Prithvish";
    int i = 0;
    while (text[i] != '\0') {
        printf("%c", text[i]);
        i++;
    }
    return 0;
}
