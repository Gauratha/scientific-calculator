#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double toRadians(double deg)
{
    return deg * PI / 180.0;
}

double factorial(int n)
{
    if(n < 0) return -1;
    double fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void show_calculator()
{
    cout<<"-----------------------------------------\n";
    cout<<"-------- SCIENTIFIC CALCULATOR ----------\n";
    cout<<"-----------------------------------------\n";
    cout<<"+  Add      -  Subtract   *  Multiply\n";
    cout<<"/  Divide   m  Mod        L  Log\n";
    cout<<"S  Square   C  Cube       p  Power\n";
    cout<<"s  sin      c  cos        t  tan\n";
    cout<<"r  sqrt     !  factorial\n";
    cout<<"A  M+       R  MR         Z  MC\n";
    cout<<"k  clear    .  exit\n";
    cout<<"-----------------------------------------\n";
}

void display_output(double ans)
{
    cout<<"\n========= RESULT =========\n";
    cout<<"Answer: "<<ans<<endl;
    cout<<"==========================\n";
}
int main()
{
    double num1 = 0.0, num2 = 0.0;
    double answer = 0.0;
    double memory = 0.0;

    char input;
    bool result = false;

    while(true)
    {
        show_calculator();

        cout<<"Enter operation: ";
        cin>>input;

        if(input == '.') break;

        if(result && input != 'k')
        {
            num1 = answer;
        }
        else if(input != 'A' && input != 'R' && input != 'Z' && input != 'k')
        {
            cout<<"Enter num1: ";
            cin>>num1;
        }

        if(input=='+' || input=='-' || input=='*' || input=='/' || input=='m' || input=='p')
        {
            cout<<"Enter num2: ";
            cin>>num2;
        }

        switch(input)
        {
            case '+': answer = num1 + num2;
                    break;

            case '-': answer = num1 - num2;
                    break;

            case '*': answer = num1 * num2;
                    break;

            case '/':if(num2 != 0)
                        answer = num1 / num2;
                    else
                    {
                        cout<<"Error: Division by zero\n";
                        continue;
                    }
                    break;

            case 'm':if((int)num2 != 0)
                        answer = (int)num1 % (int)num2;
                    else
                    {
                        cout<<"Error: Modulo by zero\n";
                        continue;
                    }
                    break;

            case 'L':if(num1 > 0)
                        answer = log(num1);
                    else
                    {
                        cout<<"Error: Invalid log\n";
                        continue;
                    }
                    break;

            case 'S': answer = num1 * num1;
                    break;

            case 'C': answer = num1 * num1 * num1;
                    break;

            case 'p': answer = pow(num1, num2);
                    break;

            case 's': answer = sin(toRadians(num1));
                    break;

            case 'c': answer = cos(toRadians(num1));
                    break;

            case 't': answer = tan(toRadians(num1));
                    break;

            case 'r':if(num1 >= 0)
                        answer = sqrt(num1);
                     else
                     {
                        cout<<"Error: Negative sqrt\n";
                        continue;
                    }
                    break;

            case '!':answer = factorial((int)num1);
                     if(answer < 0)
                     {
                        cout<<"Error: Invalid factorial\n";
                        continue;
                    }
                     break;

            case 'A':memory = answer;
                     cout<<"Stored in memory\n";
                     continue;

            case 'R':answer = memory;
                     break;

            case 'Z': memory = 0; 
                      cout<<"Memory cleared\n";
                      continue;

            case 'k':result = false;
                     continue;

            default:cout<<"Invalid Operation!\n";
                    continue;
        }

        result = true;
        display_output(answer);
    }
    return 0;
}
