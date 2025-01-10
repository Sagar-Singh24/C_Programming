#include <stdio.h>
struct person
{
	char name[50];
	int age;
	char address[100];
};
int main()
{
	struct person individual = {"Sgar",20,"KV2"};
	printf("Name: %s\nAge: %d\nAddress: %s\n", individual.name,individual.age, individual.address );
	return 0;
}
