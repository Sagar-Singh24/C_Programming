#include<stdio.h>
int main(){
    int sl;
    printf("Enter Sugar Level: ");
    scanf("%d",&sl);
    if(sl>0&&sl<50)
    printf("Patient is not Daibatic");
    else if(sl>50&&sl<120)
    printf("Patient is mild stage");
     else if(sl>120&&sl<240)
    printf("Patient is Daibatic");
     else if (sl>240)
    printf("Patient is high Daibatic");
    return 0;
}