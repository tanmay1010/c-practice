//Takes a string like "HELLO" and prints its reverse "OLLEH" — but the original string should NOT change.

#include <stdio.h>

int main()
{
char str[]="HELLO";
int i =0;
int length=0;
int left =0;
char reversed[50];
while(str[i]!='\0')
{
   i++;
}

length = i;
int right = length -1;
char temp=0;

for (int j = 0; j < length; j++) {
    reversed[j] = str[length - 1 - j];
}
reversed[length] = '\0';
printf("%s \n", str);
printf("%s", reversed);
  
}