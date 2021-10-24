#include<stdio.h>
int main()
{
    int n,sum=0,bt[10]={0},tat[10]={0},wt[10]={0},at[10]={0},ct[10]={0};
    float totalTAT=0,totalWT=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    for(int j=0;j<n;j++){
        sum+=bt[j];
        ct[j]+=sum;
    }
    for(int k=0;k<n;k++){
        tat[k]=ct[k]-at[k];
        totalTAT+=tat[k];
    }
    for(int k=0;k<n;k++){
        wt[k]=tat[k]-bt[k];
        totalWT+=wt[k];
    }
    printf("%f\n",totalWT/n);
    printf("%f\n",totalTAT/n);
    return 0;
}
