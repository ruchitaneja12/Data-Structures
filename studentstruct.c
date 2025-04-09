#include <stdio.h>

struct Student {
    char name[50];
    float marks[5];
    float percentage;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        float totalMarks = 0;
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        
        printf("Enter marks for 5 subjects: ");
        for (int j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
            totalMarks += students[i].marks[j];
        }
        
        students[i].percentage = (totalMarks / 500) * 100;
    }
    
    printf("\nStudents who scored more than 90%%:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > 90) {
            printf("%s\n", students[i].name);
        }
    }
    
    return 0;
}
