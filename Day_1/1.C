#include <stdio.h>
int main() {
    char string1[100], string2[100], i;
    printf("Enter string String: ");
    fgets(string1, sizeof(string1), stdin);
    for (i = 0; string1[i] != '\0'; ++i) {
        string2[i] = string1[i];
    }

    string2[i] = '\0';
    printf("String string2: %s", string2);
    return 0;
}