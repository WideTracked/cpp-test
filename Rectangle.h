#pragma once

class Rectangle
{
    public:
        Rectangle(int m_length, int m_width);
        Rectangle();
        void printArea();
        void printPerimeter();

    private:
        int length;
        int width;
};