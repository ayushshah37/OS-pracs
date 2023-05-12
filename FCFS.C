#include <stdio.h>

int main()
{   int at[100],bt[100],ct[100],tat[100],total_bt=0,wt[100],temp1,temp2,temp,process[100],total_tat=0,total_wt=0,n,i,j;
    float avg_wt,avg_tat;
    printf("enter the no. of processes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf(" enter AT and BT for the processes:");
        scanf("%d %d",&at[i],&bt[i]);
         process[i]=i+1;
        total_bt=total_bt+bt[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(at[j]>at[j+1]){
                at[j]=temp;
                temp=at[j+1];
                at[j]=at[j+1];
                
                bt[j]=temp1;
                temp1=bt[j+1];
                bt[j]=bt[j+1];
                
                process[j]=temp2;
                temp2=process[j+1];
                process[j]=process[j+1];
            }
        }
    }
    
    int prev_bt=at[0];
    ct[0]=at[0]+bt[0];
    int temp_ct=ct[0];
    for(int i=1;i<n;i++){
        ct[i]= bt[i]+ct[i-1];
        temp_ct+=ct[i];
    }
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        total_tat+=tat[i];
        total_wt+=wt[i];
    }
    printf("PROCESS\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",process[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    avg_tat=(float)total_tat/n;
    avg_wt=(float)total_wt/n;
    
    printf("avg TAT=%f \n ",avg_tat);
    printf("avg WT=%f \n",avg_wt);
    
    
    for(i=0,j=0;i<ct[n-1];){
        if(i<at[j]){
            printf("%d|--",i);
            i++;
        }
        else if(i>=at[j]){
            printf("|%d|P%d",i,process[j]);
            i=ct[j];
            j++;
        }}
        printf("|%d",ct[n-1]);
    
    
    return 0;
}

