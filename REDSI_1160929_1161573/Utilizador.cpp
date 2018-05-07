#include "Utilizador.h"
#include "stdafx.h"

Utilizador::Utilizador(){
    //ctor
}

Utilizador::Utilizador(int id, string nome, int nContrib, string morada, int tlf, string email, int categoria){
    //ctor
	setID(id);
	setNome(nome);
	setNContrib(nContrib);
	setMorada(morada);
	setTlf(tlf);
	setEmail(email);
	setCategoria(categoria);
}

Utilizador::Utilizador(Utilizador &U){
    //ctor
	setID(U.getID());
	setNome(U.getNome());
	setNContrib(U.getNContrib());
	setMorada(U.getMorada());
	setTlf(U.getTlf());
	setEmail(U.getEmail());
	setCategoria(U.getCategoria());
}

Utilizador::~Utilizador(){
    //dtor
}

int Utilizador::getID(){
	return id;
}

string Utilizador::getNome(){
	return nome;
}

int Utilizador::getNContrib(){
	return nContrib;
}

string Utilizador::getMorada(){
	return morada;
}

int Utilizador::getTlf(){
	return tlf;
}

string Utilizador::getEmail(){
	return email;
}

int Utilizador::getCategoria(){
	return categoria;
}

void Utilizador::setID(int i){
	id = i;
}

void Utilizador::setNome(string n){
	nome = n;
}

void Utilizador::setNContrib(int nc){
	nContrib = nc;
}

void Utilizador::setMorada(string m){
	morada = m;
}

void Utilizador::setTlf(int t){
	tlf = t;
}

void Utilizador::setEmail(string e){
	email = e;
}

void Utilizador::setCategoria(int c){
	categoria = cat;
}

string Utilizador::toString(bool condensed){
	return condensed ? toStringCons() : toStringFull();
}

string Utilizador::toStringFull(){
	string r;

	r =  "ID: " + getID();
	r += "\nNome: " + getNome();
	r += "\nN Contrib.: " + to_string(getNContrib());
	r += "\nMorada: " + getMorada();
	r += "\nTlf: " + to_string(getTlf()) + "g";
	r += "\nEmail: " + getEmail() + "g";
	r += "\nCategoria: " + getCategoria() ? "Cliente" : "Vendedor";

	return r;
}

string Utilizador::toStringCons(){
	string r;

	r = getID();
	r += "\t| " + getNome();
	r += "\t| " + to_string(getNContrib());
	r += "\t| " + getMorada();
	r += "\t| " + to_string(getTlf());
	r += "\t| " + getEmail();
	r += "\t| " + getCategoria() ? "Vendedor" : "Cliente";

	return r;
}