#include<stdio.h>

int makos(int a){
    int aks=0;

    while(a!=0){
        aks+=a%10;
        aks*=10;
        a/=10;
    }

    return aks/10;
}

int main(){
    int a;
    int b;
    int c;
    
    scanf("%d%d%d",&a,&b,&c);

    int base=1;
    
    int mabna_10=0;
    //tabdil be mabna 10
    while(a>0)
    {
        int l_d=a%10;
        a/=10;
        mabna_10+=l_d*base;
        base*=b;
    }   

    int mabna_c=0;
    base=1;

    while (mabna_10>0)
    {
        mabna_c+=(mabna_10%c)*base;
        base*=10;
        mabna_10/=c;
    }

    

    if (makos(mabna_c)==mabna_c){
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    

    return 0;
}