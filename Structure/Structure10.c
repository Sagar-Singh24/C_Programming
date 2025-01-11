#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    char name[50];
    int id;
    struct Date Joindate;
};
int main()
{
    struct Employee emp={"Sagar",1007,{15,10,2023}};
    printf("Employee Details\nName: %s\nID : %d\nJoin date : %d %d %d\n", emp.name,emp.id, emp.Joindate.day, emp.Joindate.month, emp.Joindate.year );
    return 0;
}
