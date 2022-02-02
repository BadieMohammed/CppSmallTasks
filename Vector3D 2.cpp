/**********************************************************************
Matr.-Nr:  3086452
Nachname/Surname: Mohammed
Vorname/Given name: Badie
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/


#include <iostream>

using namespace std;
struct vector3D
{
    double x , y , z ;

};

    ostream& operator<< (ostream& , vector3D&) ;
    istream& operator>> (istream&  , vector3D&) ;
    ostream& operator<< (ostream& output , vector3D& v) ;
    vector3D operator+(const vector3D& v, double d  ) ;
    vector3D operator-(double d, const vector3D& v ) ;
    bool operator!=(const vector3D& v1,const vector3D& v2) ;
    vector3D operator--(const vector3D& v);


ostream& operator<< (ostream& output , vector3D& v)
{
    output<< "(" <<v.x << "," << v.y << "," <<v.z << ")" ;
    return output ;

}


istream& operator>> (istream& input , vector3D& v )
{
    input>> v.x >> v.y >> v.z ;
    return input ;
}


vector3D operator+ (vector3D v1, vector3D v2 )
{
    vector3D v3 ;
    v3.x = v1.x + v2.x ;
    v3.y = v1.y + v2.y ;
    v3.z = v1.z + v2.z ;
    return v3 ;
}


vector3D operator+(const vector3D& v, double d ){
 vector3D v4;
 v4.x=v.x+d;
 v4.y=v.y+d;
 v4.z=v.z+d;
 return v4;
}


vector3D operator-(double d, const vector3D& v){
 vector3D v5;
 v5.x=d-v.x;
 v5.y=d-v.y;
 v5.z=d-v.z;
 return v5;
}


bool operator!=(const vector3D& v1,const vector3D& v2){
if(v1.x!=v2.x && v1.y!=v2.y && v1.z!=v2.z){
    return true ;
}
else
return false ;
}

/*
vector3D operator--(const vector3D& v){
vector3D v6 ;
v6.x = --v.x ;
v6.y = --v.y ;
v6.z = --v.z ;

return v6 ;
}
*/


int main()
{
    vector3D v[5];
    v[0]={0,0,0};

    cout << " input v1 : " ;

    cin >> v[1] ;
    cout << " input v2 : " ;
    cin >> v[2] ;

    v[3] = v[1]+v[2] ;
    cout << v[1] << " + " << v[2] << " = " << v[3] << "\n" ;

    v[4]=v[1]+100;
    cout << v[1] <<" + "<<100<<" = "<<v[4]<<"\n";

    v[5]=10-v[2];
    cout << 10<<" - "<<v[2]<<" = "<<v[5] << "\n";

    cout << "null vector v[0] =" << v[0]<<"\n";
   // cout << "--v[0]"<<"="<< v[0]-- <<"\n"; // could you please explain me why it dosen't work? Thanks !


    if(v[4]!=v[5]){
    cout << "vectors" << v[4] << "and " << v[5] <<"are not equal" << "\n";
    }
    else{
    cout << "vectors" << v[4] << " and " << v[5] << "are equal" << "\n";
    }
    return 0 ;
}
