#include "Sale.h"

#include <gtest/gtest.h>

using namespace Assignment5;

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

class SaleTest : public ::testing::Test {
    protected:
        void SetUp() override {
            sale.addItem(monitor);
            sale.addItem(keyboard);
            sale.addItem(mouse);
            sale.addItem(mic);
            sale.addItem(speakers);
            sale.addItem(computer);
        }
    Item *monitor = new Item("monitor", 299.99, 10);
    Item *keyboard = new Item("keyboard", 99.99, 100);
    Item *mouse = new Item("mouse", 129.99, 200);
    Item *mic = new Item("microphone", 29.99, 100);
    Item *speakers = new Item("speakers", 49.99, 200);
    Item *computer = new Item("computer", 999.99, 10);
    Sale sale;
};

TEST_F(SaleTest, TestSaleAddItem)
{
    double price = 19.99;
    double preTotal = sale.getSubTotal();
    sale.addItem(new Item("test", price, 10));
    ASSERT_EQ(preTotal + price, sale.getSubTotal());
}

TEST_F(SaleTest, TestSaleDiscountRateDefault)
{
    ASSERT_EQ(.05, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleDiscountRateNone)
{
    Sale sale(NONE);
    ASSERT_EQ(.05, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleDiscountRateSeniorDefault)
{
    Sale sale(SENIOR);
    ASSERT_EQ(.05, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleDiscountRateSeniorTuesday)
{
    Sale sale(SENIOR, TUESDAY);
    ASSERT_EQ(.10, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleDiscountRateSeniorNotTuesday)
{
    Sale sale(SENIOR, WEDNESDAY);
    ASSERT_EQ(.05, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleDiscountRatePreferred)
{
    Sale sale(PREFERRED);
    ASSERT_EQ(.15, sale.getDiscountRate());
}

TEST_F(SaleTest, TestSaleBogo)
{
    double price = 20;
    double preTotal = sale.getSubTotal();
    Item *test = new Item("test", price, 10, true);
    sale.addItem(test);
    sale.addItem(test);
    ASSERT_EQ(preTotal + price + price/2, sale.getSubTotal());
}

TEST_F(SaleTest, TestSaleNoBogo)
{
    double price = 20;
    double preTotal = sale.getSubTotal();
    Item *test = new Item("test", price, 10, false);
    sale.addItem(test);
    sale.addItem(test);
    ASSERT_EQ(preTotal + price + price, sale.getSubTotal());
}
