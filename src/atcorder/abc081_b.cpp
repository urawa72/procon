// https://atcoder.jp/contests/abc081/tasks/abc081_b
#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d",&A[i]);
    }

    bool flag = true;
    int cnt = 0;
    while(flag) {
        cnt++;
        for(int i = 0; i < N; i++) {
            if(A[i]%2 == 0) {
                A[i] = A[i]/2;
            }else{
                flag = false;
                cnt--;
                break;
            }
        }
    }
    printf("%d\n",cnt);
}
