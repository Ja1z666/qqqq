//---------------------------------------------------------------------------

#pragma hdrstop

#include "PhoneUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iostream>

using namespace std;

// Phone empty constructor

Phone::Phone() {
  brand = Brand::None;
  model = "";
  year = 0;
  price = 0;
  count++;
}

// Phone constructor

Phone::Phone(Brand brand, string model, int year, int price) {
  this->brand = brand;
  this->model = model;
  this->year = year;
  this->price = price;
  count++;
}

Phone::~Phone() { count--; }

// Phone set methods

void Phone::setBrand(Brand brand) { this->brand = brand; }

void Phone::setModel(string model) { this->model = model; }

void Phone::setYear(int year) { this->year = year; }

void Phone::setPrice(int price) { this->price = price; }

// Phone get methods

Brand Phone::getBrand() const { return brand; }

string Phone::getModel() const { return model; }

int Phone::getYear() const { return year; }

int Phone::getPrice() const { return price; }

int Phone::getCount() { return count; }

double Phone::getPriceAfter(int year) {
  return this->price - (this->price / 100. * year * 10);
}

double Phone::getPriceAfter(Event event) {
  if(event == Event::XiaomiCreateImposibleGadget) {
    return this->price / 100. * 5;
  } else {
    return this->price * 2.3;
  }
}

int Phone::count;