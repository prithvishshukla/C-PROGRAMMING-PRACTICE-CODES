#include <stdio.h>
#include <string.h>
int main() {
char str[100], ch;
printf("Enter a string: ");
scanf("%s", str);
printf("Enter the character to search for: ");
scanf(" %c", &ch);
char *pos = strchr(str, ch);
if (pos)
printf("Character found at position: %ld\n", pos - str);
else
printf("Character not found.\n");
return 0;
}
