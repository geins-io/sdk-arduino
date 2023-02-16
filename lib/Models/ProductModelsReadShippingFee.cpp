

#include "Product.Models.Read.ShippingFee.h"

using namespace Tiny;

Product.Models.Read.ShippingFee::Product.Models.Read.ShippingFee()
{
	market = int(0);
	country = std::string();
	service = std::string();
	serviceId = int(0);
	fee = float(0);
}

Product.Models.Read.ShippingFee::Product.Models.Read.ShippingFee(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.ShippingFee::~Product.Models.Read.ShippingFee()
{

}

void
Product.Models.Read.ShippingFee::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *marketKey = "Market";

    if(object.has_key(marketKey))
    {
        bourne::json value = object[marketKey];



        jsonToValue(&market, value, "int");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *serviceKey = "Service";

    if(object.has_key(serviceKey))
    {
        bourne::json value = object[serviceKey];



        jsonToValue(&service, value, "std::string");


    }

    const char *serviceIdKey = "ServiceId";

    if(object.has_key(serviceIdKey))
    {
        bourne::json value = object[serviceIdKey];



        jsonToValue(&serviceId, value, "int");


    }

    const char *feeKey = "Fee";

    if(object.has_key(feeKey))
    {
        bourne::json value = object[feeKey];



        jsonToValue(&fee, value, "double");


    }


}

bourne::json
Product.Models.Read.ShippingFee::toJson()
{
    bourne::json object = bourne::json::object();





    object["market"] = getMarket();






    object["country"] = getCountry();






    object["service"] = getService();






    object["serviceId"] = getServiceId();






    object["fee"] = getFee();



    return object;

}

int
Product.Models.Read.ShippingFee::getMarket()
{
	return market;
}

void
Product.Models.Read.ShippingFee::setMarket(int  market)
{
	this->market = market;
}

std::string
Product.Models.Read.ShippingFee::getCountry()
{
	return country;
}

void
Product.Models.Read.ShippingFee::setCountry(std::string  country)
{
	this->country = country;
}

std::string
Product.Models.Read.ShippingFee::getService()
{
	return service;
}

void
Product.Models.Read.ShippingFee::setService(std::string  service)
{
	this->service = service;
}

int
Product.Models.Read.ShippingFee::getServiceId()
{
	return serviceId;
}

void
Product.Models.Read.ShippingFee::setServiceId(int  serviceId)
{
	this->serviceId = serviceId;
}

double
Product.Models.Read.ShippingFee::getFee()
{
	return fee;
}

void
Product.Models.Read.ShippingFee::setFee(double  fee)
{
	this->fee = fee;
}



