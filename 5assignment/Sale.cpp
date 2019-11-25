#include "Sale.h"

using namespace Assignment5;

// Added DISCOUNT to support question 2
// Added DAY to support question 3
Sale::Sale(DISCOUNT disc, DAY day)
{
    setDiscount(disc, day);
}

void Sale::addItem(Item *item)
{
    // Added iterating through to find similar item, append item at half price if found
    bool found = false;
    if(item->getBogo())
    {
        for(Item* i : itemList)
        {
            if(i->getTitle().compare(item->getTitle()) == 0)
                found = true;
        }
    }
    if (found)
        itemList.push_back(new Item(item->getTitle() + "_half", item->getItemTotal() / 2, item->getNumUnit()));
    else
        itemList.push_back(item);
}

double Sale::getDiscountRate(void)
{
    return DISCOUNT_RATE;
}

double Sale::getDiscount(void)
{
    return getSubTotal() * getDiscountRate();
}

double Sale::getSubTotal(void)
{
    double subTotal = 0.0;
    for(Item* i : itemList)
    {
        subTotal += i->getItemTotal();
    }
    return subTotal;
}

double Sale::getDiscountedSubTotal(void)
{
    return getSubTotal() - getDiscount();
}

// Added setDiscount to support quesiton 2
// Added DAY to support question 3
void Sale::setDiscount(DISCOUNT disc, DAY day)
{
    // Added to support question 4
    if (disc == PREFERRED)
        DISCOUNT_RATE = .15;
    else if (disc == SENIOR && day == TUESDAY)
        DISCOUNT_RATE = .10;
    else
        DISCOUNT_RATE = .05;

    /* Removed to support quesiton 4
    switch(disc)
    {
        case NONE:
            DISCOUNT_RATE = .05;
            break;
        case SENIOR:
            // Added IF/ELSE to support quesiton 3
            if (day == TUESDAY)
                DISCOUNT_RATE = .10;
            else 
                DISCOUNT_RATE = .05;
            break;
        case PREFERRED:
            DISCOUNT_RATE = .15;
            break;
    }
    */
}

