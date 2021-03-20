#include <iostream>
#include <math.h>
using namespace std;
class Point2D{
    public:
    int x;
    int y;
    Point2D(int a,int b){
        x=a;
        y=b;
    }
    double dist2D(Point2D p){
        double dist= double((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y));
        return (sqrt(dist));
    }
    void printDistance(double d){
        cout<<"2D distance = "<<ceil(d)<<endl;
    }
};
class Point3D : public Point2D{
    public:
    int z;
    Point3D(int a,int b,int c):Point2D(a,b){
        z=c;
    }
    double dist3D(Point3D p){
        double dist= double((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y)+(this->z-p.z)*(this->z-p.z));
        return (sqrt(dist));
    }
    void printDistance(double d){
        cout<<"3D distance = "<<ceil(d)<<endl;
    }
};
int main() {
    int x1;
    int y1;
    int z1;
    int x2;
    int y2;
    int z2;
    
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2; 
    
    Point3D p1(x1, y1, z1);
    Point3D p2(x2, y2, z2);
    double d2 = p1.dist2D(p2);
    double d3 = p1.dist3D(p2);
    //The code below uses runtime polymorphism to call the overridden printDistance method:
    Point2D p(0, 0);
    p.printDistance(d2);
    p = p1;
    p1.printDistance(d3);
    
    return 0;
}
