#include <iostream>
using namespace std;


class Circle {
    public: 
        double radius = 1;
        double[2] centerCoordinates;
        /* Parse the x coord and y coord of the point into this method
        Returns true if coords exist within the circle,
        False if outside of the circle.
        */
        bool CheckCoordsAreWithinCircle(double x, double y) {
            // Substitute the coordinate parameters into the circle equation.
            double result = ((x-centerCoordinates[0])**2) + ((y-centerCoordincates[1])**2)
            // Check if less than or equal to the radius squared.
            return (result <= radius**2)
        }
}