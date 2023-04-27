#include<iostream>
#include<cmath>
using namespace std;
class equation
{
    float a,b,c,D,x1,x2,real,imaginary;
public:
    void putdata()
    {
        cout<<"The Quadratic Equation is in the format of ax2 + bx + c = 0"<<endl;
        cout<<"Enter the number a:";
        cin>>a;
        cout<<"Enter the number b:";
        cin>>b;
        cout<<"Enter the number c:";
        cin>>c;
        cout<<"Your Quadratic Equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    }
    void discriminant()
    {
        D=((b*b)-4*a*c);
        if(a==0)
        {
            cout<<"The given equation is linear equation."<<endl;
        }
        if(a!=0)
        {
            cout<<"The roots of the given equation is:"<<endl;
            if(D>0)
            {
                x1 = (-b + sqrt(D))/(2*a);
                x2 = (-b - sqrt(D))/(2*a);
                cout<<"Roots are real and different"<<endl;
                cout<<"x1 = "<<x1<<endl;
                cout<<"x2 = "<<x2<<endl;
            }
            else if(D<0)
            {
                real = -b/(2*a);
                imaginary = sqrt(-D)/(2*a);
                cout<<"Roots are complex."<<endl;
                cout<<"x1 = "<<real<< " + " <<"("<<imaginary<<")"<< "i" <<endl;
                cout<<"x2 = "<<real<< " - " <<"("<<imaginary<<")"<< "i" <<endl;
            }
            else if(D==0)
            {
                x1 = -b/(2*a);
                cout<<"Roots are real and same"<<endl;
                cout<<"x1 = x2 = "<<x1<<endl;
            }
        }

    }

};
int main()
{
    equation e;
    char d;
    do
    {
    e.putdata();
    e.discriminant();
    cout <<"Do you want to find more roots(y/n):";
    cin>>d;
    }while(d=='y' or d=='Y');
    return 0;
}
