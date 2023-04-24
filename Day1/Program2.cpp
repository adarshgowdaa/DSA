//Sort with Even = 1 Odd = 0;
#include <iostream>
using namespace std;

int main() {
  int a[100], n, temp = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++)
      if (a[j] < a[i]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      a[i] = 1;
    } else {
      a[i] = 0;
    }
  }
  cout << endl;
  for (int i = 0; i < n; i++) {

    cout << a[i] << " ";
  }
  return 0;
}