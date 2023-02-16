

#include "Product.Models.Read.ProductItemStock.h"

using namespace Tiny;

Product.Models.Read.ProductItemStock::Product.Models.Read.ProductItemStock()
{
	itemId = int(0);
	stock = int(0);
	stockOversellable = int(0);
	stockStatic = int(0);
	stockSellable = int(0);
}

Product.Models.Read.ProductItemStock::Product.Models.Read.ProductItemStock(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.ProductItemStock::~Product.Models.Read.ProductItemStock()
{

}

void
Product.Models.Read.ProductItemStock::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *itemIdKey = "ItemId";

    if(object.has_key(itemIdKey))
    {
        bourne::json value = object[itemIdKey];



        jsonToValue(&itemId, value, "int");


    }

    const char *stockKey = "Stock";

    if(object.has_key(stockKey))
    {
        bourne::json value = object[stockKey];



        jsonToValue(&stock, value, "int");


    }

    const char *stockOversellableKey = "StockOversellable";

    if(object.has_key(stockOversellableKey))
    {
        bourne::json value = object[stockOversellableKey];



        jsonToValue(&stockOversellable, value, "int");


    }

    const char *stockStaticKey = "StockStatic";

    if(object.has_key(stockStaticKey))
    {
        bourne::json value = object[stockStaticKey];



        jsonToValue(&stockStatic, value, "int");


    }

    const char *stockSellableKey = "StockSellable";

    if(object.has_key(stockSellableKey))
    {
        bourne::json value = object[stockSellableKey];



        jsonToValue(&stockSellable, value, "int");


    }


}

bourne::json
Product.Models.Read.ProductItemStock::toJson()
{
    bourne::json object = bourne::json::object();





    object["itemId"] = getItemId();






    object["stock"] = getStock();






    object["stockOversellable"] = getStockOversellable();






    object["stockStatic"] = getStockStatic();






    object["stockSellable"] = getStockSellable();



    return object;

}

int
Product.Models.Read.ProductItemStock::getItemId()
{
	return itemId;
}

void
Product.Models.Read.ProductItemStock::setItemId(int  itemId)
{
	this->itemId = itemId;
}

int
Product.Models.Read.ProductItemStock::getStock()
{
	return stock;
}

void
Product.Models.Read.ProductItemStock::setStock(int  stock)
{
	this->stock = stock;
}

int
Product.Models.Read.ProductItemStock::getStockOversellable()
{
	return stockOversellable;
}

void
Product.Models.Read.ProductItemStock::setStockOversellable(int  stockOversellable)
{
	this->stockOversellable = stockOversellable;
}

int
Product.Models.Read.ProductItemStock::getStockStatic()
{
	return stockStatic;
}

void
Product.Models.Read.ProductItemStock::setStockStatic(int  stockStatic)
{
	this->stockStatic = stockStatic;
}

int
Product.Models.Read.ProductItemStock::getStockSellable()
{
	return stockSellable;
}

void
Product.Models.Read.ProductItemStock::setStockSellable(int  stockSellable)
{
	this->stockSellable = stockSellable;
}



