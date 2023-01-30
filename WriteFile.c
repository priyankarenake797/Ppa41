#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>....on linux var error ali tar he heder file add kara
int main()
{
   char Fname[20];
   int fd = 0;

   printf("Please enter file name that you want to open \n");
   scanf("%s",Fname);

   fd = open(Fname,O_RDWR); //read wright
    
     if(fd == -1)
     {
       printf("Unable to open the file\n");
       return -1;
     }
     else
     {
       printf("File is successfully open with FD %d\n",fd);
     }

      write(fd,"Marvellous",10);

       close(fd);
   return 0;
}