

#include "Order.Models.OrderUpdate.h"

using namespace Tiny;

Order.Models.OrderUpdate::Order.Models.OrderUpdate()
{
	externalId = std::string();
	parcelNumber = std::string();
	externalOrderStatus = int(0);
}

Order.Models.OrderUpdate::Order.Models.OrderUpdate(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.OrderUpdate::~Order.Models.OrderUpdate()
{

}

void
Order.Models.OrderUpdate::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *parcelNumberKey = "ParcelNumber";

    if(object.has_key(parcelNumberKey))
    {
        bourne::json value = object[parcelNumberKey];



        jsonToValue(&parcelNumber, value, "std::string");


    }

    const char *externalOrderStatusKey = "ExternalOrderStatus";

    if(object.has_key(externalOrderStatusKey))
    {
        bourne::json value = object[externalOrderStatusKey];



        jsonToValue(&externalOrderStatus, value, "int");


    }


}

bourne::json
Order.Models.OrderUpdate::toJson()
{
    bourne::json object = bourne::json::object();





    object["externalId"] = getExternalId();






    object["parcelNumber"] = getParcelNumber();






    object["externalOrderStatus"] = getExternalOrderStatus();



    return object;

}

std::string
Order.Models.OrderUpdate::getExternalId()
{
	return externalId;
}

void
Order.Models.OrderUpdate::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.Models.OrderUpdate::getParcelNumber()
{
	return parcelNumber;
}

void
Order.Models.OrderUpdate::setParcelNumber(std::string  parcelNumber)
{
	this->parcelNumber = parcelNumber;
}

int
Order.Models.OrderUpdate::getExternalOrderStatus()
{
	return externalOrderStatus;
}

void
Order.Models.OrderUpdate::setExternalOrderStatus(int  externalOrderStatus)
{
	this->externalOrderStatus = externalOrderStatus;
}



