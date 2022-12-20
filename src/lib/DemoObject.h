#pragma once

class DemoObject
{
public:
    DemoObject(int x, int y, int z=0) : x(x), y(y), z(z)
    {
    }

    // f(x,y)
    int AddXY() const
    {
       return Add(x, y);
    }

    int GetZ() const
    {
        return z;
    }

    // Do the complex mathy stuff here functionally rather
    // than having full access to the member values.
    static int Add(int x, int y)
    {
        return x + y;
    }

private:
    int x, y;
    int z;
};