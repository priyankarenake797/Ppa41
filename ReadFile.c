#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>....on linux var error ali tar he heder file add kara
int main()
{
   char Fname[20];
   int fd = 0;
    char Data[20];

   printf("Please enter file name that you want to open \n");
   scanf("%s",Fname);

   fd = open(Fname,O_RDWR); //read write O_RDONLY  O_WRONLY O_RDWR.... IN built MACRO Ahet
    
     if(fd == -1)
     {
       printf("Unable to open the file\n");
       return -1;
     }
     else
     {
       printf("File is successfully open with FD %d\n",fd);
     }
                         // kashat,kay,kiti lihayachays
      read(fd,Data,10);  // kuthun , kashat , kiti read karayachay....

      printf("Data from file is : %s\n",Data);

       close(fd);
   return 0;
}