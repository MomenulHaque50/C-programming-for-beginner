#include<stdio.h>
  struct student{
  int roll;
  char name[50];
  float cgpa;
  char address[100];
  char temp[150];
  };
main(){

int i,j,n,q=0;
float p=0;
char r[100];
printf("                      BAUET 7th Batch CGpa list:\n\n");
printf("Enter the student number:");
scanf("%d",&n);
struct student s[n];
printf("Enter all student roll,name,CGpa & address in sequential way:\n ");
for(i=0;i<n;i++)
{
    scanf("%d%s%f%s",&s[i].roll,s[i].name,&s[i].cgpa,s[i].address);
}
for(i=0;i<n-i;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(s[j].cgpa<s[j+1].cgpa)
        {
            p=s[j].cgpa;
            s[j].cgpa=s[j+1].cgpa;
            s[j+1].cgpa=p;
             q=s[j].roll;
            s[j].roll=s[j+1].roll;
            s[j+1].roll=q;
            strcpy(s[j].temp,s[j].name);
            strcpy(s[j].name,s[j+1].name);
            strcpy(s[j+1].name,s[j].temp);
            strcpy(s[j].temp,s[j].address);
            strcpy(s[j].address,s[j+1].address);
             strcpy(s[j+1].address,s[j].temp);

        }
    }
}
printf("\n            Result list:\n");
printf("---------------------------------------------\n");
printf("|SL No. | Roll | Name | CGPA |  Address |\n");
printf("---------------------------------------------\n");
for(i=0;i<n;i++)
{
    printf("| %d   |  %d  %s  %f  %s |",i+1,s[i].roll,s[i].name,s[i].cgpa,s[i].address);
    printf("\n");
    printf("-------------------------------------------\n");
}
}
