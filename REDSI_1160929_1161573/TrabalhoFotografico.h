#ifndef TRABALHOFOTOGRAFICO_H
#define TRABALHOFOTOGRAFICO_H

#include <string>
#include <vector>
#include "Utilizador.h"
#include "Camara.h"
#include "Objetiva.h"
#include "Flash.h"
#include "Tripe.h"

using namespace std;

class TrabalhoFotografico
{
    public:
		TrabalhoFotografico();
        virtual ~TrabalhoFotografico();

		//gets
		int getID();
		Camara getcamara();
		Utilizador getUtilizador();
		vector<Objetiva> getobjetivas();
		vector<Flash> getflashs();
		vector<Tripe> gettripes();
		string getDate();

		//sets
		void setID(int i);
		void setUtilizador(Utilizador *u);
		void setCamara(Camara *cam);
		void addObjetiva(Objetiva *obj);
		void addFlash(Flash *flash);
		void addTripe(Tripe *tripe);
		void setDate(int d, int m, int y);

		//remove
		void delObjetiva(Objetiva *obj);
		void delFlash(Flash *flash);
		void delTripe(Tripe *tripe);

		bool operator == (TrabalhoFotografico *t) const;


    private:
		int id;
		Utilizador *utilizador;

		Camara *camara;
		vector<Objetiva> *objetivas;
		vector<Flash> *flashs;
		vector<Tripe> *tripes;

		int day;
		int month;
		int year;
};

#endif // TRABALHOFOTOGRAFICO_H
