//Program for fork concept in OS

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int p=fork();
    p=fork();
    if(p>0)
    {
        printf("This is the parent node with value %d\n",p);
        printf("The parent id is %d\n",getpid());
    }
    else if(p==0)
    {
        printf("This is the child node with value %d",p);
        printf("The child id is %d",getpid());
    }
    else
    {
        printf("Processes is terminated!");
        exit(0);
    }
 return 0; 
}