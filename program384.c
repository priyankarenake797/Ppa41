#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int OpenFile(char Name[])
{
    int fd = 0;
    fd =  open(Name,O_RDWR);
   return fd;
   
}

int main()
{
   char Fname[20];
   int fd = 0;    // file descripter

   printf(" enter file name that you want to open \n");
   scanf("%s",Fname);

   fd = OpenFile(Fname);
    
     if(fd == -1)
     {
       printf("Unable to open the file\n");
     }
     else
     {
       printf("File is successfully oppen with FD %d\n",fd);
     }
   return 0;
}