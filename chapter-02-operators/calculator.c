/*
Two number calculator — read two numbers, print sum, difference, product, quotient, remainder 
*/

#include <stdio.h>
int fn_sum(int num1,int num2)
{
    int result = num1+num2;
    return result;
}
int fn_diff(int num1,int num2)
{
    int result = num1-num2;
    return result;
}
float fn_quo(int num1,int num2)
{
    float result;
    if(num2!=0)
    {
    result = num1/num2;
    }
    else if(num2==0)
    {
        printf("Please enter non Zero value\n");
    }
    return result;
}
float fn_reminder(int num1,int num2)
{
    float result ;
    if(num2!=0)
    {
    result = num1%num2;
    }
    else if(num2==0)
    {
        printf("Please enter non Zero value\n");
    }
    return result;
}
double fn_pro(int num1,int num2)
{
    double result = num1*num2;
    return result;
}


 int main()
 {
    int num1,num2,sum,diff,product;
    float quo,reminder;
    scanf("%d %d",&num1,&num2);
    sum = fn_sum(num1,num2);
    diff =fn_diff(num1,num2);
    quo = fn_quo(num1,num2);
    reminder = fn_reminder(num1,num2);
    product= fn_pro(num1,num2);
    printf("sum : %d \ndiff : %d \nquo: %0.2f \nreminder : %0.2f \nproduct %ld \n ",sum,diff,quo,reminder,product);
    
 }