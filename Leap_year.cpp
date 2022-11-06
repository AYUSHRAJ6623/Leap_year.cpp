#include<stdio.h>
int main(){
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
	//year = 2020
//	if(year%4==0){
//		printf("%d is leap year",year);
//	}
//	else{
//		printf("%d is not leap year",year);
//	}
	year%4==0?printf("%d is leap year",year):printf("%d is not leap year",year);
	return(0);
}
