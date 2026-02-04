#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int x;
    int exact=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]==x){
            exact++;
        }
    }
    printf("Exact count: %d",exact);
}