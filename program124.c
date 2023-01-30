#include<stdio.h>

int main()
{
   char ch1 = 'a';   //ch1---->a----->ASCII VALU STRED HONAR INTERNALLY--->97-->convert into binary--->1 byte
   char ch2 = 'A';                                                             //000100 ass binary
   char ch3 = '0';

  char ch4 = 'z';
  char ch5 = 'Z';
  char ch6 = '9';

  printf("character representation is %c and its ASCII valu is : %d\n",ch1,ch1);
  printf("character representation is %c and its ASCII valu is : %d\n",ch2,ch2);
  printf("character representation is %c and its ASCII valu is : %d\n",ch3,ch3);
  printf("character representation is %c and its ASCII valu is : %d\n",ch4,ch4);
  printf("character representation is %c and its ASCII valu is : %d\n",ch5,ch5);
  printf("character representation is %c and its ASCII valu is : %d\n",ch6,ch6);
  
  return 0;
}