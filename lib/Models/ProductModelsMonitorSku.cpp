

#include "Product.Models.MonitorSku.h"

using namespace Tiny;

Product.Models.MonitorSku::Product.Models.MonitorSku()
{
	siteId = int(0);
	languageCode = std::string();
	email = std::string();
	skuId = int(0);
}

Product.Models.MonitorSku::Product.Models.MonitorSku(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.MonitorSku::~Product.Models.MonitorSku()
{

}

void
Product.Models.MonitorSku::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *siteIdKey = "SiteId";

    if(object.has_key(siteIdKey))
    {
        bourne::json value = object[siteIdKey];



        jsonToValue(&siteId, value, "int");


    }

    const char *languageCodeKey = "LanguageCode";

    if(object.has_key(languageCodeKey))
    {
        bourne::json value = object[languageCodeKey];



        jsonToValue(&languageCode, value, "std::string");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *skuIdKey = "SkuId";

    if(object.has_key(skuIdKey))
    {
        bourne::json value = object[skuIdKey];



        jsonToValue(&skuId, value, "int");


    }


}

bourne::json
Product.Models.MonitorSku::toJson()
{
    bourne::json object = bourne::json::object();





    object["siteId"] = getSiteId();






    object["languageCode"] = getLanguageCode();






    object["email"] = getEmail();






    object["skuId"] = getSkuId();



    return object;

}

int
Product.Models.MonitorSku::getSiteId()
{
	return siteId;
}

void
Product.Models.MonitorSku::setSiteId(int  siteId)
{
	this->siteId = siteId;
}

std::string
Product.Models.MonitorSku::getLanguageCode()
{
	return languageCode;
}

void
Product.Models.MonitorSku::setLanguageCode(std::string  languageCode)
{
	this->languageCode = languageCode;
}

std::string
Product.Models.MonitorSku::getEmail()
{
	return email;
}

void
Product.Models.MonitorSku::setEmail(std::string  email)
{
	this->email = email;
}

int
Product.Models.MonitorSku::getSkuId()
{
	return skuId;
}

void
Product.Models.MonitorSku::setSkuId(int  skuId)
{
	this->skuId = skuId;
}



