#ifndef TRABALHOFOTOGRAFICO_H
#define TRABALHOFOTOGRAFICO_H

#include <string>
#include <list>
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
		list<Objetiva> getobjetivas();
		list<Flash> getflashs();
		list<Tripe> gettripes();
		string getDate();

		//sets
		void setID(int i);
		void setCamara(Camara cam);
		void addObjetiva(Objetiva obj);
		void addFlash(Flash flash);
		void addTripe(Tripe tripe);
		void setDate(int d, int m, int y);

		//remove
		void delObjetiva(Objetiva obj);
		void delFlash(Flash flash);
		void delTripe(Tripe tripe);

		bool operator == (TrabalhoFotografico *t) const;


    private:
		int id;

		Camara camara;
		list<Objetiva> objetivas;
		list<Flash> flashs;
		list<Tripe> tripes;

		int day;
		int month;
		int year;
};

#endif // TRABALHOFOTOGRAFICO_H
