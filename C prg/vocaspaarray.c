#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, i;
    printf("Enter a string ending with $: \n");
    gets(str);
    for (i = 0; str[i] != '$'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Check for vowels
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels=vowels+1;
            } else {
                consonants=consonants+1;
            }
        } else if (str[i] == ' ') {
            spaces=spaces+1;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    return 0;
}