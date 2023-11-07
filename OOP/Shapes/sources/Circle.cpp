//
// Created by Mahros on 11/7/2023.
//
// long double _area=0.0;           // πr^2
// long double _radius=0.0;         // R
// long double _perimeter=0.0;	    // C = 2πR = mohit
// long double _diameter=0.0;       // D


#include <iostream>
#include <cmath>
#include "../headers/Circle.h"
using namespace std;

unsigned long long int Circle::_counter = 0;

// Constructor
Circle::Circle(long double Radius) {
    Circle::_counter++;
    Circle::radius(Radius);
}

// setters
void Circle::area(long double Area) {
    // radius = sqrt(Area/PI)
    if(Area >= 0){
        Circle::radius(sqrt((long double) Area / M_PI));
    }
}
void Circle::radius(long double Radius) {
    if(Radius >= 0){
        Circle::_radius = Radius;
    } else{
        cout << "Negative input received: " << Radius << endl;
    }
}
void Circle::perimeter(long double Perimeter) {
    if(Perimeter >= 0){
        Circle::radius((long double) Perimeter / (2 * M_PI));
    }
}

// getters
long double Circle::area() { // A
    return M_PI * pow(Circle::radius(), 2);
}
long double Circle::radius() { // R or r
    return Circle::_radius;
}
long double Circle::diameter() { // D
    return Circle::radius() * 2;
}
long double Circle::perimeter() { // C
    return 2 * M_PI * Circle::radius();
}
unsigned long long int Circle::counter() {
    return _counter;
}

// OPERATORS
// [NUMBERS]
Circle Circle::operator +=(long double A){
    Circle::radius(Circle::radius() + A);
    return *this;
}
Circle Circle::operator -=(long double A){
    Circle::radius(Circle::radius() - A);
    return *this;
}

Circle Circle::operator +(long double A) {
    return Circle(Circle::radius() + A);
}
Circle Circle::operator -(long double A) {
    return Circle(Circle::radius() - A);
}

Circle Circle::operator *(long double A) {
    return Circle(Circle::radius() * A);
}
Circle Circle::operator /(long double A) {
    return Circle(Circle::radius() / A);
}

Circle Circle::operator *=(long double A){
    Circle::radius(Circle::radius() * A);
    return *this;
}
Circle Circle::operator /=(long double A){
    Circle::radius(Circle::radius() / A);
    return *this;
}

// [OBJECTS]
// PRE I/D
Circle Circle::operator ++() { // pre increment
    Circle::radius(Circle::radius()+1);
    return *this;
}
Circle Circle::operator --() { // pre decrement
    Circle::radius(Circle::radius()-1);
    return *this;
}

// POST I/D
Circle Circle::operator ++(int) { // post increment
    Circle::radius(Circle::radius()+1);
    return *this;
}
Circle Circle::operator --(int) { // post decrement
    Circle::radius(Circle::radius()-1);
    return *this;
}

Circle Circle::operator +=(Circle A) {
    Circle::radius(Circle::radius() + A.radius());
    return *this;
}
Circle Circle::operator -=(Circle A) {
    Circle::radius(Circle::radius() - A.radius());
    return *this;
}

Circle Circle::operator *=(Circle A) {
    Circle::radius(Circle::radius() * A.radius());
    return *this;
}
Circle Circle::operator /=(Circle A) {
    Circle::radius(Circle::radius() / A.radius());
    return *this;
}

Circle Circle::operator +(Circle A) {
    return *this;
}
Circle Circle::operator -(Circle A) {
    return *this;
}

Circle Circle::operator *(Circle A){
    return Circle(Circle::radius() * A.radius());
}
Circle Circle::operator /(Circle A){
    return Circle(Circle::radius() / A.radius());
}

// Destructor
Circle::~Circle(){
    // not any actions
}