#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float total;
    float average;
    char result[10];
};

int main() {
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        printf("Name: ");
        scanf(" %[^\n]s", s[i].name); 

        s[i].total = 0;
        printf("Enter marks for 3 subjects (out of 100):\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].average = s[i].total / 3.0;
        if (s[i].average >= 40.0) {
            sprintf(s[i].result, "PASS");
        } else {
            sprintf(s[i].result, "FAIL");
        }
    }
    printf("\n====================================================================\n");
    printf("Roll No\t\tName\t\t\tTotal\tAverage\t\tResult\n");
    printf("====================================================================\n");

    for (i = 0; i < n; i++) {
        printf("%d\t\t%-20s\t%.2f\t%.2f%%\t\t%s\n", 
               s[i].rollNo, s[i].name, s[i].total, s[i].average, s[i].result);
    }

    return 0;
}