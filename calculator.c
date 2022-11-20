#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,i,total;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    do
    {
        printf("\nenter 1 for + : ");
        printf("\nenter 2 for - : ");
        printf("\nenter 3 for * : ");
        printf("\nenter 4 for / : \n");

        scanf("%d",&i);

        switch(i)
        {
        case 1:
            printf("\nThe ans. is : %d\n",num1+num2);
            total+=1;
            break;
        case 2:
            printf("\nThe ans. is :%d\n",num1-num2);
            total+=1;
            break;
        case 3:
            printf("\nThe ans. is :%d\n",num1*num2);
            total+=1;
            break;
        case 4:
            printf("\nThe ans. is :%d\n",num1/num2);
            total+=1;
            break;
        default:
            printf("\nenter valid option\n");
        }
    }
    while(i!=0);
    printf("Number of operations: %d\n",total);
}
