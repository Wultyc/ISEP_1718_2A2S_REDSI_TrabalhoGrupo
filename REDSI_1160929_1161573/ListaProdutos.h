#ifndef LISTAPRODUTOS_H
#define LISTAPRODUTOS_H


class ListaProdutos
{
    public:
        ListaProdutos();
        virtual ~ListaProdutos();

		void getList(); //tem de se mudar o tipo de dados
		bool importdata();
		bool insertElement();
		bool updateElement();
		bool deleteElement();
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();

    protected:

    private:
};

#endif // LISTAPRODUTOS_H
