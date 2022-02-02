/**********************************************************************
Matr.-Nr:  3086452
Nachname/Surname: Mohammed
Vorname/Given name: Badie
Uni-Email:badie.mohammed@stud.uni-due.de
Studiengang/Course of studis: computer engineering ISE
**********************************************************************/
#include <iostream>

using namespace std;
const int n = 4;
class DualSim
{
private:
    bool bit[n];
public:
    DualSim()
    {
        for (int i = 0; i < n; i++)
            bit[i] = false;
    }
    friend ostream& operator<< (ostream&, const DualSim&);
    friend istream& operator>> (istream&, DualSim&);
    friend DualSim operator! (DualSim&);
    friend DualSim operator++ (DualSim&);
    friend DualSim operator+ (DualSim&, DualSim&);
};
ostream& operator<<(ostream& output,const DualSim& arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr.bit[i] == true)  output << "1";

        else if (arr.bit[i] == false)
            output << "0";
    }

    return output;
}
istream& operator>>(istream& input, DualSim& arr)
{
    for (int i = 0; i < n; i++)
    {
        char d;
        input >> d;
        if (d == '1')  arr.bit[i] = true;
        else if (d == '0')  arr.bit[i] = false;
    }
    return input;
}
DualSim operator !(DualSim& arr)
{
    DualSim neg;
    for (int i = 0; i < n; i++)
        if (arr.bit[i] == true)
            neg.bit[i] = false;
        else if (arr.bit[i] == false)
            neg.bit[i] = true;
    return neg;
}
DualSim operator ++(DualSim& arr)
{
    bool carry = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr.bit[i] == false && carry == true)
        {
            arr.bit[i] = true;
            carry = false;
        }
        else if (arr.bit[i] == true && carry == true)
            arr.bit[i] = false;
    }
    return arr;
}
DualSim operator+ (DualSim& d1, DualSim& d2)
{
    DualSim result;
    bool carry = false;
    for (int i = n-1; i>=0; i--)
    {
        if (d1.bit[i] == false && d2.bit[i] == false && carry == false)
        {
            result.bit[i] = false;
            carry = false;
        }
        else if (d1.bit[i] == false && d2.bit[i] == false && carry == true)
        {
            result.bit[i] = true;
            carry = false;
        }
        else if (d1.bit[i] == true && d2.bit[i] == true && carry == false)
        {
            result.bit[i] = false;
            carry = true;
        }
        else if (d1.bit[i] == true && d2.bit[i] == true && carry == true)
        {

            result.bit[i] = true;
            carry = true;
        }
        else if (d1.bit[i] == true && d2.bit[i] == false && carry == true)
        {
            result.bit[i] = false;
            carry = true;
        }
        else if (d1.bit[i] == true && d2.bit[i] == false && carry == false)
        {
            result.bit[i] = true;
            carry = false;
        }
        else if (d1.bit[i] == false && d2.bit[i] == true && carry == true)
        {

            result.bit[i] = false;
            carry = true;
        }

        else if (d1.bit[i] == false && d2.bit[i] == true && carry == false)
        {

            result.bit[i] = true;
            carry = false;
        }
    }
    return result;
    }
        int main()
        {
            cout << "simulation of dual numbers with " << n << " bits" << endl;
            DualSim d0, d1, d2, d3, d4, d5, d6, d7;
            cout << "input d1:" << endl;
            cin >> d1;
            cout << "input d2:" << endl;
            cin >> d2;
            cout << "d0: " << d0 << endl
                << "d1: " << d1 << endl
                << "d2: " << d2 << endl;
            d3 = !d1;
            d4 = !d2;
            cout << "    negation" << endl
                << "d3: " << d3 << endl
                << "d4: " << d4 << endl;
            d5 = d1 + d2;
            cout << "    addition" << endl
                << "d1: " << d1 << endl
                << "d2: " << d2 << endl
                << "d5: " << d5 << endl;
            d6 = d1 + d3;
            cout << "    addition" << endl
                << "d1: " << d1 << endl
                << "d3: " << d3 << endl
                << "d6: " << d6 << endl;
            d7 = d1 + d4;
            cout << "    addition" << endl
                << "d1: " << d1 << endl
                << "d4: " << d4 << endl
                << "d7: " << d7 << endl;
            cout << "pre incrementing d0" << endl;
            for (int k = 1; k <= 20; k++)
                cout << ++d0 << endl;
            return 0;
        }
