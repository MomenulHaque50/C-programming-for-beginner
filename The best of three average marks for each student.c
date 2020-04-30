#include<stdio.h>
  struct student{
  int roll;
  char name[50];
  float ct1;
  float ct2;
  float ct3;
  float ct4;
  };
main(){

int i,j,n;
float t1,t2,t,sum;
printf("                      BAUET 7th Batch Class test Result list:\n\n");
printf("Enter the student number:");
scanf("%d",&n);
struct student s[n];
float avg[n];
printf("Enter all student roll,name,1st ct,2nd ct,3rd ct & 4th ct in sequential way:\n ");
for(i=0;i<n;i++)
{
    scanf("%d%s%f%f%f%f",&s[i].roll,s[i].name,&s[i].ct1,&s[i].ct2,&s[i].ct3,&s[i].ct4);
}

for(i=0;i<n;i++)
{sum=0;
sum=s[i].ct1+s[i].ct2+s[i].ct3+s[i].ct4;
t1=(s[i].ct1<s[i].ct2?s[i].ct1:s[i].ct2);
 t2=(s[i].ct3<s[i].ct4?s[i].ct3:s[i].ct4);
 t=(t1<t2?t1:t2);
 sum=sum-t;
 avg[i]=sum/3;
}
printf("\n    Class Test Result list:\n");
printf("-------------------------------------------------------------------\n");
printf("|SL No. | Roll | Name | Ct-1| Ct-2 | Ct-3 | Ct-4 | Best 3 average |\n");
printf("--------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
    printf(" %d  %d  %s  %f  %f  %f  %f  %f",i+1,s[i].roll,s[i].name,s[i].ct1,s[i].ct2,s[i].ct3,s[i].ct4,avg[i]);
    printf("\n");
    printf("------------------------------------------------------------------------\n");
}
}

