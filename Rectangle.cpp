//
// Created by Henry Evans on 11/7/19.
//
#include "Rectangle.h"
using namespace std;

int Rectangle::area(int height, int width) {
    Polygon::area();
    int area = height * width;
    return area;
}
