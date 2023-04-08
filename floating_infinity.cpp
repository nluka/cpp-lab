#include <iostream>
#include <limits>
#include <cmath>

int main() {
  double pos_inf = std::numeric_limits<double>::infinity();
  double neg_inf = -std::numeric_limits<double>::infinity();
  double pos_nan = std::nan("");
  double neg_nan = -std::nan("");

  std::cout << "pos_inf = " << pos_inf << '\n'
            << "neg_inf = " << neg_inf << '\n'
            << "pos_nan = " << pos_nan << '\n'
            << "neg_nan = " << neg_nan << '\n'
  ;
}
