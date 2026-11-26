#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length (strlen)\n");
        printf("2. Copy String (strcpy)\n");
        printf("3. Concatenate Strings (strcat)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Reverse First String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of String 1: %zu\n", strlen(str1));
                printf("Length of String 2: %zu\n", strlen(str2));
                break;

            case 2:
                strcpy(result, str1);
                printf("Copied String 1 into result: %s\n", result);
                break;

            case 3:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated String: %s\n", result);
                break;

            case 4:
                if (strcmp(str1, str2) == 0) {
                    printf("Both strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 5: {
                int len = strlen(str1);
                for (int i = 0; i < len; i++) {
                    result[i] = str1[len - 1 - i];
                }
                result[len] = '\0';
                printf("Reversed String 1: %s\n", result);
                break;
            }

            case 6:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}