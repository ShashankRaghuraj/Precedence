//lastName_PrecedenceAssignment
//This is the runner file -- Use it to test the precedence functions from the Precendence class

#include <iostream>
#include <cmath>
#include "Precedence.h"
using namespace std;

int main() 
{  
  bool flag = true;
  do
  {
    Precedence p = Precedence();
    int choice;
    cout << "What would you like to do: \n1) Test Quadratic \n2) Test Time Limit \n3) Test Shape Volumes\n \n0) Exit\n>>";
    cin >> choice;
    if(choice == 1)
    {
      double a,b,c;
      cout << "Enter A Value: ";
      cin >> a;
      cout << "Enter B Value: ";
      cin >> b;
      cout << "Enter C Value: ";
      cin >> c;
      cout << "There are two answers:\n1) "  << p.quadratic1(a, b, c) << "\n2)" << p.quadratic2(a, b, c) << endl;
    }
    else if(choice == 2)
    {
      int time, limit;
      cout << "Enter time: ";
      cin >> time;
      cout << "Enter limit: ";
      cin >> limit;

      if(p.timeLimit(time, limit) == 0)
      {
        cout << "true\n";
      }
      else
      {
        cout << "false\n";
      }
    }
    else if(choice == 3)
    {
      int rS, rC , hC, baP , hP;
;
      cout << "Enter Radius of Sphere: ";
      cin >> rS;
      cout << "Enter Radius of Cone: ";
      cin >> rC;
      cout << "Enter Height of cone: ";
      cin >> hC;
      cout << "Enter Base area of pyramid: ";
      cin >> baP;
      cout << "Enter height of pyramid: ";
      cin >> hP;

      cout << "Sum of volumes is " << p.shapeVolumes(rS,  rC,  hC,  baP,  hP); 
    }
    else
    {
      flag = false;
    }
  }
  while(flag);
}