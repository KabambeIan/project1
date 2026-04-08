#ifndef SQUARE_H
#define SQUARE_H

namespace shapes
{

    class Square
    {
    private:
        float side;

    public:
        Square();        // default constructor
        Square(float s); // overloaded constructor
        ~Square();       // destructor

        void setSide(float s);
        float getSide();
    };

}

#endif