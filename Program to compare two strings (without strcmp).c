#include <stdio.h>
int stringCompare(char str1[], char str2[]) {
int i = 0;
while (str1[i] != '\0' && str2[i] != '\0') {
if (str1[i] != str2[i]) {
return str1[i] - str2[i];
}
i++;
}
return str1[i] - str2[i];
}
int main() {
char str1[100], str2[100];
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
int result = stringCompare(str1, str2);
if (result == 0)
printf("Strings are equal.\n");
else if (result < 0)
printf("String 1 comes before String 2.\n");
else
printf("String 1 comes after String 2.\n");
return 0;
}
