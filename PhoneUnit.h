//---------------------------------------------------------------------------

#ifndef PhoneUnitH
#define PhoneUnitH
//---------------------------------------------------------------------------
#include <iostream>

using namespace std;

enum Event { XiaomiCreateImposibleGadget, AllBrandsBankrupt };

class Phone {
private:
  string brand;
  string model;
  int year;
  int price;
  static int count;

public:
  Phone();
  Phone(string brand, string model, int year, int price);
  ~Phone();

  void setBrand(string brand);
  void setModel(string model);
  void setYear(int year);
  void setPrice(int price);

  string getBrand() const;
  string getModel() const;
  int getYear() const;
  int getPrice() const;
  static int getCount();

  double getPriceAfter(int year);
  double getPriceAfter(Event event);
};
#endif
