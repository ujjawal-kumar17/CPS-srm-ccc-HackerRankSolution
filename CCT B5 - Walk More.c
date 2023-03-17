#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a ,const void* b){
return (*(int*)a-*(int*)b);
}

int main() {
    int n,a[1000],i;
    long res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    for(i=n-1;i>=0;i--){
    res+=a[i]*pow(2,n-1-i);
    }
    printf("%ld",res);
    return 0;
}
