// #include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  // int n;
  // cin >> n;
  // int a = n % 3600;
  // int b = a % 60;
  // cout << n / 3600;
  // cout << ":";
  // cout << a / 60;
  // cout << ":";
  // cout << b << endl;
  int S;
  scanf("%d",&S);
  printf("%d:%d:%d\n",S/3600,(S%3600)/60,S%60);

}
