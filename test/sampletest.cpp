#include "gtest/gtest.h"
#include "Generated.h"
#include <cmath>

static const double _eps = 1e-15;

TEST(Generated, Equiv) {
	const double x = 1.2;
	const double y = 2.1;

    const double expected_a = std::pow(x + y, 2) / x;
    const double expected_b = std::sin(expected_a);
    const double expected_c = std::sin(expected_a) / expected_a;

    const auto actual = simianquant::ext::Generated::apply(x, y);

    ASSERT_LE(std::abs(expected_a - actual.getA()), _eps);
    ASSERT_LE(std::abs(expected_b - actual.getB()), _eps);
    ASSERT_LE(std::abs(expected_c - actual.getC()), _eps);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}