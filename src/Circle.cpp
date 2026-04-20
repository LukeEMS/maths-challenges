#include "Circle.h"

bool Circle::CheckCoordsAreWithinCircle(double x, double y){
    // Substitute the coordinate parameters into the circle equation.
    double result = ((x-centerCoordinates[0])**2) + ((y-centerCoordincates[1])**2)
    // Check if less than or equal to the radius squared.
    return (result <= radius**2)
}