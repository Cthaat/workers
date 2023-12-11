#pragma once
#include <iostream>
#include <string>
using namespace std;

class worker
{
public:
	void show();
	void getjob(int ID, string name, int job);

	int ID;
	string name;
	int job;
};

