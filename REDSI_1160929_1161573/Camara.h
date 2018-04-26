#ifndef CAMARA_H
#define CAMARA_H

#include <string>

using namespace std;

class Camara
{
    public:
        Camara();
        virtual ~Camara();

    private:
		int id;
		string marca;
		string modelo;
		string sensor;
		float peso;
};

#endif // CAMARA_H
