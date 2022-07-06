#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    float x;
    float y;

    public:
    float width;
    float height;
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
    }
    void translate(int x_pos,int y_pos)
    {
        x = x + x_pos;
        y = y + y_pos;
    }

    Rectangle()
    {
        x = 0.0;
        y = 0.0;
    }

}r1,r2;

int main()
{
    r1.width = 10;
    r1.height = 15;

    r2.height = 5;
    r2.width = 10;
    cout<<"The two rectangles are overlaping";
    r2.width = r2.width + r2.height;
    r2.height = r2.width - r2.height;
    r2.width = r2.width - r2.height;
    cout<<"\nNew width and height of r2 rectangle is:"<<r2.width<<" "<<r2.height;
    return 0;

}