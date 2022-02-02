/**********************************************************************
Matr.-Nr:   3086452                  ...
Nachname/Surname:Mohammed         ...
Vorname/Given name:Badie    ...
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/


#include<cmath>
#include<iostream>
using namespace std ;
struct rectangle
{
    double x1,x2,y1,y2 ;
};
double area (rectangle r )
{
    double x ,y , A ;
    x = r.x2 - r.x1 ;
    y = r.y1 - r.y2 ;
    A= fabs(x*y) ;
    return A ;
}
void Print (rectangle r)
{
    cout << "upper left corner:" << r.x1 << "    " << r.y1 <<"\n";
    cout << "lower right corner:" << r.x2 << "    " << r.y2 <<"\n";
    cout << "area of the Rectangle:" << area(r) << "\n" ;
}
void printDiagonalLenght (rectangle n)
{
    double x , y ,z , D ;
    x= n.x2 - n.x1 ;
    y= n.y1 - n.y2 ;
    z = pow(x,2) + pow(y,2) ;
    D= sqrt(z) ;
    cout << "diagonal lenght :      " << D << "\n" ;
}
bool isCorrect (rectangle m)
{
    double x1 ,x2 , y1 , y2 ;
    x1=m.x1 ;
    x2=m.x2;
    y1=m.y1;
    y2=m.y2;
    if (y1>y2 && x2>x1)
        return true ;
    else
        return false ;
    }

 void makeBigsquare (rectangle l )
 {
     double x , y , Rest ;
     x= l.x2 - l.x1 ;
     y= l.y1 - l.y2 ;
     if (x>y) {
        Rest = x-y ;
        y = Rest + y ;
        cout << "the Values of the modified square is :" << x << y ;

     }
     if (y>x) {
        Rest = y-x ;
        x= Rest + x ;
         cout << "the Values of the modified square is :" << x << y ;
     }
 }

int main(void)
{
    rectangle z;
    cout << "input upper left corner:" << "\n" ;
    cin>> z.x1 >> z.y1;
    cout << "input lower right corner" << "\n" ;
    cin >> z.x2 >> z.y2 ;
    Print(z);
    printDiagonalLenght(z) ;
    cout<< " press Enter to check the Values" << "\n" ;
    if (isCorrect(z)==true)
        Print(z);
        else
            cout << " please Check your Values" << "\n" ;
    cout << "press Enter to convert the Shape into a Square" << "\n" ;
    makeBigsquare(z) << "\n" ;


    return 0 ;

}
