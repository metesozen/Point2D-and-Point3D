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
