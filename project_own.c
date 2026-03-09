#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    const char *valid_username = getenv("CAL_C_USER");
    const char *valid_password = getenv("CAL_C_PASS");

    if (valid_username == NULL || valid_password == NULL)
    {
        printf("Error: CAL_C_USER and CAL_C_PASS environment variables not set.\n");
        return 1;
    }

    char username[50];
    char password[50];
    int authenticated = 0;

    while (!authenticated)
    {
        printf("Enter username: ");
        scanf("%49s", username);
        printf("Enter password: ");
        scanf("%49s", password);

        if (strcmp(username, valid_username) == 0 && strcmp(password, valid_password) == 0)
        {
            printf("\n");
            authenticated = 1;
        }
        else
        {
            printf("Enter valid login info\n");
        }
    }

    printf("============= WELCOME TO Cal_C =============\n");

    {
        char op;
        double n1, n2;
        int choice = 1;

        do
        {
            printf("Enter an operation (+ - * /): ");
            scanf(" %c", &op);
            printf("Enter the first number: ");
            scanf("%lf", &n1);
            printf("Enter the second number: ");
            scanf("%lf", &n2);

            switch (op)
            {
                case '+':
                    printf(" %.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
                    break;

                case '-':
                    printf(" %.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
                    break;

                case '*':
                    printf(" %.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
                    break;

                case '/':
                    if (n2 == 0)
                        printf("Error: Division by zero!\n");
                    else
                        printf(" %.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
                    break;

                default:
                    printf("Invalid operator!\n");
                    break;
            }

            printf("\nDo you wish to continue?\n");
            printf("1. Yes\n2. No\n");
            scanf("%d", &choice);

            if (choice == 2)
                printf("Goodbye!\n");

        } while (choice == 1);
    }

    return 0;
}