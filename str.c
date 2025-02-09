#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[60];
    int i;


    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
        
    }

    
    printf("\nStudents who scored 75 marks or more:\n");
    for (i = 0; i < 3; i++) {
        if (students[i].marks >= 75) {
            printf("Name: %s, Roll No: %d, Marks: %d\n", students[i].name, students[i].roll_no, students[i].marks);
        }
    }

    return 0;
}
