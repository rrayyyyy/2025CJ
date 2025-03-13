#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    int age;
    double salary;
    char name[20];
} employee_t;

void emp_info(employee_t emp) {
    printf("employee id = %d\n", emp.id);
    printf("employee name = %s\n", emp.name);
    printf("employee age = %d\n", emp.age);
    printf("employee salary = %.2lf\n\n", emp.salary);
}

void emp_writefile(employee_t emp[], int n) {
    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    fwrite(emp, sizeof(employee_t), n, fp);
    fclose(fp);
}

void emp_readfile(employee_t emp[], int *count) {
    FILE *fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    *count = 0;
    while (fread(&emp[*count], sizeof(employee_t), 1, fp)) {
        (*count)++;
    }
    fclose(fp);
}

int main() {
    employee_t emp[3] = {
        {1, 20, 30000.0, "IU"},
        {2, 26, 36000.0, "taylor"},
        {3, 31, 90000.0, "swift"}
    };

    emp_writefile(emp, 3);

    employee_t read_emp[10];
    int read_count;
    emp_readfile(read_emp, &read_count);

    for (int i = 0; i < read_count; i++) {
        emp_info(read_emp[i]);
    }

    return 0;
}
