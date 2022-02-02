/**********************************************************************
Matr.-Nr:   3086452                  ...
Nachname/Surname:Mohammed         ...
Vorname/Given name:Badie    ...
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/
#include <iostream>

using namespace std;
class Circle
{
private :
    double x , y , radius ;

public :
    double get_radius ()
    {
        return radius ;
    }
    void set_radius (double r)
    {
            radius = r ;
    }
    void set_center ( double cx , double cy )
    {
        x=cx ;
        y=cy ;
    }

    void print ()
    {
        cout << " center = (" << x << " , " << y << ")" << " ,  " ;
        cout << "radius = " << get_radius() << "\n" ;
    }
};
int main()
{
    Circle c1 , *c2 ;
    c1.set_center(2.1 , 0.5) ;
    c1.set_radius(1.3) ;
    cout << "Circle Data c1 : " ;
    c1.print() ;

    c2 = new Circle ;
    c2->set_center(-3.5 , 1.8) ;
    c2->set_radius(3.7) ;
  cout << "Circle Data c2 : " ;
     c2->print() ;
    return 0;
}
