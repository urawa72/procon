#include<cstdio>

int main() {
    int N;
    scanf("%d",&N);
    int d[N];
    for(int i = 0; i < N; i++) {
        scanf("%d",&d[i]);
    }

    // 配列のサイズ/配列の要素の型のサイズで要素数がわかる
    // intは4byteなので100つの数字をカウントするバケットには
    // n[110]必要（440/4=100）
    // printf("%ld\n",sizeof(n));
    // printf("%ld\n",sizeof(n[0]));
    // printf("%ld\n",sizeof(n)/sizeof(n[0]));
    int n[110] = {0};
    for(int i = 0; i < N; i++) {
        n[d[i]]++;
    }

    int result = 0;
    for(int i = 1; i <= 100; i++) {
        if(n[i]) {
            result++;
        }
    }

    printf("%d\n",result);
}
