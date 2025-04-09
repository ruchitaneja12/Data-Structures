#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee employees[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }
    
    int highestSalaryId = employees[0].id;
    float highestSalary = employees[0].salary;
    
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > highestSalary) {
            highestSalary = employees[i].salary;
            highestSalaryId = employees[i].id;
        }
    }
    
    printf("\nEmployee with the highest salary has ID: %d\n", highestSalaryId);
    
    return 0;
}
