//Q7. Mini Project – Student Database: Create a menu-driven program using structures where the user
//can:
//   (a) Add a new student record.
//   (b) Display all student records.
//   (c) Search for a student by roll number.
//   (d) Update marks of a student.
//   (e) Exit.
//Use functions for each task.

#include <stdio.h>

enum option {a=1,b,c,d,e};

struct student{
    char name[50];
    int roll;
    float marks;
};
void new(struct student p[1], int n){
    for(int i=(n-1);i<n;i++){
    printf("Enter student details(In order:Name,Roll,Marks):\n");
    scanf("%s %d %f",p[i].name,&p[i].roll,&p[i].marks);
    }
}
void Display(struct student x){
    printf("%-20s %-5d %8.2f\n",x.name,x.roll,x.marks);
}
void roll(struct student r, int roll_no){
    if(r.roll==roll_no){
        printf("%-20s %-5d %8.2f\n",r.name,r.roll,r.marks);
}
    }
void update(struct student u, int roll_no){
    float m;
    printf("Enter new marks of this student: \n");
    scanf("%f",&m);
    if(u.roll==roll_no){
        u.marks=m;
    }
}

int main(){

    enum option x;
    printf("-----MENU-----\n");
    printf("(1) Add a new student record.\n");
    printf("(2) Display all student records.\n");
    printf("(3) Search for a student by roll number.\n");
    printf("(4) Update marks of a student.\n");
    printf("(5) Exit.\n");

    struct student s[100];

    int n=1;
      do{
        printf("Enter choice:\n");
        scanf("%d",&x);
    switch(x){
        case a: {
            new(s, n);
            n++;
            break;
        }
        case b: {
             printf("%-20s %-5s %8s\n","Name","Roll","Marks");
        for(int i=0;i<(n-1);i++){
            Display(s[i]);
        }
        break;
        }
        case c: {
            int r;
            printf("Enter Roll of student: \n");
            scanf("%d",&r);
            for(int i=0;i<(n-1);i++){
            roll(s[i], r);
            }
            break;
        }
        case d: {
            int r;
            printf("Enter Roll of student(whoose marks is to be updated): \n");
            scanf("%d",&r);
            for(int i=0;i<n;i++){
                update(s[i], r);
            }
            break;
        }
        case e: break;
    }
}
while(x!=e);

return 0;
}