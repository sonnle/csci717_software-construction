#include "Item.h"

using namespace std;
using namespace Assignment5;

Item::Item(string t, double uPrice, int nUnit)
{
    setTitle(t);
    setUnitPrice(uPrice);
    setNumUnit(nUnit);
    setBogo(false);
}

Item::Item(string t, double uPrice, int nUnit, bool bogo)
{
    setTitle(t);
    setUnitPrice(uPrice);
    setNumUnit(nUnit);
    setBogo(bogo);
}

void Item::setTitle(string t)
{
    title.assign(t);
}

void Item::setUnitPrice(double uPrice)
{
    if(uPrice > 0)
        unitPrice = uPrice;
    else
        unitPrice = 0;
}

void Item::setNumUnit(int nUnit)
{
    if(nUnit > 0)
        numUnit = nUnit;
    else
        numUnit = 0;
}

void Item::setBogo(bool bogo)
{
    isBogo = bogo;
}

string Item::getTitle(void)
{
    return title;
}

double Item::getItemTotal(void)
{
    return unitPrice;
}

int Item::getNumUnit(void)
{
    return numUnit;
}

bool Item::getBogo(void)
{
    return isBogo;
}
