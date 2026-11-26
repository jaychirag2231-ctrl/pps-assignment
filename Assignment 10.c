#include <stdio.h>
int getFirstDayOfYear(int year) {
    int day = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return day;
}

int main() {
    int year, month, day, daysInMonth, weekDay = 0, startingDay;
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        monthDays[1] = 29; // Update February to 29 days
    }
    startingDay = getFirstDayOfYear(year);
    for (month = 0; month < 12; month++) {
        daysInMonth = monthDays[month];
        printf("\n\n  ------------%s-------------\n", months[month]);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        for (weekDay = 0; weekDay < startingDay; weekDay++) {
            printf("     ");
        }
        for (day = 1; day <= daysInMonth; day++) {
            printf("%5d", day);
            if (++weekDay > 6) {
                printf("\n");
                weekDay = 0;
            }
        }
        startingDay = weekDay;
    }

    printf("\n");
    return 0;
}
