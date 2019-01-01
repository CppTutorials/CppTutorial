#include <bits/stdc++.h>

using namespace std;

namespace a {
  int i = 1;
}
namespace b {
  int i = 2;
}
int main () {
  cout << a::i << endl;
  cout << b::i << endl;
  return 0;
}
