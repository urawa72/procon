// https://atcoder.jp/contests/abc087/tasks/abc087_b
#include<stdio.h>

int main() {
    int A,B,C,X;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&X);

    int total = 0;
    int cnt = 0;
    for(int i = 0; i <= A; i++) {
        for(int j = 0; j <= B; j++) {
            for(int k = 0; k <= C; k++) {
                total = 500*i + 100*j + 50*k;
                if(total == X) {
                    cnt++;
                }
            }
        }
    }
    printf("%d\n",cnt);
}
