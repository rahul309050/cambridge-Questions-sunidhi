// Implement structures to read, write, and compute average-marks and the students scoring above and below the average marks for a class of N students.	
#include<stdio.h>
struct student 
{
char usn[10]; 
char name[10];
float m1,m2,m3;
float avg,total;
}; 
void main()
{
struct student s[20]; 
int n,i; 
float tavg,sum=0.0;
printf("Enter the number of student="); 
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
printf("Enter the detail of %d students\n",i+1); 
printf("\n Enter USN=");
scanf("%s",s[i].usn);
printf("\n Enter Name="); 
scanf("%s",s[i].name);
printf("Enter the three subject score\n"); 
scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3); 
s[i].total=s[i].m1+s[i].m2+s[i].m3; 
s[i].avg=s[i].total/3;
} 
for(i=0;i<n;i++)
{ 
 if(s[i].avg>=35) 
 printf("\n %s has scored above the average marks",s[i].name); 
 else 
 printf("\n %s has scored below the average marks",s[i].name); 
}
}