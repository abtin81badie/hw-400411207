#include<stdio.h>

int func(int n, int i, int c){
    if (n == 0){
        return c;
        
    }
    if (n < 0){
        return c-1;
    }
    n -= i;
    i++;
    c++;
    return func(n,i,c);
}

int main(){
    int n;
    scanf("%d",&n);
 
    printf("%d",func(n,1,0));
   

    return 0;
}