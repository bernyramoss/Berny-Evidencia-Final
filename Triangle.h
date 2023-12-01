//
// Created by Bernardo Ramos on 24/11/23.
//

#ifndef UNTITLED4_TRIANGLE_H
#define UNTITLED4_TRIANGLE_H

#include <stdio.h>
#include "Point.h"

class Triangle {

private:
    Point v1,v2,v3;

public:
    Triangle();
    Triangle(Point _v1, Point _v2, Point _v3);

    Point getVertex1();
    Point getVertex2();
    Point getVertex3();

    void setVertex1(Point _v1);
    void setVertex2(Point _v2);
    void setVertex3(Point _v3);

    double perimetro();
    double area();
    std::string str();



};


#endif //UNTITLED4_TRIANGLE_H
