#include "stdafx.h"
#include "UC1_Controller.h"


UC1_Controller::UC1_Controller(Loja *l){
	loja = l;
}


UC1_Controller::~UC1_Controller(){
}

void UC1_Controller::newLogin(){
	login = &loja->newLogin();
}

void UC1_Controller::setUsername(string usernme){
	login->setUsername(usernme);
}

void UC1_Controller::setPW(string pw){
	login->setPassword(pw);
}

bool UC1_Controller::validateLogin(){
	//Codigo SQL
	return login->validateLogin();;
}
