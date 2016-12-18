#include <stdio.h>
#include <stdlib.h>
int main (){
int n,I,tab;
n=2;
    while(n<=10){
         I=1;
         tab=0;
         while(I<=10){
              tab=tab+n;
              printf("%d",tab);
              I++;
        }
    printf("\n");
    n++;
    }  
}

