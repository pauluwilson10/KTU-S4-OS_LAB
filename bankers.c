#include<stdio.h>
void main(){
    int n,m,i,j,k,y,alloc[n][m],max[n][m],avail[m],need[n][m],work[m],finish[n],ind=0,safesequence[n];
    printf("Enter the number of process:\n ");
    scanf("%d",&n);
    printf("Enter the number of Resources:\n ");
    scanf("%d",&m);
    printf("Enter the Allocaation Matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&alloc[i][j]);
        }
    }
    printf("Enter the Max matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            scanf("%d",&max[i][j]);
    }
    printf("Available matrix: ");
    for(i=0;i<m;i++){
        scanf("%d",&avail[i]);
    }
    //calculating Need matrrix
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    //printing need matrix
    printf("Need matrix is: ");
    for(i=0;i<n;i++){
        print("\n");
        for(j=0;j<m;j++){
            printf("%d",need[i][j]);
        }
    }
    //bankers algorithm
    for(i=0;i<m;i++){
        work[i]=avail[i];
    }
    for(i=0;i<n;i++){
        finish[i]=0;
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(finish[i]==0){
                int flag=0;
                for(j=0;j<m;j++){
                    if(need[i][j]>work[j]){
                        flag=1;
                        break;
                    }
                }
                if (flag==0){
                    safesequence[ind++]=i;
                    for(y=0;y<m;y++){
                        work[y]+=alloc[i][y];
                        finish[i]=1;
                    }
                }
            }
        }
        printf("\n following is the SAFE sequence \n");
        for(i=0;i<n-1;i++){
            printf("P%d",safesequence[i]);
        }
    }

}
