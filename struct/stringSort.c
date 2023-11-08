#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll;
    double marks;
};

typedef struct Student STUDENT;

void initialize(STUDENT [], int);
void sort(STUDENT []);
void display(STUDENT [], int);

int main()
{
    struct Student a[5];
    for(int i = 0; i<5; i++) {
        initialize(a, i);
    }
    sort(a);
    for(int i = 0; i<5; i++) {
        display(a, i);
    }

    return 0;
}

void initialize(STUDENT a[], int i)
{

        printf("Enter name :");
        scanf("%s", a[i].name);
        printf("Enter roll :");
        scanf("%d", &a[i].roll);
        printf("Enter marks : ");
        scanf("%lf", &a[i].marks);
}

void sort(STUDENT a[]) {
    for(int i = 0; i<5; i++) {
        for(int j = 0; j<5-i-1; j++) {
            if(a[j].roll > a[j+1].roll){
                struct Student temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void display(STUDENT a[], int i)
{

        printf("Name is : %s\n", a[i].name);
        printf("Roll is : %d\n", a[i].roll);
        printf("Marks are : %lf\n", a[i].marks);

}