#include<algorithm>
#include<cstdio>
#include<functional>

using namespace std;

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i = 0; i < N; i++) {
        scanf("%d",&a[i]);
    }

    sort(a,a+N,greater<>());

    int alice = 0, bob = 0;
    for(int i = 0; i < N; i++) {
        if(i%2 == 0) {
            alice += a[i];
        }else{
            bob += a[i];
        }
    }
    printf("%d\n",alice-bob);
}
