//Display details of all students who have scored marks < 40.
//Priyadarshan Ghosh
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i,j=0;
    printf("Enter information of students:\n");
    for (i = 0; i < 3; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter  name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    for(i=0;i<3;++i)
    {
       if(s[i].marks<40)
       {
           printf("The details of the students are: \n");
           printf("The name of the student is: %s\n",s[i].name);
           printf("The  score is: %f\n",s[i].marks);
           printf("The roll of the student is: %d\n",s[i].roll);
       }
    }
    return 0;
}


