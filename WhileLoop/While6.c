#include<stdio.h>
int main(){
    int max,n;
    scanf("%d%d",&max,&n);
    int total = 0;
    int count = 0;
    int i=0,arr[n];
    while (i<n)
    {
        scanf("%d",&arr[i]);
        total = total+arr[i];
        if(total<=max){
            count++;
        }
        i++;
    }
    printf("Passengers Allowed : %d\n",count);
    if(total>=max){
        printf("Overload : Yes");
    }
    else{
        printf("Overload : No");
    }
    return 0;
}