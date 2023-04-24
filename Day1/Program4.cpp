// Swap in array kth elememt
#include <iostream>
using namespace std;

int main()
{
  int a[100], n, k, temp;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> k;
  temp = a[k - 1];
  a[k - 1] = a[n - k];
  a[n - k] = temp;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}