#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()
{
    int choice = 0;

    printf("\n////////////////////////////////////////\n");
    printf("1. open notepad ..\n");
    printf("2. Get Ip address..\n");
    printf("3. shut down the computer..\n");

    printf("*** enter the choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        system("notepad");
        break;
    case 2:
        system("ipconfig");
        system("pause");
        break;
    case 3:
        system("SHUTDOWN -S");
        system("pause");
        break;
    default:
        printf("\n invalid choice !!!");
    }
    return 0;
}
