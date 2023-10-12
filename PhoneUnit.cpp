//---------------------------------------------------------------------------

#pragma hdrstop

#include "PhoneUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iostream>

using namespace std;

// Phone empty constructor

Phone::Phone() {
  brand = "";
  model = "";
  year = 0;
  price = 0.f;
  count++;
}

// Phone constructor

Phone::Phone(string brand, string model, int year, int price) {
  this->brand = brand;
  this->model = model;
  this->year = year;
  this->price = price;
  count++;
}

// Phone destructor

Phone::~Phone() { count--; }

// Phone set methods

void Phone::setBrand(string brand) { this->brand = brand; }

void Phone::setModel(string model) { this->model = model; }

void Phone::setYear(int year) { this->year = year; }

void Phone::setPrice(float price) { this->price = price; }

// Phone get methods

string Phone::getBrand() const { return brand; }

string Phone::getModel() const { return model; }

int Phone::getYear() const { return year; }

float Phone::getPrice() const { return price; }

int Phone::getCount() { return count; }

double Phone::getPriceAfter() {
	return this->price - (this->price / 100. * 5 * 10);
}

double Phone::getPriceAfter(int year) {
	return this->price - (this->price / 100. * year * 10);
}

int Phone::count;