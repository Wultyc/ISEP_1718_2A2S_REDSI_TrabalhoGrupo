#include "Loja.h"
#include "stdafx.h"

Loja::Loja()
{
    //ctor
}

Loja::~Loja()
{
    //dtor
}

Pesquisa Loja::getPesquisa()
{
	return Pesquisa();
}

Login Loja::getLogin_ativo()
{
	return Login();
}

ListaCamaras Loja::getCamaras()
{
	return ListaCamaras();
}

ListaObjetivas Loja::getObjetivas()
{
	return ListaObjetivas();
}

ListaFlash Loja::getFlashs()
{
	return ListaFlash();
}

ListaTripe Loja::getTripes()
{
	return ListaTripe();
}

ListaStock Loja::getStocks()
{
	return ListaStock();
}

void Loja::getPesquisa(Pesquisa p)
{
}

void Loja::getLogin_ativo(Login la)
{
}

void Loja::getCamaras(ListaCamaras lc)
{
}

void Loja::getObjetivas(ListaObjetivas lo)
{
}

void Loja::getFlashs(ListaFlash lf)
{
}

void Loja::getTripes(ListaTripe lt)
{
}

void Loja::getStocks(ListaStock ls)
{
}
