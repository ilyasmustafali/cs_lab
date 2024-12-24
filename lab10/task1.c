#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    int id;
    char name[50];
    double salary;
    struct Employee* next;
} Employee;

Employee* createEmployee(int id, char name[], double salary) {
    Employee* emp = (Employee*)malloc(sizeof(Employee));
    emp->id = id;
    strcpy(emp->name, name);
    emp->salary = salary;
    emp->next = NULL;
    return emp;
}

void printEmployee(Employee* emp) {
    printf("ID: %d, Name: %s, Salary: %.2f\n", emp->id, emp->name, emp->salary);
}

void printEmployeeList(Employee* emp) {
    while (emp) {
        printEmployee(emp);
        emp = emp->next;
    }
}

Employee* getEmployeesWithSalaryMoreThan(Employee* emp, double threshold) {
    Employee *result = NULL, *tail = NULL;
    while (emp) {
        if (emp->salary > threshold) {
            Employee* newEmp = createEmployee(emp->id, emp->name, emp->salary);
            if (!result) result = tail = newEmp;
            else tail = tail->next = newEmp;
        }
        emp = emp->next;
    }
    return result;
}

Employee* getEmployeesWithSalaryMoreThanAverage(Employee* emp) {
    double sum = 0; int count = 0;
    for (Employee* cur = emp; cur; cur = cur->next) {
        sum += cur->salary; count++;
    }
    return getEmployeesWithSalaryMoreThan(emp, count ? sum / count : 0);
}

int main() {
    Employee *list = NULL, *tail = NULL;
    int n, id; char name[50]; double salary;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Salary: ");
        scanf("%d %s %lf", &id, name, &salary);
        Employee* emp = createEmployee(id, name, salary);
        if (!list) list = tail = emp;
        else tail = tail->next = emp;
    }

    printf("\nAll Employees:\n");
    printEmployeeList(list);

    printf("\nEnter salary threshold: ");
    double threshold; scanf("%lf", &threshold);
    printf("\nEmployees with salary > %.2f:\n", threshold);
    printEmployeeList(getEmployeesWithSalaryMoreThan(list, threshold));

    printf("\nEmployees with salary > average:\n");
    printEmployeeList(getEmployeesWithSalaryMoreThanAverage(list));
    return 0;
}
