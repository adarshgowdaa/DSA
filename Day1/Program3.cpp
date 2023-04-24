// Find element in Array
#include <iostream>
using namespace std;

int main()
{
  int t, a[50], n, key, flag = 0;
  cin >> t;
  int m = t;
  int res[t];
  while (t--)
  {
    int j = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    cin >> key;
    for (j = 0; j < n; j++)
    {
      if (a[j] == key)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
    {
      res[t] = -1;
    }
    else
    {
      res[t] = j;
    }
  }
  for (int i = m - 1; i >= 0; i--)
  {
    cout << res[i] << " ";
  }
  return 0;
}