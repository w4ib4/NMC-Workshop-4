#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char post[50];
    float salary;
} Employee;

Employee filterHighSalary(Employee employees[], int n);

int main() {
    Employee employees[10], result[10];
    int n = 10, count = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Post: ");
        scanf(" %[^\n]", employees[i].post);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            result[count++] = employees[i];
        }
    }

    printf("\nEmployees with salary greater than $10,000:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Post: %s, Salary: %.2f\n", result[i].name, result[i].post, result[i].salary);
    }

    return 0;
}
