// Q2. Employee Payroll Management (Basic Structures): Define a structure Employee with members:
// id, name, designation, and salary. Write a program to input details of 5 employees and display all
// records in a formatted table.

#include <stdio.h>
#include <string.h>

struct Employee{
    int id;
    char Name[50];
    float salary;
    char designation[20];
};
void Details(struct Employee p){
    printf("%-5d %-20s %16.2f %-20s\n",p.id,p.Name,p.salary,p.designation);
}
int main(){

    
    
    struct Employee s[5];

    for(int i=0;i<5;i++){
        printf("Enter Id, Salary, Name, Designation\n");
        scanf("%d %f",&s[i].id,&s[i].salary);
        getchar();
        fgets(s[i].Name,50,stdin);
        s[i].Name[strcspn(s[i].Name, "\n")] = 0;
        getchar();
        fgets(s[i].designation,20,stdin);
        s[i].designation[strcspn(s[i].designation, "\n")] = 0;
        
    }
    printf("\n%-5s %-20s %16s %-20s\n", "Id", "Name", "Salary","Designation");
    for(int i=0;i<5;i++){
            Details(s[i]);
    }
    return 0;

} 