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
		Camara getcamara();
		list<Objetiva> getobjetivas();
		list<Flash> getflashs();
		list<Tripe> gettripes();
		string getDate();

		//sets
		void setCamara(Camara cam);
		bool addObjetiva(Objetiva obj);
		bool addFlash(Flash flash);
		bool addTripe(Tripe tripe);
		bool setDate(int d, int m, int y);

		//remove
		bool delObjetiva(Objetiva obj);
		bool delFlash(Flash flash);
		bool delTripe(Tripe tripe);


    private:
		Camara camara;
		list<Objetiva> objetivas;
		list<Flash> flashs;
		list<Tripe> tripes;

		int day;
		int month;
		int year;
};

#endif // TRABALHOFOTOGRAFICO_H
