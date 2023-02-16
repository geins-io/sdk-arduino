

#include "Market.Models.Market.h"

using namespace Tiny;

Market.Models.Market::Market.Models.Market()
{
	id = int(0);
	name = std::string();
	displayName = std::string();
	currency = std::string();
	vatRate = float(0);
	marketPrefix = std::string();
	countryId = int(0);
	currencyId = int(0);
	currencyRate = float(0);
	languageId = int(0);
	language = std::string();
}

Market.Models.Market::Market.Models.Market(std::string jsonString)
{
	this->fromJson(jsonString);
}

Market.Models.Market::~Market.Models.Market()
{

}

void
Market.Models.Market::fromJson(std::string jsonObj)
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

    const char *displayNameKey = "DisplayName";

    if(object.has_key(displayNameKey))
    {
        bourne::json value = object[displayNameKey];



        jsonToValue(&displayName, value, "std::string");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *vatRateKey = "VatRate";

    if(object.has_key(vatRateKey))
    {
        bourne::json value = object[vatRateKey];



        jsonToValue(&vatRate, value, "double");


    }

    const char *marketPrefixKey = "MarketPrefix";

    if(object.has_key(marketPrefixKey))
    {
        bourne::json value = object[marketPrefixKey];



        jsonToValue(&marketPrefix, value, "std::string");


    }

    const char *countryIdKey = "CountryId";

    if(object.has_key(countryIdKey))
    {
        bourne::json value = object[countryIdKey];



        jsonToValue(&countryId, value, "int");


    }

    const char *currencyIdKey = "CurrencyId";

    if(object.has_key(currencyIdKey))
    {
        bourne::json value = object[currencyIdKey];



        jsonToValue(&currencyId, value, "int");


    }

    const char *currencyRateKey = "CurrencyRate";

    if(object.has_key(currencyRateKey))
    {
        bourne::json value = object[currencyRateKey];



        jsonToValue(&currencyRate, value, "double");


    }

    const char *languageIdKey = "LanguageId";

    if(object.has_key(languageIdKey))
    {
        bourne::json value = object[languageIdKey];



        jsonToValue(&languageId, value, "int");


    }

    const char *languageKey = "Language";

    if(object.has_key(languageKey))
    {
        bourne::json value = object[languageKey];



        jsonToValue(&language, value, "std::string");


    }


}

bourne::json
Market.Models.Market::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["displayName"] = getDisplayName();






    object["currency"] = getCurrency();






    object["vatRate"] = getVatRate();






    object["marketPrefix"] = getMarketPrefix();






    object["countryId"] = getCountryId();






    object["currencyId"] = getCurrencyId();






    object["currencyRate"] = getCurrencyRate();






    object["languageId"] = getLanguageId();






    object["language"] = getLanguage();



    return object;

}

int
Market.Models.Market::getId()
{
	return id;
}

void
Market.Models.Market::setId(int  id)
{
	this->id = id;
}

std::string
Market.Models.Market::getName()
{
	return name;
}

void
Market.Models.Market::setName(std::string  name)
{
	this->name = name;
}

std::string
Market.Models.Market::getDisplayName()
{
	return displayName;
}

void
Market.Models.Market::setDisplayName(std::string  displayName)
{
	this->displayName = displayName;
}

std::string
Market.Models.Market::getCurrency()
{
	return currency;
}

void
Market.Models.Market::setCurrency(std::string  currency)
{
	this->currency = currency;
}

double
Market.Models.Market::getVatRate()
{
	return vatRate;
}

void
Market.Models.Market::setVatRate(double  vatRate)
{
	this->vatRate = vatRate;
}

std::string
Market.Models.Market::getMarketPrefix()
{
	return marketPrefix;
}

void
Market.Models.Market::setMarketPrefix(std::string  marketPrefix)
{
	this->marketPrefix = marketPrefix;
}

int
Market.Models.Market::getCountryId()
{
	return countryId;
}

void
Market.Models.Market::setCountryId(int  countryId)
{
	this->countryId = countryId;
}

int
Market.Models.Market::getCurrencyId()
{
	return currencyId;
}

void
Market.Models.Market::setCurrencyId(int  currencyId)
{
	this->currencyId = currencyId;
}

double
Market.Models.Market::getCurrencyRate()
{
	return currencyRate;
}

void
Market.Models.Market::setCurrencyRate(double  currencyRate)
{
	this->currencyRate = currencyRate;
}

int
Market.Models.Market::getLanguageId()
{
	return languageId;
}

void
Market.Models.Market::setLanguageId(int  languageId)
{
	this->languageId = languageId;
}

std::string
Market.Models.Market::getLanguage()
{
	return language;
}

void
Market.Models.Market::setLanguage(std::string  language)
{
	this->language = language;
}



