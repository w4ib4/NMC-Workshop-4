#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

void readStudents(Student students[], int n);
void displayStudents(Student students[], int n);

int main() {
    Student students[10];
    int n = 10;

    readStudents(students, n);
    displayStudents(students, n);

    return 0;
}

void readStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudents(Student students[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
}
