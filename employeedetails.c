#include<stdio.h>
struct employee
{
int empno;
char empname[10];
char department[10];
float salary;
int inc;
}
e[20];
int main()
{
	int i,n;
	printf("Enter number of employees\n");
	scanf("%d",&n);
	printf("Enter employee details:\n");
	for(i=0;i<n;i++)
	{
    e[i].inc = i+1;
	printf("Enter details for employee no %d,\n",e[i].inc);
	printf("Employee no:- ");
	scanf("%d",&e[i].empno);
	printf("Emp name:- ");
	scanf("%s",&e[i].empname);
	printf("Department name:- ");
	scanf("%s",&e[i].department);
	printf("Salary:- ");
	scanf("%f",&e[i].salary);
	}
	printf("EmpNo\tName\t\tDepartment\t\tSalary\n");
	for(i = 0;i<n; i++)
	{
	printf("%d\t%s\t\t%s\t\t%f\n",e[i].empno,e[i].empname,e[i].department,e[i].salary);
	}
	return 0;
}
