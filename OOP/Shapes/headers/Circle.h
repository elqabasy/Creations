//
// Created by Mahros on 11/7/2023.
//

#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

/* Circle formula
    D = 2R
    C = 2πR
    A = πR2
    [where]
    R: Radius
    D: Diameter
    C: Circumference
    A: Area
    π: 3.14159
 */
class Circle {
    private:
        static unsigned long long int _counter;
        long double _radius=0.0;// R
    public:
        // Constructor
        explicit Circle(long double Radius=0);

        // setters
        void area(long double Area); // A
        void radius(long double Radius); // R
        void perimeter(long double Perimeter); // C

        // getters
        long double area();
        long double radius();
        long double diameter();
        long double perimeter();
        static unsigned long long int counter();


        // OPERATORS
        // [NUMBERS]
        Circle operator +=(long double A);
        Circle operator -=(long double A);

        Circle operator *=(long double A);
        Circle operator /=(long double A);

        Circle operator +(long double A);
        Circle operator -(long double A);

        Circle operator *(long double A);
        Circle operator /(long double A);
        
        // [OBJECTS]
        // PRE I/D
        Circle operator ++();
        Circle operator --();

        // POST I/D
        Circle operator ++(int);
        Circle operator --(int);

        Circle operator +=(Circle A);
        Circle operator -=(Circle A);

        Circle operator *=(Circle A);
        Circle operator /=(Circle A);

        Circle operator +(Circle A);
        Circle operator -(Circle A);

        Circle operator *(Circle A);
        Circle operator /(Circle A);

        // Destructor
        ~Circle();
};


#endif //SHAPES_CIRCLE_H
