#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll t, n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  while (0 < (t--)) {
    cin >> n;

    const auto& q = n / 5;
    const auto& r = n % 5;

    for (auto i = 0; i < q; ++i) {
      cout << "++++ ";
    }

    for (auto i = 0; i < r; ++i) {
      cout << '|';
    }

    cout << '\n';
  }

  return 0;
}