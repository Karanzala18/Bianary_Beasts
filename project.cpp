#include<iostream>
#include<cmath>
using namespace std;
class equation
{
    float a,b,c,D,x1,x2,real,imaginary;
public:
//member function to get quadratic equation
    void putdata()
    {
        cout<<endl<<"The Quadratic Equation is in the format of ax^2 + bx + c = 0"<<endl;
        cout<<"Enter the number a:";
        cin>>a;
        cout<<"Enter the number b:";
        cin>>b;
        cout<<"Enter the number c:";
        cin>>c;
        cout<<endl<<"Your Quadratic Equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    }

//member function to solve quadratic equation
    void discriminant()
    {
        D=((b*b)-4*a*c);
        if(a==0 && b==0 && c==0)
        {
            cout<<"This is not a equation "<<endl;
        }
        else if(a==0 && b==0 && c!=0)
        {
            cout<<"Invalid "<<endl;
        }

        else if(a==0)  //if a=0 then quadratic equation is linear equation
        {
            cout<<"The given equation is linear equation."<<endl;
        }
        else if(a!=0)
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
            else if(D == 0)
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
    }while( d=='y' or d=='Y' );
    return 0;
}
