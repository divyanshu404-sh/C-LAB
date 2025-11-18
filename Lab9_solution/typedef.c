// Typedef for Cleaner Code: Use typedef to define a shorter name for the struct Employee type (e.g.,
// typedef struct Employee Emp;). Then, use the typedef name to declare and manage employee records.

#include <stdio.h>
#include <string.h>


typedef struct Employee{
    int id;
    char name[30];
    float salary;
}name;

void details(name n){
    printf("%-10d %-20s %-10.2f\n",n.id,n.name,n.salary);
}

int main(){

    name na[5];

    for(int i=0;i<5;i++){
        printf("Enter Id,salary,Name\n");
        scanf("%d",&na[i].id);
        scanf("%f",&na[i].salary);
        getchar();
        fgets(na[i].name,50,stdin);
        na[i].name[strcspn(na[i].name, "\n")] = 0;
    }

    printf("%-10s %-20s %-10s\n","Id","Name","Salary");
    for(int i=0;i<5;i++){
        details(na[i]);
    }

    return 0;
}