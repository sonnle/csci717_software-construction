#include "BankAccount.h"

#include <gtest/gtest.h>

using namespace Assignment3;

class BankAccountTestD : public ::testing::Test {
    protected:
        void SetUp() override {
            obAccount = *bAccount.Clone();
        }

    BankAccount bAccount;
    BankAccount obAccount;
};

class BankAccountTestW : public ::testing::Test {
    protected:
        void SetUp() override {
            bAccount = new BankAccount(500.50);
            obAccount = bAccount->Clone();
        }

    BankAccount *bAccount;
    BankAccount *obAccount;
};


TEST_F(BankAccountTestD, TestBankAccountConstructor)
{
    ASSERT_EQ(0, bAccount.GetBalance());
}

TEST_F(BankAccountTestD, TestDepositNegativeValue)
{
    ASSERT_EQ(0, bAccount.GetBalance());
    bAccount.Deposit(-10);
    ASSERT_EQ(0, bAccount.GetBalance());
}

TEST_F(BankAccountTestD, TestDepositZero)
{
    ASSERT_EQ(0, bAccount.GetBalance());
    bAccount.Deposit(0);
    ASSERT_EQ(0, bAccount.GetBalance());
}

TEST_F(BankAccountTestD, TestDepositPositiveValue)
{
    ASSERT_EQ(0, bAccount.GetBalance());
    bAccount.Deposit(10);
    ASSERT_EQ(10, bAccount.GetBalance());
}

TEST_F(BankAccountTestD, TestDepositPositiveDoubleValue)
{
    ASSERT_EQ(0, bAccount.GetBalance());
    bAccount.Deposit(10.49);
    ASSERT_EQ(10.49, bAccount.GetBalance());
}

TEST_F(BankAccountTestW, TestBankAccountConstructorWithInitBalance)
{
    ASSERT_EQ(500.50, bAccount->GetBalance());
    ASSERT_EQ(500.50, obAccount->GetBalance());
}

TEST_F(BankAccountTestW, TestBankAccountOverloadedEqualsOperator)
{
    ASSERT_EQ(true, *bAccount == *obAccount);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
