#include<stdio.h>

int main() {
  int a, b, c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if (a < b && b < c) {
    printf("%s\n","Yes");
  } else {
    printf("%s\n","No");
  }
  return 0;
}
