

#include "math.h" 
#include "GeometricArea.h"


double circle(int rad){//function to get the area of a circle
    //double pi = 3.14;
    return 3.14 * (rad * rad);
}

double triangle(int side1, int side2, int side3){//function to get the area of a triangle
    double p;
    p = (side1 + side2 + side3) * .5;
    return sqrt((p * (p - side1) * (p - side2) * (p - side3)));
}

double FourSidePolygon(int side1, int side2, int side3, int side4){//function to get the area of a Four Side Polygon
    double s;
    double a;
    s = (side1 + side2 + side3 + side4) * .5;
    a = sqrt(((s - side1) * (s - side2) * (s - side3) * (s - side4)));
    return a;

}
