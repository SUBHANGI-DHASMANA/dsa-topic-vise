int missingNumber(vector<int> &a, int N) {
  int x1 = 0, x2 = 0;
  for (int i = 0; i < N - 1; i++){
    x2 = x2 ^ a[i];
    x1 = x1 ^ (i + 1);
  }
  x1 = x1 ^ N;
  return x1 ^ x2;
}