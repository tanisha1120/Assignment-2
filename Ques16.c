#include <stdio.h>

int main() {
    // 16. Leap Year Finder
    // tanishaSingh
    int startYear, endYear;
    
    printf("Enter start year: ");
    scanf("%d", &startYear);
    printf("Enter end year: ");
    scanf("%d", &endYear);
    
    printf("Leap years between %d and %d:\n", startYear, endYear);
    for (int year = startYear; year <= endYear; year++){
        if ((year % 4 == 0) {
            printf("%d\n", year);
        }
    }
    
    return 0;
}
