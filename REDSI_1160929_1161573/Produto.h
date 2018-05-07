#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

using namespace std;

class Produto
{
    public:
        Produto();
        virtual ~Produto();

		virtual string toString(bool n);
		virtual int getID();
		virtual string getMarca();
		virtual string getModelo();


    private:
		
};

#endif // PRODUTO_H
