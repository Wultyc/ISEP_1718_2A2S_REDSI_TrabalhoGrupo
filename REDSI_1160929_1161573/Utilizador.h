#ifndef UTILIZADOR_H
#define UTILIZADOR_H

#include <string>

using namespace std;

class Utilizador
{
    public:
        Utilizador();
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

    private:
		int id;
		string nome;
		int nContrib;
		string morada;
		int tlf;
		string email;
		int categoria;
};

#endif // UTILIZADOR_H
