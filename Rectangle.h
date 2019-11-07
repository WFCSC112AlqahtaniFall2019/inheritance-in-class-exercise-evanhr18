//
// Created by Henry Evans on 11/7/19.
//
using namespace std;
#include "Polygon.h"

#ifndef INHERTANCE_EXERCISE_RECTANGLE_H
#define INHERTANCE_EXERCISE_RECTANGLE_H

#endif //INHERTANCE_EXERCISE_RECTANGLE_H

class Rectangle : public Polygon {

public:
    int area(int height, int width);

protected:
    int height;
    int width;
};