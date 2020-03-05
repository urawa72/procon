#include<cstdio>

// 計算量をN^3からN^2に減らせる
int main() {
    int N, Y;
    scanf("%d",&N);
    scanf("%d",&Y);

    int total = 0;
    int sum = 0;
    bool flag = false;
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N-i; j++) {
            for(int k = 0; k <= N-j; k++) {
                total = i+j+k;
                sum = 10000*i+5000*j+1000*k;
                if(total == N && sum == Y) {
                    printf("%d %d %d\n",i,j,k);
                    flag = true;
                    break;
                }
            }
            if(flag) { break; }
        }
        if(flag) { break; }
    }
    if(sum != Y) { printf("%d %d %d\n",-1,-1,-1); }
}
