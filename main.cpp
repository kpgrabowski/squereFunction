/* 
 * File:   main.cpp
 * Author: kamil
 *
 * Created on 22 lipca 2015, 20:06
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool menu ();

void  function(double a, double b);

void function(double a, double b, double c);


//double result[2];

int main (int argc, char** argv)
{
    while(!menu());
    return 0;
}

bool menu ()
{
    cout << "Witaj! To jest program liczący miejsce zerowe funkcji." << endl;
    cout << "Miejsce zerowe jakiej funkcji chesz obliczyć?" << endl;
    cout << "Jeżeli chcesz obliczyć miejsce zerowe funkcji linowej wybierz 0, jeśli funcji kwadratowej wybierz 1 " << endl;
    string Sselection;
    int Iselection;
    char Cselection;
    
    cin >> Sselection;
  /*  cin >> Iselection;                  
    cin >> Cselection;
            ;
    if(Iselection == 0)
        ;
    if(Cselection == '0')
        ;
   */
   if(Sselection ==  "0") 
   {
       double a;
       double b;
       cout << "Podaj 2 argumenty: " << endl;
       cout << "a = " ;
       cin >> a ;
       cout << "b = ";
       cin  >> b;
       
       function(a, b);
   }
    else if(Sselection ==  "1") 
    {
       double a;
       double b;
       double c;
       cout << "Podaj 3 argumenty: " << endl;
       cout << "a = " ;
       cin >> a ;
       cout << "b = ";
       cin  >> b;
       cout << "c = ";
       cin  >> c;
       
       function(a, b, c);
    }
    
    string wybor;
    cout << "Czy chcesz jeszcze raz? /t" << endl;
    cin >> wybor;
    return (wybor != "t");
}

void function(double a, double b )
{
    double x;
    
    x = -b/a;
    
    cout << "Jedno miejsce zerowe: " << x << endl;
}

void function(double a, double b, double c)
{
    double x1;
    double x2;
    
    double delta;
    
    delta = b*b - 4*a*c;
    
    if(delta < 0)
    {
        cout << "Brak miejsc zerowych" << endl;
    }
    else if(delta == 0)
    {
        x1 = x2 = -b/(2*a);
        
        cout << "Jedno podwójne miejsce zerowe: " << x1 << endl;
    }
    else if(delta > 0)
    {
        
        x1 = ( -b + sqrt(delta) ) / (2 * a);
        x2 = ( -b - sqrt(delta) ) / (2 * a);
        
        cout << "Dwa miejsca zerowe: " << x1 << " " << x2 << endl;
    }
    
   
}


