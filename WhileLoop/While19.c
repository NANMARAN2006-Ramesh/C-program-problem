#include<stdio.h>
int main(){
    int capacity;
    scanf("%d",&capacity);
    int n;
    scanf("%d",&n);
    int total=0;
    int res,res1;
    while (n--)
    {
        int patient;
        scanf("%d",&patient);
        total=total+patient;
    }
    if(total>capacity){
        res = total-capacity;
    }
    else if(total<=capacity){
        res = 0;
    }
    else{
        res = capacity-total;
    }
    if(total<=capacity){
        res1 = capacity-res;
    }
    else{
        res1 = capacity;
    }
    printf("Treated Patients: %d\n",res1);
    printf("Rejected Patients: %d",res);
    
}