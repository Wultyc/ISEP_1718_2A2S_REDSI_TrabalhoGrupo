//#ifndef UI_UTILS_H
//#define UI_UTILS_H

#include <iostream>
#include <string>
//#include "TextTable.h"

class ui_utils
{
    public:
        ui_utils();
        virtual ~ui_utils();


        string read();
        void print();

        void newpage();
        void newdiv();

        int showMenu();
        void showList();
        void selectFlist();
        string ask_question();
        bool yn_question();
        int opt_question();

        string makeDivisor();
        string makeNewPage();

    protected:

    private:
        int height;
        int width;
        string divisor;
        string newpage;
};

//#endif // UI_UTILS_H
