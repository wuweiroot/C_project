#include <stdio.h>
#include <string.h>

struct Student
{
    int num;
    char name[200]; /* data */
    int age;
};
void structure_initi(struct Student *pst);
void structure_printf(struct Student st);
void structure_printf_p(struct Student *pst);

int main(void)
{
    struct Student st;
    structure_initi(&st);
    structure_printf(st);
    structure_printf_p(&st);
}
void structure_initi(struct Student *pst)
{
     (*pst).num = 1;
     pst->name[200] = "zhanglulong"; /* data */
     strcpy(pst->name, "zhaosuxnff");
     pst->age = 18;
}

//这种方式耗内存，耗时间
void structure_printf(struct Student st)
{
    printf("%d %s %d\n", st.num, st.name, st.age);
}

void structure_printf_p(struct Student *pst)
{
    printf("%d %s %d\n", pst->num, pst->name, pst->age);
}