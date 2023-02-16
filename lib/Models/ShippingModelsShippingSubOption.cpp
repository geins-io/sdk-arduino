

#include "Shipping.Models.ShippingSubOption.h"

using namespace Tiny;

Shipping.Models.ShippingSubOption::Shipping.Models.ShippingSubOption()
{
	id = int(0);
	externalId = std::string();
	name = std::string();
	fee = float(0);
	logo = std::string();
	shippingData = std::string();
}

Shipping.Models.ShippingSubOption::Shipping.Models.ShippingSubOption(std::string jsonString)
{
	this->fromJson(jsonString);
}

Shipping.Models.ShippingSubOption::~Shipping.Models.ShippingSubOption()
{

}

void
Shipping.Models.ShippingSubOption::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *feeKey = "Fee";

    if(object.has_key(feeKey))
    {
        bourne::json value = object[feeKey];



        jsonToValue(&fee, value, "double");


    }

    const char *logoKey = "Logo";

    if(object.has_key(logoKey))
    {
        bourne::json value = object[logoKey];



        jsonToValue(&logo, value, "std::string");


    }

    const char *shippingDataKey = "ShippingData";

    if(object.has_key(shippingDataKey))
    {
        bourne::json value = object[shippingDataKey];



        jsonToValue(&shippingData, value, "std::string");


    }


}

bourne::json
Shipping.Models.ShippingSubOption::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["externalId"] = getExternalId();






    object["name"] = getName();






    object["fee"] = getFee();






    object["logo"] = getLogo();






    object["shippingData"] = getShippingData();



    return object;

}

int
Shipping.Models.ShippingSubOption::getId()
{
	return id;
}

void
Shipping.Models.ShippingSubOption::setId(int  id)
{
	this->id = id;
}

std::string
Shipping.Models.ShippingSubOption::getExternalId()
{
	return externalId;
}

void
Shipping.Models.ShippingSubOption::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Shipping.Models.ShippingSubOption::getName()
{
	return name;
}

void
Shipping.Models.ShippingSubOption::setName(std::string  name)
{
	this->name = name;
}

double
Shipping.Models.ShippingSubOption::getFee()
{
	return fee;
}

void
Shipping.Models.ShippingSubOption::setFee(double  fee)
{
	this->fee = fee;
}

std::string
Shipping.Models.ShippingSubOption::getLogo()
{
	return logo;
}

void
Shipping.Models.ShippingSubOption::setLogo(std::string  logo)
{
	this->logo = logo;
}

std::string
Shipping.Models.ShippingSubOption::getShippingData()
{
	return shippingData;
}

void
Shipping.Models.ShippingSubOption::setShippingData(std::string  shippingData)
{
	this->shippingData = shippingData;
}



