#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else if(age >= 10)
    {
        printf("you are between 10 and 18 and you can vote for kids");

    }
    else if(age >= 3)
    {
        printf("you are between 3 and 10 and you can vote for babies");

    }
    else
    {
        printf("you cannot vote!");
    }




    return 0;
}