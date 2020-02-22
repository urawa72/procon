#include<stdio.h>

// 挿入ソート
int main() {
    int n, A[1000];
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = 1; i < n; i++) {
        for(int i = 0; i < n; i++) {
            if(i != n - 1) {
                printf("%d ",A[i]);
            }else{
                printf("%d\n",A[i]);
            }
        }

        int v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
    }

    for(int i = 0; i < n; i++) {
        if(i != n - 1) {
            printf("%d ",A[i]);
        }else{
            printf("%d",A[i]);
        }
    }
}
