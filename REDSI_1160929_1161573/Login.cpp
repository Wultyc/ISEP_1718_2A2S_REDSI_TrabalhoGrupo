#include "Login.h"
#include "stdafx.h"

using namespace std;

Login::Login(){
    //ctor
}

Login::Login(string un, string pw){
	setUsername(un);
	setPassword(pw);
}

Login::~Login(){
    //dtor
}

Utilizador Login::getUser(){
	return *user;
}

string Login::getUsername(){
	return username;
}

string Login::getPassword(){
	return password;
}

void Login::setUser(Utilizador *us){
	user = us;
}

void Login::setUsername(string un){
	username = un;
}

void Login::setPassword(string pw){
	password = pw;
}

bool Login::validateLogin(){
	return false;
}
