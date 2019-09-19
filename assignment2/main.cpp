#include <cassert>
#include <iostream>

#include "Problem1.h"
#include "Problem2.h"

using namespace std;
using namespace Problem1;
using namespace Problem2;

int main(void)
{
    Rectangle1 rect1(1,3);

    assert(rect1.GetWidth() == 1);
    assert(rect1.GetHeight() == 3);

    cout << "rect1 width: " << rect1.GetWidth() << "\n";
    cout << "rect1 height: " << rect1.GetHeight() << "\n";

    rect1.SetWidth(4);
    rect1.SetHeight(5);

    assert(rect1.GetWidth() == 4);
    assert(rect1.GetHeight() == 5);
    assert(rect1.ComputeArea() == 20);
    assert(rect1.ComputePerimeter() == 18);

    cout << "rect1 area: " << rect1.ComputeArea() << "\n";
    cout << "rect1 perim: " << rect1.ComputePerimeter() << "\n";

    Square1 sq1(6);

    assert(sq1.GetWidth() == 6);
    assert(sq1.GetHeight() == 6);
    assert(sq1.ComputeArea() == 36);
    assert(sq1.ComputePerimeter() == 24);

    cout << "sq1 area: " << sq1.ComputeArea() << "\n";
    cout << "sq1 perim: " << sq1.ComputePerimeter() << "\n";

    sq1.SetWidth(10);

    assert(sq1.GetWidth() == 10);
    assert(sq1.GetHeight() == 10);
    assert(sq1.ComputeArea() == 100);
    assert(sq1.ComputePerimeter() == 40);

    cout << "sq1 area: " << sq1.ComputeArea() << "\n";
    cout << "sq1 perim: " << sq1.ComputePerimeter() << "\n";

    Square2 sq2(7);

    assert(sq2.GetSide() == 7);

    cout << "sq2 side: " << sq2.GetSide() << "\n";

    sq2.SetSide(10);

    assert(sq2.GetSide() == 10);
    assert(sq2.ComputeArea() == 100);
    assert(sq2.ComputePerimeter() == 40);

    cout << "sq2 area: " << sq2.ComputeArea() << "\n";
    cout << "sq2 perim: " << sq2.ComputePerimeter() << "\n";

    Rectangle2 rect2(8, 4);

    assert(rect2.GetSide() == 8);
    assert(rect2.GetOtherSide() == 4);
    assert(rect2.ComputeArea() == 32);
    assert(rect2.ComputePerimeter() == 24);

    cout << "rect2 area: " << rect2.ComputeArea() << "\n";
    cout << "rect2 perim: " << rect2.ComputePerimeter() << "\n";

    rect2.SetOtherSide(8);

    assert(rect2.GetSide() == 8);
    assert(rect2.GetOtherSide() == 8);
    assert(rect2.ComputeArea() == 64);
    assert(rect2.ComputePerimeter() == 32);

    cout << "rect2 area: " << rect2.ComputeArea() << "\n";
    cout << "rect2 perim: " << rect2.ComputePerimeter() << "\n";
}