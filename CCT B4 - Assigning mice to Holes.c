#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *x,const void *y)
{
    return *(int*)x - *(int*)y;
}

int main() 
{
    int n;
    scanf("%d",&n);
    
    int micePos[n], holesPos[n], i;
    
    for(i=0;i<n;i++)
        scanf("%d",&micePos[i]);
    
    for(i=0;i<n;i++)
        scanf("%d",&holesPos[i]);
    
    qsort(micePos,n,sizeof(int),compare);
    qsort(holesPos,n,sizeof(int),compare);
    
    int result = 0;
    for(i=0;i<n;i++)
    {
        int temp = abs(micePos[i] - holesPos[i]);
        result = result > temp ? result : temp;
    }
    
    printf("%d",result);
    
    return 0;
}
