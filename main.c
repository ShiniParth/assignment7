#include<stdio.h>
typedef struct
{
		int rollno;	
		char name[20];
		float phy;
		float chem;
		float math;
	}student;

int main(){

student s[3];
for(int i=0;i<=2;i++){	
	printf("Enter Roll no %d:\n",i+1);
	scanf("%d",&s[i].rollno);
	printf("Enter Name%d:\n",i+1);
	scanf("%s",&s[i].name);
	printf("Enter physics%d:\n",i+1);
	scanf("%f",&s[i].phy);
	printf("Enter chemistry%d:\n",i+1);
	scanf("%f",&s[i].chem);
	printf("Enter Maths%d:\n",i+1);
	scanf("%f",&s[i].math);
	
}

for(int i=0;i<=2;i++){
	printf("Roll no:%d\n",s[i].rollno);
	printf("Name:%s\n",s[i].name);
	printf("Physics Marks:%f\n",s[i].phy);
	printf("chemistry Marks:%f\n",s[i].chem);
	printf("Math Marks:%f\n",s[i].math);
}
return 0;
}
