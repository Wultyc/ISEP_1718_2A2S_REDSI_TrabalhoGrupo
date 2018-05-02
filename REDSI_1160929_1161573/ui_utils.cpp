#include<iostream>
#include <string>
#include "ui_utils.h"
#include "stdafx.h"

using namespace std;

ui_utils::ui_utils(){
    //ctor
    height = 25;
    width = 80;
    divisor = makeDivisor();
    newpage = makeNewPage();
}

//ui_utils::~ui_utils(){
    //dtor
//}


string ui_utils::read(){
    //lê algo
    return "";
}

void ui_utils::print(){
    //imprime algo
}


void ui_utils::newPage(){
    //nova pagina
}

void ui_utils::newDiv(){
    //nova divisória
}

int ui_utils::showMenu(){
    //mostra o menu
    return 0;
}

void ui_utils::showList(){
    //apresenta uma lista
}

void ui_utils::selectFlist(){
    //apresenta de uma lista e pede que selecione
}

string ui_utils::ask_question(){
    //imprime umapergunta e espra a resposta
    return "";
}

bool ui_utils::yn_question(){
    //imprime uma pergunta de sim ou Não
    return true;
}

int ui_utils::opt_question(){
    //imprime uma pergunta e apresenta um conjunto de opções possives de reposta
    return 0;
}

string ui_utils::makeDivisor(){
    int i = 0;
    string r = "";

    for(i = 0; i< width; i++){
        r += "=";
    }
    return r;
}

string ui_utils::makeNewPage(){
    int i = 0;
    string r = "";

    for(i = 0; i< height*2; i++){
        r += "\n";
    }
    return r;
}

