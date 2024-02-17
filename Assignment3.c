/*#include<stdio.h>
int main()
{
	struct leader
	{
	char *lead;
	int born;
	};
	struct leader l1 = {"AbdulKalam", 1931};
	struct leader l2 = l1;
	printf("%s %d", l2.lead, l1.born);
}
#include <stdio.h>
    struct student {
    char Name[50];
    int age;
   float marks;
};
int main(){
struct student s1,s2;
printf("Enter details of s1:\n");
scanf("%s %d %f", s1.Name, &s1.age, &s1.marks);
printf("Name=%s Age=%d Marks=%f", s1.Name, s1.age, s1.marks);
}
#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int *ptr1=a;
int *ptr2=a+4;
printf("A=%d\n",*(ptr1+1));
printf("B=%d",(ptr2-ptr1));
return 0;
}*/
#include<stdio.h>
union student{
int age;
char name[20];
};
int main(){
union student s1;
printf("Enter age of s1:\n");
scanf("%d",&s1.age);
printf("enter name of s1:\n");
scanf("%s",s1.name);
printf("Age=%d Name=%s",&s1.age,s1.name);
}




