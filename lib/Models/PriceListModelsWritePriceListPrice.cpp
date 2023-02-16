

#include "PriceList.Models.Write.PriceListPrice.h"

using namespace Tiny;

PriceList.Models.Write.PriceListPrice::PriceList.Models.Write.PriceListPrice()
{
	priceListId = int(0);
	price = float(0);
	productId = std::string();
	currency = std::string();
	staggeredCount = int(0);
}

PriceList.Models.Write.PriceListPrice::PriceList.Models.Write.PriceListPrice(std::string jsonString)
{
	this->fromJson(jsonString);
}

PriceList.Models.Write.PriceListPrice::~PriceList.Models.Write.PriceListPrice()
{

}

void
PriceList.Models.Write.PriceListPrice::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *priceListIdKey = "PriceListId";

    if(object.has_key(priceListIdKey))
    {
        bourne::json value = object[priceListIdKey];



        jsonToValue(&priceListId, value, "int");


    }

    const char *priceKey = "Price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "double");


    }

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "std::string");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *staggeredCountKey = "StaggeredCount";

    if(object.has_key(staggeredCountKey))
    {
        bourne::json value = object[staggeredCountKey];



        jsonToValue(&staggeredCount, value, "int");


    }


}

bourne::json
PriceList.Models.Write.PriceListPrice::toJson()
{
    bourne::json object = bourne::json::object();





    object["priceListId"] = getPriceListId();






    object["price"] = getPrice();






    object["productId"] = getProductId();






    object["currency"] = getCurrency();






    object["staggeredCount"] = getStaggeredCount();



    return object;

}

int
PriceList.Models.Write.PriceListPrice::getPriceListId()
{
	return priceListId;
}

void
PriceList.Models.Write.PriceListPrice::setPriceListId(int  priceListId)
{
	this->priceListId = priceListId;
}

double
PriceList.Models.Write.PriceListPrice::getPrice()
{
	return price;
}

void
PriceList.Models.Write.PriceListPrice::setPrice(double  price)
{
	this->price = price;
}

std::string
PriceList.Models.Write.PriceListPrice::getProductId()
{
	return productId;
}

void
PriceList.Models.Write.PriceListPrice::setProductId(std::string  productId)
{
	this->productId = productId;
}

std::string
PriceList.Models.Write.PriceListPrice::getCurrency()
{
	return currency;
}

void
PriceList.Models.Write.PriceListPrice::setCurrency(std::string  currency)
{
	this->currency = currency;
}

int
PriceList.Models.Write.PriceListPrice::getStaggeredCount()
{
	return staggeredCount;
}

void
PriceList.Models.Write.PriceListPrice::setStaggeredCount(int  staggeredCount)
{
	this->staggeredCount = staggeredCount;
}



