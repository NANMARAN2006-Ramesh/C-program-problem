#include<stdio.h>
int main(){
    int data;
    scanf("%d",&data);
    int n;
    scanf("%d",&n);
    int sum=0;
    int count = 0;
    int res;
    while(n--){
        int sto;
        scanf("%d",&sto);
        sum=sum+sto;
        if(sum<=data){
            count++;
            res=data-sum;
        }
        if(sum>data){
            res = sum-data;
        }
    }
    if(sum<data){
        printf("Exhausted Day : Not Exhausted\n");
        printf("Overused Data: 0");
    }
    else{
        printf("Exhausted Day: %d\n",count);
        printf("Overused Data: %d",res);
    }
    return 0;
}