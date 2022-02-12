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