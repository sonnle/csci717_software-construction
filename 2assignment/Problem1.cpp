#include "Problem1.h"

using namespace Problem1;

Rectangle1::Rectangle1(int w, int h) {
    SetWidth(w);
    SetHeight(h);
}

int Rectangle1::GetWidth(void) {
    return width;
}

int Rectangle1::GetHeight(void) {
    return height;
}

void Rectangle1::SetWidth(int w) {
    width = w;
}

void Rectangle1::SetHeight(int h) {
    height = h;
}

int Rectangle1::ComputeArea(void){
    return height * width;
}

int Rectangle1::ComputePerimeter(void) {
    return (2 * height) + (2 * width);
}

Square1::Square1(int s) {
    SetWidth(s);
    SetHeight(s);
}

void Square1::SetWidth(int w) {
    width = w;
    height = w;
}

void Square1::SetHeight(int h) {
    height = h;
    width = h;
}