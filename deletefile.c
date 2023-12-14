#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   
    unlink("Marvellous.txt");

   

    printf("File deleted Successfully");
    
    
    
    return 0;
}