#pragma once

#include <string>
#include <iostream>
#include "Loja.h"
#include "UC2_Controller.h"

class UC2_View
{
public:
	UC2_View(Loja *l);
	~UC2_View();
	void start();

private:
	Loja *loja;
	UC2_Controller *c;
	string tipo;
	vector<string> *param;
};

