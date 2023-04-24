#include <iostream>
using namespace std;

int compare(const void *a, const void *b)
{
  int n1 = *(int *)a;
  int n2 = *(int *)b;
  return n2 - n1;
}
int main()
{
  int a[100], n, k;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  qsort(a, n, sizeof(int), compare);
  // for (int i = 0; i < n; i++) {
  //   cout << a[i] << " ";
  // }
  cin >> k;
  k--;
  if (a[k] == a[k - 1])
  {
    k++;
  }
  cout << a[k];
  return 0;
}