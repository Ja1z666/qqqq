//---------------------------------------------------------------------------

#ifndef PhoneUnitH
#define PhoneUnitH
//---------------------------------------------------------------------------
#include <iostream>

using namespace std;

enum Brand { Apple, Samsung, Xiaomi, None };

enum Event { XiaomiCreateImposibleGadget, AllBrandsBankrupt };

class Phone {
private:
  Brand brand;
  string model;
  int year;
  int price;
  static int count;

public:
  Phone();
  Phone(Brand brand, string model, int year, int price);
  ~Phone();

  void setBrand(Brand brand);
  void setModel(string model);
  void setYear(int year);
  void setPrice(int price);

  Brand getBrand() const;
  string getModel() const;
  int getYear() const;
  int getPrice() const;
  static int getCount();

  double getPriceAfter(int year);
  double getPriceAfter(Event event);
};
#endif
