#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<string.h>
struct details{
	char name[20];
	int age;
	char address[50];
	char no[15];
};
int main(){
	int n = 0, i;
	char op;
	struct details d[20];
	do{
		system("cls");
		printf("Enter the details:\n\n");
		printf("Name:");
		gets(d[n].name);
		printf("Age:");
		scanf("%d",&d[n].age);
		getchar();
		printf("Address:");
		gets(d[n].address);
		printf("Contact number:");
		gets(d[n].no);
		n++;
		printf("Add another? (Y/N)\n");
		scanf("%c",&op);
		
		getchar();
	}while(op == 'Y' || op == 'y' && n < 20);
	system("cls");
	for(i=0;i<n;i++){
		printf("Details of person %d\n",i+1);
		printf("Name: %s\n",d[i].name);
		printf("Age: %d\n",d[i].age);
		printf("Address: %s\n\n",d[i].no);
	}
}