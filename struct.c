#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
 
 	int empno;
    char empname[30];
    char dept[50];
    int salary;
 
} Employee;
 
int main()
{
    int i, n;
    printf("Enter the Number of Employees : ");
    scanf("%d",&n);
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("\n Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //NO
        printf("No: ");
        scanf("%d",&employees[i].empno);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].empname);
        //Department
        printf("Department: ");
        scanf("%s",employees[i].dept);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++)
	{
 
  		printf("No: ");
        printf("%d \n",employees[i].empno);
        
        printf("Name: ");
        printf("%s \n",employees[i].empname);
        
        printf("Department: ");
        printf("%s \n",employees[i].dept);
 
        printf("Salary: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
        return 0;
 
}
