#ifndef TRIPE_H
#define TRIPE_H

#include <string>

using namespace std;

class Tripe
{
    public:
        Tripe();
        virtual ~Tripe();

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // TRIPE_H
