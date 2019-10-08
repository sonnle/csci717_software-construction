#include <iostream>

using namespace std;

namespace Assignment3
{
    class BankAccount{
        public:
            BankAccount(double initAmount=0);

            void Deposit(double dAmount);
            void Withdraw(double wAmount);
            double GetBalance(void);

            BankAccount* Clone();

            bool operator == (const BankAccount &b) {
                if ((this->balance - b.balance) < .01)
                    return true;
                return false;
            }

        private:
            double balance = 0;
    };
}
