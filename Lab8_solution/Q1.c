//Q1. Basic Structure Usage: Define a structure Student with roll number, name and marks. Write functions
//to:
//• Accept details of n students from the user.
//• Print all student records in tabular form.

#include <stdio.h>
#include <string.h>

struct Student{
    int Roll;
    char Name[50];
    float Marks;
};
void Details(struct Student p){
    printf("%-5d %-20s %6.2f\n",p.Roll,p.Name,p.Marks);
}
int main(){

    int n;

    printf("Enter number of students: \n");
    scanf("%d",&n);
    
    struct Student s[n];

    for(int i=0;i<n;i++){
        printf("Enter Roll, Marks, Name\n");
        scanf("%d %f",&s[i].Roll,&s[i].Marks);
        getchar();
        fgets(s[i].Name,50,stdin);
        s[i].Name[strcspn(s[i].Name, "\n")] = 0;
    }
    printf("\n%-5s %-20s %6s\n", "Roll", "Name", "Marks");
    for(int i=0;i<n;i++){
            Details(s[i]);
    }
    return 0;

} 