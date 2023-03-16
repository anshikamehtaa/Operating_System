#include<stdio.h>
int main()
{
 int at[10],bt[10],ct[10],p[10],tat[10],wt[10],n,temp;
 float avgtat=0,avgwt=0;
 printf("How may processes do you want to enter\n");
 scanf("%d",&n);
 printf("Enter the order of processes\n");
 for(int i=0;i<n;i++)
 {
    scanf("%d",&p[i]);
 }
 printf("Enter the arrival times of processes %d one by one\n",n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&at[i]);
 }
 printf("Enter the burst times of processes %d one by one\n",n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&bt[i]);
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<(n-i);j++)
    {
        if(at[j]>at[j+1])
        {
            temp=p[j+1];
            p[j+1]=p[j];
            p[j]=temp;
            temp=at[j+1];
            at[j+1]=at[j];
            at[j]=temp;
            temp=p[j+1];
            p[j+1]=p[j];
            p[j]=temp;
        }
    }
 }

 //gantt chart for completion time is created
ct[0]=at[0]+bt[0];
for(int j=1;j<n;j++)
{
    if(ct[j-1]<at[j])
    {
    temp=at[j]-ct[j-1];
    }
    ct[j]=ct[j-1]+bt[j]+temp;
}

for(int i=0;i<n;i++)
    {
    tat[i]=ct[i]-at[i];
    wt[i]=tat[i]-bt[i];
    avgtat+=tat[i];
    avgwt+=wt[i];
    }
    avgtat=avgtat/n;
    avgwt=avgwt/n;
    for(int i=0;i<n;i++)
    {
      printf("\nP%d\t %d\t %d\t %d \t %d \t %d",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("\naverage turnaround time is %f",avgtat);

    printf("\naverage wating timme is %f",avgwt);
    return 0;
}
