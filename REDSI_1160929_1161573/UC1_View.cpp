#include "stdafx.h"
#include "UC1_View.h"


UC1_View::UC1_View(Loja *l){
	loja = l;
}


UC1_View::~UC1_View(){
}


void UC1_View::start() {
	string un, pw;
	bool valid = false;
	cout << "Username: ";
	cin >> un;
	c->setUsername(un);

	cout << "Password: ";
	cin >> pw;
	c->setPW(pw);

	valid = c->validateLogin();

	while (valid == false) {
		cout << "Username ou password errado" << endl << "Username: ";
		cin >> un;
		c->setUsername(un);

		cout << "Password: ";
		cin >> pw;
		c->setPW(pw);

		valid = c->validateLogin();
	}
}