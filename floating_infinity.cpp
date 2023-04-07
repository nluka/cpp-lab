#include <iostream>
#include <limits>

int main() {
  double pos_inf = std::numeric_limits<double>::infinity();
  double neg_inf = -std::numeric_limits<double>::infinity();

  std::cout << "pos_inf = " << pos_inf << '\n'
            << "neg_inf = " << neg_inf << '\n';
}
