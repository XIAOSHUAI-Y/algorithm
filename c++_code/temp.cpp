#include <iostream>
#include <vector>

using namespace std;

// C = A + B;
vector<int> add(vector<int> &A, vector<int> &B)
{
  vector<int> C;

  int carry = 0;
  for (int i = 0; i < A.size() || i < B.size(); i++)
  {
    if (i < A.size())
      carry += A[i];
    if (i < B.size())
      carry += B[i];
    C.push_back(carry % 10);
    carry /= 10;
  }
  if (carry)
    C.push_back(carry);
  return C;
}

int main()
{
  string a, b;
  vector<int> A, B;
  cin >> a;
  cin >> b;

  for (int i = a.size() - 1; i >= 0; i--)
  {
    A.push_back(a[i] - '0');
  }
  for (int i = b.size() - 1; i >= 0; i--)
  {
    B.push_back(b[i] - '0');
  }

  auto C = add(A, B);
  for (int i = C.size() - 1; i >= 0; i--)
  {
    cout << C[i];
  }
  cout << endl;

  return 0;
}