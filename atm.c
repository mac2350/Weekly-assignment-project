#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter the amount they wish to withdraw and prints them the balance
            and allows him to withdraw again till balance is zero.
*/
int main()
{
    int withdraw; // withdraw
    int account=10000; //original balance
    int balance; //balance after withdrawal

   // checks if user can withdraw 
    while (account>0)
    {
        
        printf("enter money withdrawl: ");
        scanf("%d",&withdraw); 
        balance=account-withdraw; // subtracts withrawn cash from amount to give us the balance
        printf("Your balance is%d\n",balance);
        account=balance; // makes the new balance into the account
        
    }
    printf("unable to withdraw");
    return 0;
}
    