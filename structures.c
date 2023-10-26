#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    char student_id [11];
    unsigned mark;
};

int main(){
    struct student new_student;
    strcpy(new_student.name, "jordan"); //"string copy" is used to place one string into a place
    strcpy(new_student.student_id, "28932123");
    new_student.mark = 35; 
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);
    return 0;
}