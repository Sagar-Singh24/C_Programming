#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Hard work gives you a beautiful life";
    char s2[]="Never give up";
    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s2+8));
    printf("%d\n",strcmp(s1,s2));
    printf("%s\n",s1+10);
    strcpy(s1+10,s2+8);
    strcat(s1,"s!");
    printf("%s\n",s1);
    return 0;
}