#include<stdio.h>
int MulTable(int num){
    int value;
    for(int i=1;i<=10;i++){
        value = num*i;
        printf("%d x %d = %d\n",num,i,value);
    }
    return 0;
}
int main(){
    int table;
    printf("Enter a table : ");
    scanf("%d",&table);
    MulTable(table);
    return 0;
}