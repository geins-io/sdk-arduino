

#include "PriceList.Models.Read.PriceListPrice.h"

using namespace Tiny;

PriceList.Models.Read.PriceListPrice::PriceList.Models.Read.PriceListPrice()
{
	productId = int(0);
	priceListId = int(0);
	priceListName = std::string();
	priceIncVat = float(0);
	priceExVat = float(0);
	vatRate = float(0);
	country = std::string();
	currency = std::string();
	staggeredCount = int(0);
	validFrom = std::string();
	validTo = std::string();
}

PriceList.Models.Read.PriceListPrice::PriceList.Models.Read.PriceListPrice(std::string jsonString)
{
	this->fromJson(jsonString);
}

PriceList.Models.Read.PriceListPrice::~PriceList.Models.Read.PriceListPrice()
{

}

void
PriceList.Models.Read.PriceListPrice::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *priceListIdKey = "PriceListId";

    if(object.has_key(priceListIdKey))
    {
        bourne::json value = object[priceListIdKey];



        jsonToValue(&priceListId, value, "int");


    }

    const char *priceListNameKey = "PriceListName";

    if(object.has_key(priceListNameKey))
    {
        bourne::json value = object[priceListNameKey];



        jsonToValue(&priceListName, value, "std::string");


    }

    const char *priceIncVatKey = "PriceIncVat";

    if(object.has_key(priceIncVatKey))
    {
        bourne::json value = object[priceIncVatKey];



        jsonToValue(&priceIncVat, value, "double");


    }

    const char *priceExVatKey = "PriceExVat";

    if(object.has_key(priceExVatKey))
    {
        bourne::json value = object[priceExVatKey];



        jsonToValue(&priceExVat, value, "double");


    }

    const char *vatRateKey = "VatRate";

    if(object.has_key(vatRateKey))
    {
        bourne::json value = object[vatRateKey];



        jsonToValue(&vatRate, value, "double");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


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

    const char *validFromKey = "ValidFrom";

    if(object.has_key(validFromKey))
    {
        bourne::json value = object[validFromKey];



        jsonToValue(&validFrom, value, "std::string");


    }

    const char *validToKey = "ValidTo";

    if(object.has_key(validToKey))
    {
        bourne::json value = object[validToKey];



        jsonToValue(&validTo, value, "std::string");


    }


}

bourne::json
PriceList.Models.Read.PriceListPrice::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["priceListId"] = getPriceListId();






    object["priceListName"] = getPriceListName();






    object["priceIncVat"] = getPriceIncVat();






    object["priceExVat"] = getPriceExVat();






    object["vatRate"] = getVatRate();






    object["country"] = getCountry();






    object["currency"] = getCurrency();






    object["staggeredCount"] = getStaggeredCount();






    object["validFrom"] = getValidFrom();






    object["validTo"] = getValidTo();



    return object;

}

int
PriceList.Models.Read.PriceListPrice::getProductId()
{
	return productId;
}

void
PriceList.Models.Read.PriceListPrice::setProductId(int  productId)
{
	this->productId = productId;
}

int
PriceList.Models.Read.PriceListPrice::getPriceListId()
{
	return priceListId;
}

void
PriceList.Models.Read.PriceListPrice::setPriceListId(int  priceListId)
{
	this->priceListId = priceListId;
}

std::string
PriceList.Models.Read.PriceListPrice::getPriceListName()
{
	return priceListName;
}

void
PriceList.Models.Read.PriceListPrice::setPriceListName(std::string  priceListName)
{
	this->priceListName = priceListName;
}

double
PriceList.Models.Read.PriceListPrice::getPriceIncVat()
{
	return priceIncVat;
}

void
PriceList.Models.Read.PriceListPrice::setPriceIncVat(double  priceIncVat)
{
	this->priceIncVat = priceIncVat;
}

double
PriceList.Models.Read.PriceListPrice::getPriceExVat()
{
	return priceExVat;
}

void
PriceList.Models.Read.PriceListPrice::setPriceExVat(double  priceExVat)
{
	this->priceExVat = priceExVat;
}

double
PriceList.Models.Read.PriceListPrice::getVatRate()
{
	return vatRate;
}

void
PriceList.Models.Read.PriceListPrice::setVatRate(double  vatRate)
{
	this->vatRate = vatRate;
}

std::string
PriceList.Models.Read.PriceListPrice::getCountry()
{
	return country;
}

void
PriceList.Models.Read.PriceListPrice::setCountry(std::string  country)
{
	this->country = country;
}

std::string
PriceList.Models.Read.PriceListPrice::getCurrency()
{
	return currency;
}

void
PriceList.Models.Read.PriceListPrice::setCurrency(std::string  currency)
{
	this->currency = currency;
}

int
PriceList.Models.Read.PriceListPrice::getStaggeredCount()
{
	return staggeredCount;
}

void
PriceList.Models.Read.PriceListPrice::setStaggeredCount(int  staggeredCount)
{
	this->staggeredCount = staggeredCount;
}

std::string
PriceList.Models.Read.PriceListPrice::getValidFrom()
{
	return validFrom;
}

void
PriceList.Models.Read.PriceListPrice::setValidFrom(std::string  validFrom)
{
	this->validFrom = validFrom;
}

std::string
PriceList.Models.Read.PriceListPrice::getValidTo()
{
	return validTo;
}

void
PriceList.Models.Read.PriceListPrice::setValidTo(std::string  validTo)
{
	this->validTo = validTo;
}



