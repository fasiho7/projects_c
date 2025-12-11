#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    int choice;
    do{
    printf("Welcome to the simple Calculator");
    printf("\nChose your choice for the following options:");
    printf("\n1. Addition");
     printf("\n2. subtration");
      printf("\n3. mutiplication");
       printf("\n4. division");
        printf("\n5. Modulus");
         printf("\n6. power");
          printf("\n7. Exit");
    printf("Enter Your choice");
    scanf("%d",choice);
  
    printf("\nEnter your first number");
    scanf("%d",&x);
    printf("Enter  your second number");
    scanf("%d",&y);
    }while(choice!=7);

    switch(choice){
        case 1:
        int add;
        add = x+y;
        printf("the addition  of the two number is%d ",add);
        break;
        case 2:
        int sub;
        sub = x-y;
        printf("The subtration of the two number is%d",sub);
        break;
        case 3:
        int mul;
        mul = x*y;
        printf("The multiplucation of two numbner is%d",mul);
        break;
        case 4:
        int div;
        div = x/y;
        printf("The division of two numbers is %d",div);
        break;
        case 5:
       int mol;
       mol = x%y;
       printf("THe Modulus if the two numbers is%d",mol);
       break;
       case 6:
       int res;
       res = pow(x,y);
       printf("The power x of y is %d",res);
       break;
       case 7;
       return 0;
       break;
    }
    return 0;

}