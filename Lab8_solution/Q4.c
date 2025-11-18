//Q4. Nested Structures: Create a structure Date with day, month and year. Use it inside an Employee
//structure with name and salary. Write functions to:
//   • Input and display employee details.
//   • Print the names of employees who joined after the year 2020.

#include <stdio.h>
#include <string.h>

struct Date{
    int date;
    char day[12];
    char month[12];
    int year;
};
struct Employee{
    char name[50];
    int salary;
    struct Date d;
};
void details(struct Employee e){
    printf("%-20s %-12d %-7d %-10s %-7d %-10s\n",e.name, e.salary, e.d.date, e.d.month, e.d.year, e.d.day);
}

int main(){

    int n;

    printf("Enter No. of employee:\n");
    scanf("%d",&n);

    struct Employee l[n];

    printf("Enter employee details:\n");
    printf("%s %s %s %s %s %s\n","Salary", "Date", "Day", "Month", "Year", "Name");
    for(int i=0;i<n;i++){
        printf("Enter employee_%d details:\n",i+1);
        scanf("%d %d %s %s %d",&l[i].salary,&l[i].d.date,l[i].d.day,l[i].d.month,&l[i].d.year);
        getchar();
        fgets(l[i].name,50,stdin);
        l[i].name[strcspn(l[i].name, "\n")] = 0;
    }

    printf("%-20s %-12s %-7s %-10s %-7s %-10s\n","Name", "Salary", "Date", "Month", "Year", "Day");
    for(int i=0;i<n;i++){
        details(l[i]);
    }
    printf("Employees who have joined after 2020:\n");
    for(int i=0;i<n;i++){
        if(l[i].d.year>=2020){
            details(l[i]);
        }
    }
    
    return 0;
}

