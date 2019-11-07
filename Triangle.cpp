//
// Created by Henry Evans on 11/7/19.
//
using namespace std;
#include "Triangle.h"

int Triangle::area(int height, int width) {

    Polygon::area();
    int area = (height * width) / 2;
    return area;

}
