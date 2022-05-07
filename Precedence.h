//Precedence Class
//This class contains the three functions that you need to check and fix for errors, most of which are precendence related

#include <iostream>
#include <cmath>
using namespace std;

class Precedence
{
  private:

  public:
    Precedence(){} //CONSTRUCTOR -- Don't need to touch this

    //Complete the first quadratic formula function below
    double quadratic1(double a, double b, double c)
    {
      double ans = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
      return ans;
    }

    //Complete the second quadratic formula funtion below
    double quadratic2(double a, double b, double c)
    {
      double ans = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
      return ans;
    }
 
    //Should return true if the time (double) is within half of the limit (double). If time is at or over half the limit, false should be returned
    //Precondition: Numbers will always be positive
    bool timeLimit(double time, double limit)
    {
      return time <= (limit/2.0);
    }

    //Should correctly calculate the volumes of three shapes - a sphere, a cone, and a triangular pyramid, and return the sum of the volumes, using the given values
    /*Givens: rS = radius of sphere
              rC = radius of cone
              hC = height of cone
              baP = base area of pyramid
              hP = height of pyramid
    */
    double shapeVolumes(int rS, int rC, int hC, int baP, int hP)
    {
      double sphere = (4/3.0) * 3.14 * (pow(rS,3));
      double cone = 3.14 * pow(rC, 2) * (hC/3.0);
      double pyramid = (1/3.0)*baP*hP;
      return sphere + cone + pyramid;
    }
    
};