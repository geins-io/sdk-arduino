

#include "Product.Models.Read.Feed.h"

using namespace Tiny;

Product.Models.Read.Feed::Product.Models.Read.Feed()
{
	feedId = int(0);
	name = std::string();
	url = std::string();
	layout = std::string();
	market = int(0);
	language = std::string();
	defaultCurrency = std::string();
	defaultCountry = std::string();
}

Product.Models.Read.Feed::Product.Models.Read.Feed(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.Feed::~Product.Models.Read.Feed()
{

}

void
Product.Models.Read.Feed::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *feedIdKey = "FeedId";

    if(object.has_key(feedIdKey))
    {
        bourne::json value = object[feedIdKey];



        jsonToValue(&feedId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *urlKey = "Url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }

    const char *layoutKey = "Layout";

    if(object.has_key(layoutKey))
    {
        bourne::json value = object[layoutKey];



        jsonToValue(&layout, value, "std::string");


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

    const char *defaultCurrencyKey = "DefaultCurrency";

    if(object.has_key(defaultCurrencyKey))
    {
        bourne::json value = object[defaultCurrencyKey];



        jsonToValue(&defaultCurrency, value, "std::string");


    }

    const char *defaultCountryKey = "DefaultCountry";

    if(object.has_key(defaultCountryKey))
    {
        bourne::json value = object[defaultCountryKey];



        jsonToValue(&defaultCountry, value, "std::string");


    }


}

bourne::json
Product.Models.Read.Feed::toJson()
{
    bourne::json object = bourne::json::object();





    object["feedId"] = getFeedId();






    object["name"] = getName();






    object["url"] = getUrl();






    object["layout"] = getLayout();






    object["market"] = getMarket();






    object["language"] = getLanguage();






    object["defaultCurrency"] = getDefaultCurrency();






    object["defaultCountry"] = getDefaultCountry();



    return object;

}

int
Product.Models.Read.Feed::getFeedId()
{
	return feedId;
}

void
Product.Models.Read.Feed::setFeedId(int  feedId)
{
	this->feedId = feedId;
}

std::string
Product.Models.Read.Feed::getName()
{
	return name;
}

void
Product.Models.Read.Feed::setName(std::string  name)
{
	this->name = name;
}

std::string
Product.Models.Read.Feed::getUrl()
{
	return url;
}

void
Product.Models.Read.Feed::setUrl(std::string  url)
{
	this->url = url;
}

std::string
Product.Models.Read.Feed::getLayout()
{
	return layout;
}

void
Product.Models.Read.Feed::setLayout(std::string  layout)
{
	this->layout = layout;
}

int
Product.Models.Read.Feed::getMarket()
{
	return market;
}

void
Product.Models.Read.Feed::setMarket(int  market)
{
	this->market = market;
}

std::string
Product.Models.Read.Feed::getLanguage()
{
	return language;
}

void
Product.Models.Read.Feed::setLanguage(std::string  language)
{
	this->language = language;
}

std::string
Product.Models.Read.Feed::getDefaultCurrency()
{
	return defaultCurrency;
}

void
Product.Models.Read.Feed::setDefaultCurrency(std::string  defaultCurrency)
{
	this->defaultCurrency = defaultCurrency;
}

std::string
Product.Models.Read.Feed::getDefaultCountry()
{
	return defaultCountry;
}

void
Product.Models.Read.Feed::setDefaultCountry(std::string  defaultCountry)
{
	this->defaultCountry = defaultCountry;
}



