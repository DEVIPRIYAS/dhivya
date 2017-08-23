#include<stdio.h>
#define square int
square isPowerOfTwo(int num)
{
  if (num == 0)
    return 0;
  while (num != 1)
  {
    if (num%2 != 0)
      return 0;
    num= num/2;
  }
  return 1;
}
 
