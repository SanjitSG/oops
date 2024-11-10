#include <bits/stdc++.h>

using namespace std;

class Car
{
public:
  string color;
  void startEngine()
  {
    cout << "Engine Started" << endl;
  }
};

class Ferrari : public Car
{
public:
  string name;
  void carDetails()
  {
    cout << "Car details: " << name << " with color " << color << endl;
  }
};

int main()
{
  Ferrari newFerrari;
  newFerrari.color = "Red";
  newFerrari.name = "SF90";

  newFerrari.carDetails();
  newFerrari.startEngine();

  return 0;
}
