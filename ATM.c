#include<stdio.h>
void main()
{
    int cab,rem;
    int choice,wa,da;
    printf("Enter current account balance");
    scanf("%d",&cab);
    printf("Enter your choice(1 for balance inquiry,2 for cash withdrawal,3 for cash deposit)");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
            printf("Your account balance is %d",cab);
            break;
            case 2:
            printf("Enter withdrawal amount");
            scanf("%d",&wa);
            if(wa<=cab)
            {
                rem=cab-wa;
                printf("Transaction successful and remaining balance is %d",rem);
        }
            else
                printf("Insufficient balance");
            break;
            case 3:
            printf("Enter amount to be deposited");
            scanf("%d",&da);
            printf("Deposit successful and updated balance is %d",cab+da);  
            break;
            default:
            printf("Invalid option");
}
}
