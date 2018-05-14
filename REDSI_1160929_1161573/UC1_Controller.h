#pragma once

#include <string>
#include "Loja.h"
#include "Login.h"


using namespace std;

class UC1_Controller{
public:
	UC1_Controller(Loja *l);
	~UC1_Controller();

	void newLogin();
	void setUsername(string usernme);
	void setPW(string pw);
	bool validateLogin();

private:
	Loja *loja;
	Login *login;
};