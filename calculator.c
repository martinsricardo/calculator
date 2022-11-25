#include<stdio.h>
int main()
{
    float num1,num2, result, decimal;
    int total, i;

    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);

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
                result = num1+num2;
                decimal = (ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
                total+=1;
                break;
            case 2:
                result = num1-num2;
                decimal = (ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
                total+=1;
                break;
            case 3:
                result = num1*num2;
                decimal = (ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
                total+=1;
                break;
            case 4:
                result = num1/num2;
                decimal = (ceil(result) == floor(result)) ? printf("\nAnswer : %.f\n",result) : printf("\nAnswer : %.4f\n",result) ;
                total+=1;
                break;
            default:
                printf("\nEnter valid option\n");
            }
        }
        while(i!=0);
        printf("Number of operations: %d\n",total);

        return (0);

}
