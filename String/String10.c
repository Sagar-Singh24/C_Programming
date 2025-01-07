#include <stdio.h>
#include <string.h>

void bubbleSort(char strings[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Input number of strings: ");
    scanf("%d", &n);

    char strings[n][100];

    for (int i = 0; i < n; i++) {
        printf("Input string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    bubbleSort(strings, n);

    printf("The strings appear after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

