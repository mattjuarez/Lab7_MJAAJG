#pragma once
#include "Poligonos.h"

class Triangulo : public Poligonos {

protected:
    double lado;
    double base;

public:
    Triangulo(string figura, string color, int ID, double lado, double base) : Poligonos(figura, color, ID) {
        this->lado = lado;
        this->base = base;
    };

    double Area() override {
        double altura = trunc(sqrt((this->lado * this->lado) - ((this->base / 2 * this->base / 2))));
        return ((this->base * altura) / 2);
    }
    double Perimetro() override {
        return this->lado * 2 + this->base;
    }
    int id() override {
        return this->ID;
    }
    string getColor() override {
        return this->color;
    }
    string getFigura() override {
        return this->figura;
    }
};