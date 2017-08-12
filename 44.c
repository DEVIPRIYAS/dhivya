#include<stdio.h>
int getnumber();    

int main()
{
int input = 0;
input = getnum();
while (!((input <= 9) && (input >= 1)))
{
printf("[ERROR] The number you entered is out of range");
input = getnum();
    }
    
    printf("The number you entered is %d", input);
    return 0;
}  
int getnum() 
{    
    int num;
    printf(" Enter a number between 1 to 9 ");
    scanf("%d", &num);
    return (num);
}
