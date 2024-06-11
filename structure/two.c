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
    struct Employee E1 = {1000, "Chinenye", "Akukalia", "Paediatric", "07038405581", "Rupokwu", 500000};

    printf("Employee id: %d\nEmployee Name: %s %s\nDepartment: %s\nPhone Number: %s\nAddress: %s\nSalary: %d\n", E1.employee_id, E1.first_name, E1.last_name, E1.department, E1.phone_number, E1.address, E1.salary);
}
