#include <stdio.h>

int main()
{
    int age ,marks;

    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
        case 3:
        printf("the age is 3\n");
       // break;

       switch (marks)
       {
            case 45:
            printf("your marks are not 45\n");
            break;

            

            
            default:
            printf("your marks is not 45\n");
       }
            break;
            case 13:
            printf("the age is 13\n");
            break;

    }



    return 0;
}
