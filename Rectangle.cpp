#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int m_length, int m_width)
{
    length = m_length;
    width = m_width;
}

void Rectangle::printArea()
{
    int area = length * width;
    std::cout << "Area: " << area << std::endl;
}

void Rectangle::printPerimeter()
{
    int perimeter = 2 * (length + width);
    std::cout << "Perimeter: " << perimeter << std::endl;
}