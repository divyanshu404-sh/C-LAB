//Nested Structure – Address in Student Record: Create two structures: Address with members
//city, state, and pincode, and Student with members name, roll, and addr (of type Address). Accept
//and display details for 3 students.

#include <stdio.h>
#include <string.h>

struct Address{
    char city[20];
    char state[20];
    int pin;
};
struct Student{
    int roll;
    char name[30];
    struct Address addr;
};

void Details(struct Student st){
    printf("%-5d %-20s %-15s %-10s %-10d\n",st.roll,st.name,st.addr.city,st.addr.state,st.addr.pin);
}
int main(){

    struct Student t[3];

    for(int i=0;i<3;i++){
        printf("Enter Roll,Name,Address(city state pin)\n");
        scanf("%d",&t[i].roll);
        getchar();
        fgets(t[i].name,50,stdin);
        t[i].name[strcspn(t[i].name, "\n")] = 0;
        fgets(t[i].addr.city,50,stdin);
        t[i].addr.city[strcspn(t[i].addr.city, "\n")] = 0;
        fgets(t[i].addr.state,50,stdin);
        t[i].addr.state[strcspn(t[i].addr.state, "\n")] = 0;
        scanf("%d",&t[i].addr.pin);
    }
    printf("\n%-5s %-20s %-15s %-10s %-10s\n","Roll","Name","City","State","PIN");
    
    for(int i=0;i<3;i++){
        Details(t[i]);
    }

    return 0;

}
