#include<stdio.h>
#include<stdlib.h>

struct Comp_insurance{
	char comp_name[20];   //���q�W�� 
	char employee_name[20];//���q���u 
	int comp_insured_amount;//�O�I���B 
}; 
struct Personal_insurance{
	char name[20]; //�ӤH�m�W 
	char cellphone[11];//�ӤH��� 
	int per_insured_amount;//�O�I���B 
};
union Mydata{
	struct Comp_insurance comp_insurance;//�@�ΰO���� 
	struct Personal_insurance personal_insurance; 
}mydata;

void show (int, union Mydata);
int main(void){
	
	int option;
	printf("�п�J�Ҧ�:"); 
	scanf("%d", &option);
	
	switch(option){
	   case 1:{
			printf("�п�J���q�W��:");
			scanf("%s",mydata.comp_insurance.comp_name);
			printf("�п�J���u�W��:");
			scanf("%s", mydata.comp_insurance.employee_name);
			printf("�п�J��O���B:");
			scanf("%d",&mydata.comp_insurance.comp_insured_amount);
			break;
		}
	   case 2:{
			printf("�п�J�ӤH�m�W:");
			scanf("%s",mydata.personal_insurance.name);
			printf("�п�J�ӤH�q��:");
			scanf("%s", mydata.personal_insurance.cellphone);
			printf("�п�J��O���B:");
			scanf("%d", &mydata.personal_insurance.per_insured_amount);
			break;
		}
					
	}
	
	show(option,mydata);
	
}
void show(int option,union Mydata mydata){
	switch(option){
		case 1:{
			printf("\n\n");
			printf("���q�W��%s\n", mydata.comp_insurance.comp_name);
			printf("���u�m�W:%s\n", mydata.comp_insurance.employee_name);
			printf("��O���B:%d\n", mydata.comp_insurance.comp_insured_amount);
			break;
		}
		case 2:{
			printf("\n\n");
			printf("�ӤH�m�W:%s\n", mydata.personal_insurance.name);
			printf("�ӤH�q��:%s\n", mydata.personal_insurance.cellphone);
			printf("��O���B:%d\n", mydata.personal_insurance.per_insured_amount);
			break;
		}
	}
	
}
