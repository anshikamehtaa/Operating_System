//Zombie
//Child process will finish while the parent is executing.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int p=fork();
    if(p>0)
    {
        sleep(20);
        printf("Parent Process!\n");
    }
    else if(p==0)
    {
        
        exit(0);
    }
    
  return 0; 
    
}