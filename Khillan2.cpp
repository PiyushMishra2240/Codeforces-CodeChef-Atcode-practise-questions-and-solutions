#include<bits/stdc++.h>
using namespace std;

class car
{
    private:
        double speed;
        int seats;
        bool airbags;
        int gears;

    public:
        bool isMoving;
        float maxspeed;
        double get_speed()
        {
            return speed;
        }
        void set_speed(double s)
        {
            speed = s;
        }
        void accelerate(float x)
        {
            speed += x;
        }
        void reduce_speed(float x , bool emergency)
        {
            if(emergency == true)
            speed = 0;
            else
            speed -= x;
        }
}o1;

int main()
{
    double x;
    cout<<"Enter the speed of the car:";
    cin>>x;
    o1.set_speed(x);
    if( o1.get_speed() > o1.maxspeed)
    {
        cout<<"crash";
    }
    if(o1.get_speed())
    o1.isMoving = true;
    else
    o1.isMoving = false;

    return 0;
}