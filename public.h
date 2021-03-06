// Header file for get-function helpers

#ifndef STORE_PUBLIC_H
#define STORE_PUBLIC_H

#include <iostream>
#include <string>
#include "Item.h"
#include "Customer.h"
#include "List.h"

using namespace std;

// Enums for different types of functions
enum functionType{listMgtFuncs, itemTypes, itemFields, customerFields, editOrDelete, itemOrCustomer, customerLevels};

const int EXIT = 999;

// Return user's desired function
int getFunction(functionType type);

// Let user edit or delete an item
int getEditOrDeleteFunction();

// Convert a string to lowercase
string toLowerCase(string s);

// Get non-empty input as string
string getNonEmptyInput();

#endif //STORE_PUBLIC_H
