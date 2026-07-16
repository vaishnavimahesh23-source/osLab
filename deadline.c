#include <stdio.h>
#define P 3
#define R 3

int main() {
    int max[P][R] = {{7,5,3},{3,2,2},{9,0,2}};
    int alloc[P][R] = {{0,1,0},{2,0,0},{3,0,2}};
    int avail[R] = {3,3,2};
    int need[P][R], finish[P] = {0}, safeSeq[P], work[R];
    for(int i=0;i<R;i++) work[i]=avail[i];
    for(int i=0;i<P;i++) for(int j=0;j<R;j++) need[i][j]=max[i][j]-alloc[i][j];
    int count=0;
    while(count<P){
        int found=0;
        for(int i=0;i<P;i++){
            if(!finish[i]){
                int j;
                for(j=0;j<R;j++) if(need[i][j]>work[j]) break;
                if(j==R){
                    for(int k=0;k<R;k++) work[k]+=alloc[i][k];
                    safeSeq[count++]=i; finish[i]=1; found=1;
                }
            }
        }
        if(!found){ printf("Deadlock possible!\n"); return 0; }
    }
    printf("Safe Sequence: ");
    for(int i=0;i<P;i++) printf("P%d ",safeSeq[i]);
    return 0;
}
