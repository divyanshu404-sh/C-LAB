//Q2. Array of Structures: Extend Q1 to find:
//• The student with the highest marks.
//• The average marks of the class.
//• The list of students scoring above average.

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
void maximum(struct Student s[], int m){
    float max=0.0,avg=0;
    for(int i=0;i<m;i++){
        if(s[i].Marks>max){
            max=s[i].Marks;
        }
        avg+=s[i].Marks;
    }
    for(int i=0;i<m;i++){
        if(s[i].Marks==max){
            printf("Max marks:\n");
            printf("%-5d %-20s %6.2f\n",s[i].Roll,s[i].Name,s[i].Marks);
        }
    }
    printf("Average Marks is %f\n",avg/m);
    printf("Students Who scored above AVERAGE: \n");
    for(int i=0;i<m;i++){
        if(s[i].Marks>(avg/m)){
            printf("%-5d %-20s %6.2f\n",s[i].Roll,s[i].Name,s[i].Marks);
        }
    }
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
    maximum(s,n);
    return 0;

} 