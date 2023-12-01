#include <iostream>
#include "Triangle.h"
#include "Point.h"
#include <string>
using namespace std;


int main() {
#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;

    void despArr(Triangle arrTriangulos[], int iS) {
        for (int indice = 0; indice < iS; indice++) {
            cout << indice << ". " << arrTriangulos[indice].str() << endl;
        }
    }

    void leerArr(Triangle arrTriangulos[], int iS) {
        double x1, y1, x2, y2, x3, y3;

        for (int indice = 0; indice < iS; indice++) {
            cout << "Ingresa las 3 coordenadas x, y de los vertices del triangulo " << indice << ":";
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

            Point p1{ x1, y1 };
            Point p2{ x2, y2 };
            Poit p3{ x3, y3 };

            arrTriangulos[indice].setVertice1(p1);
            arrTriangulos[indice].setVertice2(p2);
            arrTriangulos[indice].setVertice3(p3);
        }
    }

    void calcularPerimetro(Triangle arrTriangulos[], int iS) {
        for (int indice = 0; indice < iS; indice++) {
            cout << "Triangulo" << indice << ".\nPerimetro = " <<
                 arrTriangulos[indice].perimetro() <<
                 "\nArea = " <<
                 arrTriangulos[indice].area() << endl;
        }
    }


    int main()
    {
        Punto p1{ -5, -5 }, p2{ 1,3 }, p3{ 4, -6 };
        Punto p4{ -2, -3 }, p5{ 5,-4 }, p6{ -1, 3 };
        Punto p7{ -2, -3 }, p8{ 5,-4 }, p9{ -1, 3 };
        Triangulo tri1{ p4,p5,p6 }, tri2{ p1,p2,p3 }, tri3{ p7,p8,p9 };

        Triangulo arrT[100];

        despArr(arrT, 2);
        leerArr(arrT, 2);
        calcularPerimetro(arrT, 5);

        return 0;
    }


    return 0;
}
