#include<stdio.h>
int stringComp(char[],char[]);
int main()
{
char str1[100],str2[100];
int comp;
printf("Enter first string: ");
scanf("%s",str1);
printf("Enter second string: ");
scanf("%s",str2);
comp = stringComp(str1,str2);
if(comp == 1)
printf("Both strings are equal.");
else
printf("Both strings are not equal");
return 0;
}
int stringComp(char str1[],char str2[])
{
int i=0,flag=0;
while(str1[i]!='\0' && str2[i]!='\0')
{
if(str1[i]!=str2[i])
 {
     flag=1;
     break;
   }
      i++;
    }
if (flag==0 && str1[i]=='\0' && str2[i]=='\0')
return 1;
else
return 0;
}
