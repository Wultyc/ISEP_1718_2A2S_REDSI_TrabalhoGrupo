#pragma once

#include <string>
#include <iostream>
#include "Loja.h"
#include "UC1_Controller.h"

using namespace std;

class UC1_View
{
public:
	UC1_View(Loja *l);
	~UC1_View();
	void start();
private:
	Loja * loja;
	UC1_Controller *c;
};
