#include "Item.h"

#include <vector>

namespace Assignment5
{
    // Added to support problem 2
    enum DISCOUNT {NONE, SENIOR, PREFERRED};
    // Added to support problem 3
    enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    class Sale {
        public:
            // Added to support problem 2
            Sale(DISCOUNT d=NONE, DAY=SUNDAY);

            void addItem(Item* item);
            double getDiscountRate(void);
            double getDiscount(void);
            double getSubTotal(void);
            double getDiscountedSubTotal(void);
            void setDiscount(DISCOUNT disc, DAY day);

        private:
            // Added to support problem 2 
            double DISCOUNT_RATE;
            // Removed to support problem 2
            //  static constexpr double DISCOUNT_RATE = .05;
            std::vector<Item*> itemList;
    };
}

