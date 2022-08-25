#include <stdio.h>

struct Student
{
    int num;
    int age;
};
struct Student* CreateStudent(void);
void ShowStudent(struct Student *);

int main(void)
{
    struct Student *ps;
    ps = CreateStudent();
    ShowStudent(ps);

    return 0;
}
struct Student* CreateStudent(void)
{
    struct Student *ps;
    ps = (struct Student *)malloc(sizeof(struct Student));
    ps->num = 12;
    ps->age = 23;
    return ps;
}
void ShowStudent (struct Student* ps)
{
    printf("%d, %d", ps->num, ps->age);
}