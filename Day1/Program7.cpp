#include <iostream>
using namespace std;

void shift(int a[], int ptr1, int ptr2) {
  int temp;
  while (ptr1 <= ptr2) {
    if (a[ptr1] > 0 && a[ptr2] > 0) {
      ptr2--;
    } else if (a[ptr1] < 0 && a[ptr2] < 0) {
      ptr1++;
    } else if (a[ptr1] < 0 && a[ptr2] > 0) {
      ptr1++;
      ptr2--;
    } else {
      temp = a[ptr1];
      a[ptr1] = a[ptr2];
      a[ptr2] = temp;
    }
  }
}

int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ptr1 = 0;
  int ptr2 = n - 1;
  shift(a, ptr1, ptr2);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}