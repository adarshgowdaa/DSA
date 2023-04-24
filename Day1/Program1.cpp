//Prime in Array
#include <iostream>
using namespace std;

int main() {
	int a[100], n, flag;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    flag = 0;
    for (int j = 2; j <= a[i] / 2; j++) {
      if (a[i] % j == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      cout << a[i] << " ";
  }
  return 0;
}