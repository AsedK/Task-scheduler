#ifndef __DATE_TEST_HPP__
#define __DATE_TEST_HPP__

#include "gtest/gtest.h"
#include "Date.hpp"
#include <string>
#include <sstream>

TEST(DateTest, Empty){
  Date D;
  std::ostringstream out;
  D.printDate(out);
  EXPECT_EQ(out.str(), "Date: 0/0/0\n");
}

TEST(DateTest, EmptyDay){
  Date D;
  D.setyear(1999);
  D.setmonth(06);
  std::ostringstream out;
  D.printDate(out);
  EXPECT_EQ(out.str(), "Date: 6/0/1999\n");
}

TEST(DateTest, EmptyMonth){
  Date D;
  D.setyear(1999);
  D.setday(15);
  std::ostringstream out;
  D.printDate(out);
  EXPECT_EQ(out.str(), "Date: 0/15/1999\n");
}

TEST(DateTest, EmptyYear){
  Date D;
  D.setmonth(06);
  D.setday(15);
  std::ostringstream out;
  D.printDate(out);
  EXPECT_EQ(out.str(), "Date: 6/15/0\n");
}


TEST(DateTest, CommonInput){
  Date D;
  D.setmonth(06);
  D.setday(1);
  D.setyear(2022);
  std::ostringstream out;
  D.printDate(out);
  EXPECT_EQ(out.str(), "Date: 6/1/2022\n");
}


TEST(DateTest, CompareEmpty){
  Date D1;
  Date D2;
  EXPECT_TRUE(D1==D2);
}


TEST(DateTest, CompareEmpty2){
  Date D1;
  Date D2;
  EXPECT_FALSE(D1<D2);
}

TEST(DateTest, CompareEmpty3){
  Date D1;
  Date D2;
  EXPECT_FALSE(D1>D2);
}
TEST(DateTest, CompareOneEmptyInput){
  Date D1;
  Date D2;
  D1.setmonth(06);
  D1.setday(1);
  D1.setyear(2022);
  EXPECT_TRUE(D1>D2);
}


TEST(DateTest, CompareSameInput){
  Date D1;
  Date D2;
  D1.setmonth(06);
  D1.setday(1);
  D1.setyear(2022);
  D2.setmonth(06);
  D2.setday(1);
  D2.setyear(2022);
  EXPECT_TRUE(D1==D2);
}

TEST(DateTest, CompareD1Input){
  Date D1;
  Date D2;
  D1.setmonth(06);
  D1.setday(1);
  D1.setyear(2022);
  D2.setmonth(05);
  D2.setday(15);
  D2.setyear(2022);
  EXPECT_TRUE(D1>D2);
}

TEST(DateTest, CompareD2Input){
  Date D1;
  Date D2;
  D1.setmonth(06);
  D1.setday(1);
  D1.setyear(2022);
  D2.setmonth(05);
  D2.setday(15);
  D2.setyear(2023);
  EXPECT_TRUE(D1<D2);
}

#endif

