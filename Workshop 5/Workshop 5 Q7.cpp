#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float salary;
    int workHours;
} Employee;

void findHighestSalary(Employee *employees, int n);

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    Employee *employees = (Employee *)malloc(n * sizeof(Employee));

    for (int i = 0; i < n; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].workHours);
    }

    findHighestSalary(employees, n);

    free(employees);
    return 0;
}

void findHighestSalary(Employee *employees, int n) {
    float highestSalary = 0;
    char highestName[50];

    for (int i = 0; i < n; i++) {
        if (employees[i].salary > highestSalary) {
            highestSalary = employees[i].salary;
            strcpy(highestName, employees[i].name);
        }
    }

    printf("\nEmployee with the highest salary:\n");
    printf("Name: %s, Salary: %.2f\n", highestName, highestSalary);
}
