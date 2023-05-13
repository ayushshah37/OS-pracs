#include <stdio.h>
//best fit
int main()
{   int n_process=4,n_memories=5,visited[100],memory_alloc[100],diff;

    int memories[]={100,200,300,400,500};
    int process[]={120,250,600,80};
    
    for(int i=0;i<n_memories;i++){
        visited[i]=0;
        memory_alloc[i]=-1;
    }
    
    for(int i=0;i<n_process;i++){
        
        int diff1=9999; 
        
        for(int j=0;j<n_memories;j++){
            
            if( diff1>memories[j]-process[i] && memories[j]-process[i]>=0 && visited[j]==0){
               diff1=memories[j]-process[i];
               memory_alloc[i]=j;
               
               
               }  
               visited[memory_alloc[i]]=1;
               }
    }
    printf("\n\n");
    for(int i =0;i<n_process;i++)
    {
        if(memory_alloc[i]!=-1)
        printf("Process size = %d goes in location %d and hole is %d \n",process[i],memories[memory_alloc[i]],memories[memory_alloc[i]]-process[i]);
        else
        printf("%d not allocated to memory\n",process[i]);
    }
    return 0;
}
