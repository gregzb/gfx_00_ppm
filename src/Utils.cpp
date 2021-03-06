#include "Utils.hpp"
#include <cmath>
#include <vector>
#include <algorithm>

Color::Color(){};
Color::Color(unsigned char r, unsigned char g, unsigned char b, unsigned char a) : r(r), g(g), b(b), a(a){};
Color::Color(int r, int g, int b, int a)
{
    this->r = (unsigned char)r;
    this->g = (unsigned char)g;
    this->b = (unsigned char)b;
    this->a = (unsigned char)a;
}

double Utils::inverseLerp(double a, double b, double val)
{
    return (val - a) / (b - a);
}

double Utils::lerp(double a, double b, double t)
{
    return (1 - t) * a + t * b;
}