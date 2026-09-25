#include<stdio.h>
int main(){
	
	int a,b,choice,res;
	printf("\n=====OPERATION AND EXPERSSION====");
	printf("\nEnter the  first number:");
	scanf("%d",&a);
	
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	printf("\n------MENU-----");
		printf("\n1.Addition");
		printf("\n2.Subration");
			printf("\n3.Multiplication");	
		printf("\n4.Division");
			printf("\n5.modulus");
				printf("\nEnter your choice:");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1:
					res=a+b;
					printf("Result = %d",res);
					break;
					
					case 2:
					res=a-b;
					printf("Result = %d",res);
					break;
					
					case 3:
					res=a*b;
					printf("Result = %d",res);
					break;
					
					
					case 4:
					if(b!=0){
					
					res=a/b;
								
					printf("Result = %d",res);	
					break;
				
					}else
					{
						printf("division by zero is not possible");}
					
					
						case 5:
					if(b!=0){
					
					res=a/b;
								
					printf("Result = %d",res);	
					break;
					
				}	else
					{
						printf("modulus by zero is not possible");
					}
					break;
					default:
						printf("Invalid choice");
						
						return 0;
					
				}
}