//
// Created by kkoltun on 07.11.19.
//

#include "gtest/gtest.h"
#include "../../src/misc/eratosthenes.h"

TEST(ErathostenesTest, DefaultErathostenesTest) {
    // given
    long number = 15;
    std::vector<unsigned> expected{2, 3, 5, 7, 11, 13};

    // when
    std::vector<unsigned> actual = generatePrimesLowerThan(number);

    // then
    EXPECT_EQ(expected, actual);
}

