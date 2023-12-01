//
// Created by Bernardo Ramos on 24/11/23.
//

#ifndef UNTITLED4_POINT_H
#define UNTITLED4_POINT_H

#include <stdio.h>
#include <string>
#include <math.h>

class Point {
private:
    double x, y;

public:
    Point();
    Point(double _x, double _y);

    double getX();
    double getY();

    void setX(double _x);
    void setY(double _y);

    double calculaDistancia(Point p2);
    std::string str();


};


#endif //UNTITLED4_POINT_H
