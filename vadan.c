#include <stdio.h>

union student
{
    float sal;
    int no;
} s;

// union std
// {
//     char name[10];
//     int no;
// } t;

int main()
{
    printf("enter your sal: ");
    scanf("%f", &s.sal);
    printf("enter no: ");
    scanf("%d", &s.no);
    printf("sal: %f\n", s.sal);
    printf("no: %d\n", s.no);
}
