#include<stdio.h>
void main(void)
{
  char s1[25],s2[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  gets(s1);
  printf("\nEnter Second String:");
  gets(s2);
  while(s[i]!='\0')
  i++;
  while(s[j]!='\0')
  {
    s1[i]=s2[j];
    j++;
    i++;
  }
  s1[i]='\0';
  printf("\nConcatenated String is %s",s1);
}
