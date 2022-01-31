#include<iostream>
using namespace std;

class Point
{

public:
    int x,y;
        Point()
        {
            this->x=5;
            this->y=6;
        }
        Point(int n,int m)
        {
            this->x=n;
            this->y=m;
        }
        void disp()
        {
            cout<< "X : "<< x << " Y : " <<y;
        }
};
Point operator+(Point &pt1, Point &pt2)
{
    Point pt3;
    pt3.x = pt1.x + pt2.x;
    pt3.y = pt1.y + pt2.y;
    return pt3;
}
int main()
{

    Point p1(40,50),p2,p3;
    p1.disp();
    p3 = p1+p2;
    p3.disp();
    p2.disp();
}
