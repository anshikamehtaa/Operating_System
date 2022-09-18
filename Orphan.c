//Orphan
//Child process will continue wrking even after the parent process has finished executing.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int p=fork();
    if(p>0)
    {
        
        printf("Parent Process!\n");
    }
    else if(p==0)
    {
        sleep(20);
        printf("Child Process!");
    }
    
    
    
}