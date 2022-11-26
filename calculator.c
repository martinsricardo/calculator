/*
Numero: 2022116161
Nome: Ricardo Martins
Curso: EI
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2, result, decimal;
    int total, option;
    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);
    do
    {
        puts("\nEnter 1 for + : "); //Ask for an operation
        puts("Enter 2 for - : ");
        puts("Enter 3 for * : ");
        puts("Enter 4 for / : ");
        puts("Enter 0 to exit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 0:
            break;
        case 1:
            result = num1+num2;
            //floor - rounds downs the nearest integer
            //ceil - rounds up the nearest integer
            //if both give the same value its an integer else its a decimal
            decimal = (ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
            total+=1; //Increments 1 in the total
            break;
        case 2:
            result = num1-num2;
            decimal =(ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
            total+=1;
            break;
        case 3:
            result = num1*num2;
            decimal =(ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
            total+=1;
            break;
        case 4:
            result = num1/num2;
            decimal =(ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
            total+=1;
            break;
        default:
            printf("\nEnter valid option\n");
        }
    }
    while(option!=0);
    printf("\nNumber of operations: %d\n",total);
    return (0);
}
