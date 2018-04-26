#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "Utilizador.h"

using namespace std;

class Login
{
    public:
        Login();
        virtual ~Login();

		//get
		Utilizador getUser();
		string getUsername();
		string getPassword();

		//set
		void setUser(Utilizador us);
		void setUsername(string un);
		void setPassword(string pw);

    private:
		Utilizador user;
		string username;
		string password;
};

#endif // LOGIN_H
