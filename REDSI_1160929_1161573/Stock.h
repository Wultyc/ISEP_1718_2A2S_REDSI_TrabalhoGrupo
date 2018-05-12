#ifndef STOCK_H
#define STOCK_H

#include <string>
#include "Utilizador.h"
#include "Produto.h"

using namespace std;

class Stock
{
    public:
        Stock();
		Stock(int i, Utilizador v, Produto p, float pc, bool n, int ur);
		Stock(Stock &s);
        virtual ~Stock();

		//get
		int getID();
		Utilizador getVendedor();
		Produto getProduto();
		float getPreco();
		bool isNovo();
		int getUnRestantes();

		//set
		void setID(int i);
		void setVendedor(Utilizador *v);
		void setProduto(Produto *p);
		void setPreco(float p);
		void setNovo(bool n);
		void setUnRestantes(int ur);
		
		string toString(bool condensed = false);
		string toStringFull();
		string toStringCons();

		bool operator == (Stock *s) const;

    private:
		int id;
	
		Utilizador *vendedor;
		Produto *produto;

		float preco;
		bool novo;
		int unRestantes;
};

#endif // STOCK_H
