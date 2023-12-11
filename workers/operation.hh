#pragma once
#include <iostream>
#include <string>
#include "chain.hh"
using namespace std;


class operation
{
public:
	list worker_list;

	void add();
	void load(worker tmp);
	void show();
	void delet(string nam);
	void change();
	void find();
	void sort();
	void clear();
};
