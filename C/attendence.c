#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int total_classes;
    int attended_classes;
    float percentage;
};

int main() {
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student s[n];
    
    float maxPercentage = 0;
    int maxIndex = 0;
    
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        
        printf("Name: ");
        scanf("%s", s[i].name);
        
        printf("Total Classes: ");
        scanf("%d", &s[i].total_classes);
        
        printf("Attended Classes: ");
        scanf("%d", &s[i].attended_classes);
        
        // Percentage calculate
        s[i].percentage = ((float)s[i].attended_classes / s[i].total_classes) * 100;
        
        // Highest attendance check
        if(s[i].percentage > maxPercentage) {
            maxPercentage = s[i].percentage;
            maxIndex = i;
        }
    }
    
    printf("\n--- Attendance Report ---\n");
    
    for(i = 0; i < n; i++) {
        printf("%s - %.2f%% - ", s[i].name, s[i].percentage);
        
        if(s[i].percentage >= 75)
            printf("Eligible\n");
        else
            printf("Not Eligible\n");
    }
    
    printf("\nHighest Attendance: %s (%.2f%%)\n", 
           s[maxIndex].name, s[maxIndex].percentage);

    return 0;
}