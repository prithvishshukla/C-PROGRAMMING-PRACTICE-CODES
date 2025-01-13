#include <stdio.h>
#include <string.h>
int main() {
char str[] = "Find the substring here.";
char *substr = strstr(str, "substring");
if (substr)
printf("Substring found at position: %ld\n", substr - str);
else
printf("Substring not found\n");
return 0;
}
