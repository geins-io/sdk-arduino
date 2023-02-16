

#include "PriceList.Models.PriceList.h"

using namespace Tiny;

PriceList.Models.PriceList::PriceList.Models.PriceList()
{
	id = int(0);
	name = std::string();
	marketId = int(0);
	marketPrefix = std::string();
	currency = std::string();
}

PriceList.Models.PriceList::PriceList.Models.PriceList(std::string jsonString)
{
	this->fromJson(jsonString);
}

PriceList.Models.PriceList::~PriceList.Models.PriceList()
{

}

void
PriceList.Models.PriceList::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *marketIdKey = "MarketId";

    if(object.has_key(marketIdKey))
    {
        bourne::json value = object[marketIdKey];



        jsonToValue(&marketId, value, "int");


    }

    const char *marketPrefixKey = "MarketPrefix";

    if(object.has_key(marketPrefixKey))
    {
        bourne::json value = object[marketPrefixKey];



        jsonToValue(&marketPrefix, value, "std::string");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }


}

bourne::json
PriceList.Models.PriceList::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["marketId"] = getMarketId();






    object["marketPrefix"] = getMarketPrefix();






    object["currency"] = getCurrency();



    return object;

}

int
PriceList.Models.PriceList::getId()
{
	return id;
}

void
PriceList.Models.PriceList::setId(int  id)
{
	this->id = id;
}

std::string
PriceList.Models.PriceList::getName()
{
	return name;
}

void
PriceList.Models.PriceList::setName(std::string  name)
{
	this->name = name;
}

int
PriceList.Models.PriceList::getMarketId()
{
	return marketId;
}

void
PriceList.Models.PriceList::setMarketId(int  marketId)
{
	this->marketId = marketId;
}

std::string
PriceList.Models.PriceList::getMarketPrefix()
{
	return marketPrefix;
}

void
PriceList.Models.PriceList::setMarketPrefix(std::string  marketPrefix)
{
	this->marketPrefix = marketPrefix;
}

std::string
PriceList.Models.PriceList::getCurrency()
{
	return currency;
}

void
PriceList.Models.PriceList::setCurrency(std::string  currency)
{
	this->currency = currency;
}



