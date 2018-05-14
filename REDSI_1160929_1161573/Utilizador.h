#pragma once

#include <string>

using namespace std;

class Utilizador
{
    public:
        Utilizador();
        Utilizador(int id, string nome, int nContrib, string morada, int tlf, string email, int categoria);
        Utilizador(Utilizador &U);
        virtual ~Utilizador();

		//get
		int getID();
		string getNome();
		int getNContrib();
		string getMorada();
		int getTlf();
		string getEmail();
		int getCategoria();

		//set
		void setID(int i);
		void setNome(string n);
		void setNContrib(int nc);
		void setMorada(string m);
		void setTlf(int t);
		void setEmail(string e);
		void setCategoria(int c);
		
		string toString(bool condensed = false);
		string toStringFull();
		string toStringCons();

		bool importProfile(int id);
		bool getUserData();

		bool operator == (Utilizador *u) const;

    private:
		int id;
		string nome;
		int nContrib;
		string morada;
		int tlf;
		string email;
		int categoria;
};


