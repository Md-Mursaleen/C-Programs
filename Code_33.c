#include <stdio.h>
#include <string.h>
//Program to print all the details of the employee using the concept of structure to functions.
struct employee{
    char emp_name[10];
    int emp_id;
    float salary;
};
void employee_details(struct employee e);
int main(void){
    struct employee emp;
    struct employee *ptr;
    ptr=&emp;
   strcpy(emp.emp_name,"Md Mursaleen");
   emp.emp_id=2310;
   emp.salary=100000;
   employee_details(emp);


return 0;
}
void employee_details(struct employee e){
    printf("The employee id is given as %d\n",e.emp_id);
    printf("\nThe employee salary is %f\n",e.salary);
    printf("\nThe employee name is given as %s\n",e.emp_name);


}