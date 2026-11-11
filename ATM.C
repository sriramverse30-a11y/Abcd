#include<stdio.h>
int main()
{
int pin=1234;
int enteredPin;
int choice;
float balance=5000;
float amount;
printf("====WELCOME TO ATM=====\n");
printf("Enter your PIN:");
scanf("%d",enteredPin);
if(enteredPin !=pin)
{
printf("Invalid PIN!\n");
return 0;
}
printf("\nLogin successful!\n");
do
{
 printf("\n=====ATM MENU====\n");
 printf("1. check balance\n");
 printf("2. deposit money\n");
 printf("3. withdraw money\n");
 printf("4. exit\n");

 printf("enter your choice:");
 scanf("%d",&choice);

 switch (choice)
 {
    case 1:
       printf("Your balance:RS. %.2f\n",balance);
       break;

    case 2:

    printf("Enter deposit amount:");
    scanf("%f",&amount);

    if (amount>0)
    {
	balance = balance+amount;
	printf("Money deposited successfully!\n");
	printf("new balance: RS.%.2f\n",balance);
     }
     else
     {
	 printf("Invalid Amount!");
      }
      break;

     case 3:
	  printf("Enter withdrawal amount:");
	  scanf("%f",&amount);

	  if (amount <= 0 )
	  {
	     printf("Invalid Amount!\n");
	  }
	  else if (amount <=balance)
	  {
	      balance = balance - amount;
	      printf("Plaese collect your cash.\n");
	      printf("Remaining balance: Rs. %.2f\n",balance);
	   }
	   else
	   {
	       printf("Insufficient balance!\n");
	   }
	    break;
     case 4:
	   printf("Thank You for Using ATM!\n");
	   break;
     default:
	   printf("Invalid Choice!\n");
     }
    } while(choice!=4);
    return 0;
 }

