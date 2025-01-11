#include <stdio.h>
struct Person
{
    char name[50];
    int age;
    char address[100];
};
int main()
{

	struct Person individual = {"Sagar",20,"563 Elm street"};
	printf("Name: %s\nAge: %d\nAddress: %s\n", individual.name,individual.age, individual.address );
	return 0;
}
