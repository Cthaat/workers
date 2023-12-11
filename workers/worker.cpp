#define _CRT_SECURE_NO_WARINGS 1
#include "worker.hh"
#include "all.hh"


void worker::getjob(int ID, string name, int job)
{
	this->ID = ID;
	this->name = name;
	this->job = job;
}

void worker::show()
{
	cout << "ID:" << ID << "name:" << name << "job:" << job << endl;
}