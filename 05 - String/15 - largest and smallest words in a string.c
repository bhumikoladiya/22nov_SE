#include <stdio.h>
#include <string.h>

void findLargestAndSmallestWords(char str[]) {
    char smallestWord[50], largestWord[50];
    int i, j, len, start, end;

    len = strlen(str);
    i = 0;

    while (i < len) {
        while (i < len && str[i] == ' ') {
            i++;
        }
        start = i;
        while (i < len && str[i] != ' ') {
            i++;
        }

        end = i - 1;

        if (end - start > 0) {
            if (strlen(smallestWord) == 0 || end - start < strlen(smallestWord)) {
                strncpy(smallestWord, &str[start], end - start + 1);
                smallestWord[end - start + 1] = '\0';
            }

            if (strlen(largestWord) == 0 || end - start > strlen(largestWord)) {
                strncpy(largestWord, &str[start], end - start + 1);
                largestWord[end - start + 1] = '\0';
            }
        }
    }

    printf("Smallest Word: %s\n", smallestWord);
    printf("Largest Word: %s\n", largestWord);
}

int main() {
    char inputString[500];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    findLargestAndSmallestWords(inputString);

}

