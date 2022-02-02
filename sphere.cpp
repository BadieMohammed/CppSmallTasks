/**********************************************************************
Matr.-Nr:  3086452
Nachname/Surname: Mohammed
Vorname/Given name: Badie
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
struct point {
    double x, y, z;
};
struct sphere
{
    point* center;
    double radius;

};


void print(sphere* c)
{
    cout << c->center->x << setw(10) << c->center->y << setw(10) << c->center->z << setw(10) << c->radius << "\n";
}
void print(sphere* arr[], int i)
{

    for (int i = 0 ; i < 5 ; i++)

    {


        print(arr[i]);

     /*   cout << " R is : ";
        cout << arr[i]->radius;
        cout << " x is : ";
        cout << arr[i]->center->x;
        cout << " y is : ";
        cout << arr[i]->center->y;
        cout << " z is : ";
        cout << arr[i]->center->z;
    */
    }
}
int main(void)
{


    sphere*c[5];

    for (int i = 0; i < 5; i++)
    {
        c[i] = new sphere;
        c[i]->center = new point;
        cout << "input center x coordinate : " << "\n";
        cin >> c[i]->center->x;
        cout << "input center y coordinate : " << "\n";
        cin >> c[i]->center->y;
        cout << "input center z coordinate : " << "\n";
        cin >> c[i]->center->z;
        cout << "input Radius " << "\n";
        cin >> c[i]->radius;
    }
    print(c, 5);


    return 0;
}
