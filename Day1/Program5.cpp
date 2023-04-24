#include <iostream>
using namespace std;

int compare(const void *aa, const void *bb)
{
  int n1 = *(int *)aa;
  int n2 = *(int *)bb;
  return n1 - n2;
}
int mai()
{
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  qsort(a, n, sizeof(int), compare);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}