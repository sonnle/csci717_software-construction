#include "Problem2.h"

using namespace Problem2;

Square2::Square2(int s)
{
    SetSide(s);
}

int Square2::GetSide(void) {
    return side;
}

void Square2::SetSide(int s) {
    side = s;
}

int Square2::ComputeArea(void){
    return side * side;
}

int Square2::ComputePerimeter(void) {
    return (4 * side);
}

Rectangle2::Rectangle2(int s, int os) {
    SetSide(s);
    SetOtherSide(os);
}

int Rectangle2::GetOtherSide(void) {
    return otherSide;
}

void Rectangle2::SetOtherSide(int os)
{
    otherSide = os;
}

int Rectangle2::ComputeArea(void) {
    return side * otherSide;
}

int Rectangle2::ComputePerimeter(void) {
    return (2 * side) + (2 * otherSide);
}