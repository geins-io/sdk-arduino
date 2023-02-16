

#include "Product.Models.Read.ProductUrl.h"

using namespace Tiny;

Product.Models.Read.ProductUrl::Product.Models.Read.ProductUrl()
{
	url = std::string();
	market = int(0);
	language = std::string();
}

Product.Models.Read.ProductUrl::Product.Models.Read.ProductUrl(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.ProductUrl::~Product.Models.Read.ProductUrl()
{

}

void
Product.Models.Read.ProductUrl::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *urlKey = "Url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }

    const char *marketKey = "Market";

    if(object.has_key(marketKey))
    {
        bourne::json value = object[marketKey];



        jsonToValue(&market, value, "int");


    }

    const char *languageKey = "Language";

    if(object.has_key(languageKey))
    {
        bourne::json value = object[languageKey];



        jsonToValue(&language, value, "std::string");


    }


}

bourne::json
Product.Models.Read.ProductUrl::toJson()
{
    bourne::json object = bourne::json::object();





    object["url"] = getUrl();






    object["market"] = getMarket();






    object["language"] = getLanguage();



    return object;

}

std::string
Product.Models.Read.ProductUrl::getUrl()
{
	return url;
}

void
Product.Models.Read.ProductUrl::setUrl(std::string  url)
{
	this->url = url;
}

int
Product.Models.Read.ProductUrl::getMarket()
{
	return market;
}

void
Product.Models.Read.ProductUrl::setMarket(int  market)
{
	this->market = market;
}

std::string
Product.Models.Read.ProductUrl::getLanguage()
{
	return language;
}

void
Product.Models.Read.ProductUrl::setLanguage(std::string  language)
{
	this->language = language;
}



