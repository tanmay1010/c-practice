/*
Menu Calculator using switch.
*/

#include <stdio.h>

int main()
{
  int action;
  double num1,num2;
  printf("Enter two number:");
  scanf("%lf %lf",&num1, &num2);
  printf("Enter 1: Addition\nEnter 2: Substraction\nEnter 3: multiplication\nEnter 4: Division \n");
  scanf("%d",&action);
  double result =0;
  
  switch(action)
  {
      case 1: 
      {
      result = num1+num2;
      break;
      }
      case 2: 
      {
      result = num1-num2;
      break;
      }
      case 3: 
      {
      result = num1*num2;
      break;
      }
      case 4: 
      {
        
      if(num2 == 0)
      {
      printf("Please enter non zero value \n");  
      break;
      } 
      else{
      result = num1/num2;
      break;
      }
      }
      default:
      printf("Invalid choice\n");
      break;
    }
 printf("Result: %.2lf\n", result);  // prints 3.50
   
}