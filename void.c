#include<stdio.h>
 

int main()
{
     char ch = 'A';
     int i= 11;
     float f=9.09;
     double d = 89.9078;


     char *cp = &ch;
     int *ip = &i;
     float *fp =&f;
     double *dp = &d;


   
    void *vp=&ch;            // which holds any type of data type, it is generic pointer
                  
    printf("value of ch : %c\n",ch);
    printf("addres of ch : %p\n",&ch);
    printf("value inside cp : %p\n",ch);
    printf("value of ch : %c\n",cp);
    printf("data refer by cp : %c\n",*cp);          //A
    printf("size of ch : %d\n",sizeof(ch));
    printf("size of ch : %d\n",sizeof(cp));


    printf("data refer by vp :%c\n",*(char *)vp);
    vp=&i;
    printf("data refer by vp :%d\n",*(int *)vp);

      vp=&f;
    printf("data refer by vp :%f\n",*(float *)vp);
    
      vp=&d;
   printf("data refer by vp :%lf\n",*(double*)vp);
return 0;

}