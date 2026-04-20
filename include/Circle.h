#include <iostream>
#pragma once 
using namespace std;


class Circle {
    public: 
        double radius = (double)1;
        double[2] centerCoordinates = {0,0};
        /* Parse the x coord and y coord of the point into this method
        Returns true if coords exist within the circle,
        False if outside of the circle.
        */
        bool CheckCoordsAreWithinCircle(double x, double y)
}