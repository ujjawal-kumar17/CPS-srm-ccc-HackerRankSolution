#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int i;
    int count=0;
    for(i=0;S[i]!='\0';i+=3){
        if(S[i]!='S'){
            count++;
        }
        if(S[i+1]!='O'){
            count++;
        }
        if(S[i+2]!='S'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
