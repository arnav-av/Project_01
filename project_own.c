#include<stdio.h>
#include<string.h>


int main()
{
 char username[50]= "obi";
 char password[50]= "1234";
 int i= 10;


 while (i != 0)
 {

 
	printf("Enter username: ");
	scanf("%s", username);
	printf("Enter password: ");
	
	scanf("%s", password);

	if (strcmp(username, "obi")==0 && strcmp(password, "1234")==0)
	{
		printf("\n");
		i = 0;
	}
	
	else printf("Enter valid login info\n");
	
    
 }
   
 

 printf("============= WELCOME TO Cal_C =============\n");

	{
		char op;
		double n1, n2;
		int i = 1;
		do
		{
			printf("Enter a operation (+ - * /): ");
			scanf("%s", &op);
			printf("Enter the first integer: ");
			scanf("%lf", &n1);
			printf("Enter the second integer: ");
			scanf("%lf", &n2);


			switch (op)
			{
			 case '+':
				printf(" %.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
				break;

			 case '-':
				printf(" %.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
				break;

			 case '*':
				printf(" %.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
				break;

			 case '/':
				printf(" %.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
				break;

		
			 default:
				printf("Entered operator is invalid!!");
				break;

			
			}
			printf("\nDo you wish to continue?\n");
			printf("1. Yes\n 2. No\n");
			scanf("%d", &i);
			if (i == 2)
			{
				printf("GoodBye");
			}
		}
		while(i == 1);
	}







 return 0;
}

