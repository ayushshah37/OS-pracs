#include <stdio.h>

int main()
{   int n_process=4,n_memories=5,visited[100],memory_alloc[100];

    int memories[]={100,200,300,400,500};
    int process[]={120,250,600,80};
    
    for(int i=0;i<n_memories;i++){
        visited[i]=0;
        memory_alloc[i]=-1;
    }
    
    for(int i=0;i<n_process;i++){
        for(int j=0;j<n_memories;j++){
            
            if(process[i]<=memories[j] && visited[j]==0){
                
                visited[j]=1;
                memory_alloc[i]=j;
                break;
                
            }
            
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
