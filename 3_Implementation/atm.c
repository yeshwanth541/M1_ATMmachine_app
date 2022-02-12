 /**
 * @file atm.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
	system("color 3F");
	int pin=1234, enteredPin, id, password, count=0, option;
	int balance=10000, amount=1, continueTransaction=1;
	
	time_t now;
	time(&now);
	printf("						%s", ctime(&now));
	
	while(enteredPin != pin)
	{
	printf("\nEnter your pin: ");
	scanf("%d", &enteredPin);
	if(enteredPin != pin)
	{
		Beep(500, 500);
		printf("\nInvalid option!");
	}
	count++;
	if(count == 3 && enteredPin != pin)
	{
		exit(0);
	}
	}
	
	while(continueTransaction != 0)
	{
    printf(" Welcome to ATM Service \n");
	printf("\n						Available transactions");
	printf("\n1. Withdrawl");
	printf("\n2. Deposit");
	printf("\n3. Balance enquiry");
	printf("\n3. mobile banking");
	printf("\nPlease select the option:\n");
	scanf("%d", &option);
	
	switch(option)
	{
		case 1:
			{
				printf("\nEnter the amount: $");
				scanf("%d", &amount);
				if(amount % 100 != 0)
				{
					printf("\nAmount must be multiple of 100.");
					amount=1;
					break;
				}
				else if(balance < amount)
				{
					printf("\n Sorry insufficient balance.");
					amount=1;
					break;
				}
				else
				{
					balance = balance - amount;
					printf("\nWithdrawl amount: $%d", amount);
					printf("\nRemaining balance: $%d", balance);
					printf("\nThank you for banking with GradeMark!");
					amount=1;
					break;	
				}
			}
		break;
		case 2:
			{
				printf("\nEnter the amount: $");
				scanf("%d", &amount);
				if(amount % 100 != 0)
				{
					printf("\nAmount must be multiples of 100.");
					amount=1;
					break;
				}
				else
				{
					balance = balance + amount;
					printf("\nDeposited amount: $%d", amount);
					printf("\nAvailable balance: $%d", balance);
					printf("\nThank you for banking with GradeMark!");
					amount=1;
					break;	
				}
			}
			break;
			case 3:
				{
					printf("\nAvailable balance: $%d", balance);
					break;
				}
			break;
			case 4:
				{
					printf("enter credentials :");
					scanf("%d", &id);
					scanf("%d", &password);
					printf("Login success");
				}
			default:
				{
					Beep(500, 500);
					printf("\nInvalid option!");
					break;
				}
	}
	printf("\nDo you wish to have another transaction?");
	printf("\nPress 1[YES] 0[NO]");
	scanf("%d", &continueTransaction);
	if(continueTransaction != 1 && continueTransaction != 0)
	{
		printf("\nInvalid option!");
		printf("\nThank you for banking with GradeMark!");
		break;
	}
}
return 0;
}
