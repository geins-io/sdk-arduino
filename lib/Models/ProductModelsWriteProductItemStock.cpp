

#include "Product.Models.Write.ProductItemStock.h"

using namespace Tiny;

Product.Models.Write.ProductItemStock::Product.Models.Write.ProductItemStock()
{
	id = std::string();
	stock = int(0);
	stockSellable = int(0);
	stockType = int(0);
}

Product.Models.Write.ProductItemStock::Product.Models.Write.ProductItemStock(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Write.ProductItemStock::~Product.Models.Write.ProductItemStock()
{

}

void
Product.Models.Write.ProductItemStock::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *stockKey = "Stock";

    if(object.has_key(stockKey))
    {
        bourne::json value = object[stockKey];



        jsonToValue(&stock, value, "int");


    }

    const char *stockSellableKey = "StockSellable";

    if(object.has_key(stockSellableKey))
    {
        bourne::json value = object[stockSellableKey];



        jsonToValue(&stockSellable, value, "int");


    }

    const char *stockTypeKey = "StockType";

    if(object.has_key(stockTypeKey))
    {
        bourne::json value = object[stockTypeKey];



        jsonToValue(&stockType, value, "int");


    }


}

bourne::json
Product.Models.Write.ProductItemStock::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["stock"] = getStock();






    object["stockSellable"] = getStockSellable();






    object["stockType"] = getStockType();



    return object;

}

std::string
Product.Models.Write.ProductItemStock::getId()
{
	return id;
}

void
Product.Models.Write.ProductItemStock::setId(std::string  id)
{
	this->id = id;
}

int
Product.Models.Write.ProductItemStock::getStock()
{
	return stock;
}

void
Product.Models.Write.ProductItemStock::setStock(int  stock)
{
	this->stock = stock;
}

int
Product.Models.Write.ProductItemStock::getStockSellable()
{
	return stockSellable;
}

void
Product.Models.Write.ProductItemStock::setStockSellable(int  stockSellable)
{
	this->stockSellable = stockSellable;
}

int
Product.Models.Write.ProductItemStock::getStockType()
{
	return stockType;
}

void
Product.Models.Write.ProductItemStock::setStockType(int  stockType)
{
	this->stockType = stockType;
}



