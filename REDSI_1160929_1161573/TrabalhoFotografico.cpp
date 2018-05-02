#include "TrabalhoFotografico.h"
#include "stdafx.h"

TrabalhoFotografico::TrabalhoFotografico()
{
    //ctor
}

TrabalhoFotografico::~TrabalhoFotografico()
{
    //dtor
}

Camara TrabalhoFotografico::getcamara()
{
	return Camara();
}

list<Objetiva> TrabalhoFotografico::getobjetivas()
{
	return list<Objetiva>();
}

list<Flash> TrabalhoFotografico::getflashs()
{
	return list<Flash>();
}

list<Tripe> TrabalhoFotografico::gettripes()
{
	return list<Tripe>();
}

string TrabalhoFotografico::getDate()
{
	return string();
}

void TrabalhoFotografico::setCamara(Camara cam)
{
	
}

bool TrabalhoFotografico::addObjetiva(Objetiva obj)
{
	return false;
}

bool TrabalhoFotografico::addFlash(Flash flash)
{
	return false;
}

bool TrabalhoFotografico::addTripe(Tripe tripe)
{
	return false;
}

bool TrabalhoFotografico::setDate(int d, int m, int y)
{
	return false;
}

bool TrabalhoFotografico::delObjetiva(Objetiva obj)
{
	return false;
}

bool TrabalhoFotografico::delFlash(Flash flash)
{
	return false;
}

bool TrabalhoFotografico::delTripe(Tripe tripe)
{
	return false;
}
