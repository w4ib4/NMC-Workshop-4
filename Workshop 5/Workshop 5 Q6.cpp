#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float salary;
    int workHours;
} Employee;

void calculateSalaries(Employee employees[], int n);

int main() {
    Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].workHours);
    }

    calculateSalaries(employees, 5);

    printf("\nUpdated Employee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Final Salary: %.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}

void calculateSalaries(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        if (employees[i].workHours >= 12) {
            employees[i].salary += 150;
        } else if (employees[i].workHours >= 10) {
            employees[i].salary += 100;
        } else if (employees[i].workHours >= 8) {
            employees[i].salary += 50;
        }
    }
}
