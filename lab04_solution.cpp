#include <iostream>
#include <string>  
#include <sstream>
using namespace std;

// Exercise 1:
std::ostringstream out1; 

class Flower
{
public:
   string bloomtime="Spring";
   Flower()
   {
      out1 << "Hello, Flower!" << endl;
   }

   void print_bloomtime()
   {
      out1 << "Bloom time: " << bloomtime << endl;
   }
};

class Rose : public Flower
{
public:
   string fragrance="Strong";

   Rose()
   {
      out1 << "Hello, Rose!" << endl;
   }

   void print_fragrance(){ 
      out1 << "Fragrance: " << fragrance << endl;
   }

};

std::string ex1() {
   Rose rose;
   rose.bloomtime = "Summer";
   rose.fragrance = "Rosy";
   rose.print_bloomtime();
   rose.print_fragrance();

   return out1.str();
}

// ----------------------------------------------------------------
// Exercise 2:
std::ostringstream out2;
using namespace std;

class Area {
public:
    int getArea(int l, int w) {
        return l * w;
    }
};

class Perimeter {
public:
    int getPerimeter(int l, int w) {
        return 2 * (l + w);
    }
};

class Rectangle : public Area, public Perimeter {   
public:
    int length;
    int width;

    Rectangle() {
        length = 7;
        width = 4;
    }

    int calcArea() {
        return Area::getArea(length, width);
    }

    int calcPerimeter() {
        return Perimeter::getPerimeter(length, width);
    }
};

string ex2() {
    Rectangle rect;
    out2 << "Area: " << rect.calcArea() << endl;
    out2 << "Perimeter: " << rect.calcPerimeter() << endl;
    return out2.str();
}

int main(){
    cout << "Exercise 1:" << endl;
    cout << ex1() << endl;
    cout << "Exercise 2:" << endl;
    cout << ex2() << endl;
  
}