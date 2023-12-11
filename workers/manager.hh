#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "chain.hh"
#include "operation.hh"
using namespace std;

class manager  : public operation
{
public:
	void welcom();
	void save(node * head);
	void mload();
	void exit();
};
