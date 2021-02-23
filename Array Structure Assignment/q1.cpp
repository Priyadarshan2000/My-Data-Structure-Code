// Display details of a student who have scored highest marks
//Priyadarshan Ghosh
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i,score,j=0;
    printf("Enter information of students:\n");
    for (i = 0; i < 3; ++i) {
        printf("\nFor roll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter  name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    score=s[0].marks;
    for(i=1;i<3;i++)
    {
       if(score<s[i].marks)
       {
           score=s[i].marks;
           j=i;
       }
    }
    printf("\nThe details of the students are: \n");
    printf("The name of the student is: %s\n",s[j].name);
    printf("The highest score is: %f\n",s[j].marks);
    printf("The roll of the student is: %d\n",s[j].roll);
    return 0;
}
