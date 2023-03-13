// I didn't come this far to only come this far
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

#ifndef ONLINE_JUDGE
#define pra(a, n)                                                              \
  cerr << #a << ":";                                                           \
  for (int i = 0; i < n; i++)                                                  \
    cerr << a[i] << " ";                                                       \
  cerr << endl;
#define prm(mat, row, col)                                                     \
  cerr << #mat << ":\n";                                                       \
  for (int i = 0; i < row; i++) {                                              \
    for (int j = 0; j < col; j++)                                              \
      cerr << mat[i][j] << " ";                                                \
    cerr << endl;                                                              \
  }
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>
ostream &operator<<(ostream &os, const pair<S, T> &p) {
  return os << "(" << p.first << "," << p.second << ")";
}
template <class T> ostream &operator<<(ostream &os, const vector<T> &p) {
  os << "[";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> ostream &operator<<(ostream &os, const set<T> &p) {
  os << "[";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> ostream &operator<<(ostream &os, const multiset<T> &p) {
  os << "[";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class S, class T>
ostream &operator<<(ostream &os, const map<S, T> &p) {
  os << "[";
  for (auto &it : p)
    os << it << " ";
  return os << "]";
}
template <class T> void dbs(string str, T t) {
  cerr << str << ":" << t << "\n";
}
template <class T, class... S> void dbs(string str, T t, S... s) {
  int idx = str.find(',');
  cerr << str.substr(0, idx) << ":" << t << ",";
  dbs(str.substr(idx + 1), s...);
}
#else
#define pr(...)                                                                \
  {}
#define pra(a, n)                                                              \
  {}
#define prm(mat, row, col)                                                     \
  {}
#endif

void solve() {
  
}

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc=1;
  while (tc--)
    solve();

  return 0;
}
