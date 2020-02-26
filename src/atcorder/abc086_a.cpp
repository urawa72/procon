// https://atcoder.jp/contests/abc086/tasks/abc086_a
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a*b%2 == 0) {
        printf("%s\n","Even");
    }else{
        printf("%s\n","Odd");
    }
    return 0;
}
