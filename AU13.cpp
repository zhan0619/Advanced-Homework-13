#include<stdio.h>
#include<stdlib.h>

struct Comp_insurance{
	char comp_name[20];   //公司名稱 
	char employee_name[20];//公司員工 
	int comp_insured_amount;//保險金額 
}; 
struct Personal_insurance{
	char name[20]; //個人姓名 
	char cellphone[11];//個人手機 
	int per_insured_amount;//保險金額 
};
union Mydata{
	struct Comp_insurance comp_insurance;//共用記憶體 
	struct Personal_insurance personal_insurance; 
}mydata;

void show (int, union Mydata);
int main(void){
	
	int option;
	printf("請輸入模式:"); 
	scanf("%d", &option);
	
	switch(option){
	   case 1:{
			printf("請輸入公司名稱:");
			scanf("%s",mydata.comp_insurance.comp_name);
			printf("請輸入員工名稱:");
			scanf("%s", mydata.comp_insurance.employee_name);
			printf("請輸入投保金額:");
			scanf("%d",&mydata.comp_insurance.comp_insured_amount);
			break;
		}
	   case 2:{
			printf("請輸入個人姓名:");
			scanf("%s",mydata.personal_insurance.name);
			printf("請輸入個人電話:");
			scanf("%s", mydata.personal_insurance.cellphone);
			printf("請輸入投保金額:");
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
			printf("公司名稱%s\n", mydata.comp_insurance.comp_name);
			printf("員工姓名:%s\n", mydata.comp_insurance.employee_name);
			printf("投保金額:%d\n", mydata.comp_insurance.comp_insured_amount);
			break;
		}
		case 2:{
			printf("\n\n");
			printf("個人姓名:%s\n", mydata.personal_insurance.name);
			printf("個人電話:%s\n", mydata.personal_insurance.cellphone);
			printf("投保金額:%d\n", mydata.personal_insurance.per_insured_amount);
			break;
		}
	}
	
}
