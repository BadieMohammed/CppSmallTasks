/**********************************************************************
Matr.-Nr:  3086452
Nachname/Surname: Mohammed
Vorname/Given name: Badie
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std ;
struct point {
    double x,y,z ;
};
struct sphere {
point *center ;
double radius ;
};
void print (sphere * c)
{
    cout << c->center->x <<setw(10)<< c->center->y << setw(10) << c->center->z << setw(10)<< c->radius << "\n" ;
}
void print (sphere *arr[] , int i)
{
    for (int j = 0 ; j=i ; j++)
    {
         cout << print(arr[i]) ;

    }
}
int main(void)
{
 sphere *c[5] = new sphere ;
 c->center = new point ;
 for (int i =0 ; i =5 ; i++)
 {
 cout << "input center x coordinate : " << "\n" ;
 cin >> c[i]->center->x ;
 cout << "input center y coordinate : " << "\n" ;
 cin >> c[i]->center->y ;
 cout << "input center z coordinate : " << "\n" ;
 cin >> c[i]->center->z ;
 cout << "input Center sphere " << "\n" ;
 cin >> c[i]->radius ;
 }
 print(c[i] , 5 ) ;
 delete c->center ;
 delete c ;

 return 0 ;
}
