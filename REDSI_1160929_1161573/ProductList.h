#pragma once
class ProductList
{
public:
	ProductList();
	~ProductList();

	void getList(); //tem de se mudar o tipo de dados
	bool importdata();
	bool insertElement();
	bool updateElement();
	bool deleteElement();
	bool exportData();
	bool exportInsertData();
	bool exportUpdateData();
	bool exportDeleteData();

};

