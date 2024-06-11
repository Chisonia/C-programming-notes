#include <stdio.h>

struct Employee
{
    int employee_id;
    char first_name[20];
    char last_name[20];
    char department[50];
    char phone_number[12];
    char address[60];
    int salary;
};

int main()
{
    struct Employee E1;
    printf("Enter Employee details\n");

    printf("Enter Employee id: ");
    scanf("%d", &E1.employee_id);

    printf("Enter First Name: ");
    scanf("%s", E1.first_name);

    printf("Enter Last Name: ");
    scanf("%s", E1.last_name);

    printf("Enter Department: ");
    scanf("%s", E1.department);

    printf("Enter Phone Number: ");
    scanf("%s", E1.phone_number);

    printf("Enter Address: ");
    scanf("%s", E1.address);

    printf("Enter Salary: ");
    scanf("%d", &E1.salary);

    printf("Employee id: %d\n", E1.employee_id);
    printf("Employee Name: %s %s\n", E1.first_name, E1.last_name);
    printf("Department: %s\n", E1.department);
    printf("Phone Number: %s\n", E1.phone_number);
    printf("Address: %s\n", E1.address);
    printf("Salary: %d\n", E1.salary);
    return 0;
}
