#ifndef FLASH_H
#define FLASH_H

#include <string>

using namespace std;

class Flash
{
    public:
        Flash();
        virtual ~Flash();

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // FLASH_H
