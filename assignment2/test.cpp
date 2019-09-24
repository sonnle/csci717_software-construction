#include "Problem1.h"
#include "Problem2.h"

#include <gtest/gtest.h>

using namespace Problem1;
using namespace Problem2;

TEST(Problem1Tests, TestRectangle1Constructor)
{
    Rectangle1 rect1(1,3);
    ASSERT_EQ(1, rect1.GetWidth());
    ASSERT_EQ(3, rect1.GetHeight());
}

TEST(Problem1Tests, TestRectangle1SetWidth)
{
    Rectangle1 rect1(1,3);
    ASSERT_EQ(1, rect1.GetWidth());

    rect1.SetWidth(4);
    ASSERT_EQ(4, rect1.GetWidth());
}

TEST(Problem1Tests, TestRectangle1SetHeight)
{
    Rectangle1 rect1(1,3);
    ASSERT_EQ(3, rect1.GetHeight());

    rect1.SetHeight(5);
    ASSERT_EQ(5, rect1.GetHeight());
}

TEST(Problem1Tests, TestRectangle1ComputeArea)
{
    Rectangle1 rect1(1,3);

    rect1.SetWidth(4);
    rect1.SetHeight(5);
    ASSERT_EQ(20, rect1.ComputeArea());
}

TEST(Problem1Tests, TestRectangle1ComputePerimeter)
{
    Rectangle1 rect1(1,3);

    rect1.SetWidth(4);
    rect1.SetHeight(5);
    ASSERT_EQ(18, rect1.ComputePerimeter());
}

TEST(Problem1Tests, TestSquare1Constructor)
{
    Square1 sq1(6);
    ASSERT_EQ(6, sq1.GetWidth());
    ASSERT_EQ(6, sq1.GetHeight());
}

TEST(Problem1Tests, TestSquare1ComputeArea)
{
    Square1 sq1(6);
    ASSERT_EQ(36, sq1.ComputeArea());
}

TEST(Problem1Tests, TestSquare1ComputePerimeter)
{
    Square1 sq1(6);
    ASSERT_EQ(24, sq1.ComputePerimeter());
}

TEST(Problem2Tests, TestSquare2Constructor)
{
    Square2 sq2(7);
    ASSERT_EQ(7, sq2.GetSide());
}

TEST(Problem2Tests, TestSquare2SetSide)
{
    Square2 sq2(7);
    ASSERT_EQ(7, sq2.GetSide());

    sq2.SetSide(10);
    ASSERT_EQ(10, sq2.GetSide());
}

TEST(Problem2Tests, TestSquare2ComputeArea)
{
    Square2 sq2(7);
    ASSERT_EQ(49, sq2.ComputeArea());
}

TEST(Problem2Tests, TestSquare2ComputePerimeter)
{
    Square2 sq2(7);
    ASSERT_EQ(28, sq2.ComputePerimeter());
}

TEST(Problem2Tests, TestRectangle2Constructor)
{
    Rectangle2 rect2(8, 4);
    ASSERT_EQ(8, rect2.GetSide());
    ASSERT_EQ(4, rect2.GetOtherSide());
}

TEST(Problem2Tests, TestRectangle2ComputeArea)
{
    Rectangle2 rect2(8, 4);
    ASSERT_EQ(32, rect2.ComputeArea());
}

TEST(Problem2Tests, TestRectangle2ComputePerimeter)
{
    Rectangle2 rect2(8, 4);
    ASSERT_EQ(24, rect2.ComputePerimeter());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
