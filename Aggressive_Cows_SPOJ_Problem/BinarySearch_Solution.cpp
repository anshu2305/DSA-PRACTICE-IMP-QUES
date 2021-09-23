#include <iostream>
#include <algorithm>
using namespace std;

int N, C;
long long A[100000];

// check if a distance of x is possible b/w two cows
bool canBePlaced(int A[], int n, int x)
{
  // greedy approach, put each cow in the first place you can
  int cows_placed = 1, last_pos = A[0];
  for (int i = 1; i < N; i++)
  {
    if ((A[i] - last_pos) >= x)
    {
      cows_placed++;
      last_pos = A[i];
    }
    if (cows_placed == C)
        return true;
  }
  return false;
}

long long minDist(int A[], int N, int C)
{
  
  sort(A, A + N);

  // binary search 
  long long low = 1, high = A[n-1] - A[0], mid, pos = -1;
  while (high >= low)
  {
    mid = (high + low) / 2;
    if (canBePlaced(mid))
    {
      low = mid + 1;
      pos = mid;
    }
    else
    {
      high = mid - 1;
    }
  }
  return pos;
}

int main()
{
  int T;
  cin >> T;
  while (T--){
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    cin >> A[i];
    cout<<minDist(A, N, C)<<endl;
  }
  return 0;
}
