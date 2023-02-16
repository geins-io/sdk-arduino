

#include "Order.Models.OrderQuery.h"

using namespace Tiny;

Order.Models.OrderQuery::Order.Models.OrderQuery()
{
	updated = std::string();
	statusList = std::string();
	marketId = int(0);
	paymentName = std::string();
	parcelGroupId = int(0);
	customerId = int(0);
	email = std::string();
	include = std::string();
	externalOrderStatus = int(0);
	combineProductContainerRows = bool(false);
	packingLocationId = int(0);
}

Order.Models.OrderQuery::Order.Models.OrderQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.OrderQuery::~Order.Models.OrderQuery()
{

}

void
Order.Models.OrderQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *updatedKey = "Updated";

    if(object.has_key(updatedKey))
    {
        bourne::json value = object[updatedKey];



        jsonToValue(&updated, value, "std::string");


    }

    const char *statusListKey = "StatusList";

    if(object.has_key(statusListKey))
    {
        bourne::json value = object[statusListKey];



        jsonToValue(&statusList, value, "std::string");


    }

    const char *marketIdKey = "MarketId";

    if(object.has_key(marketIdKey))
    {
        bourne::json value = object[marketIdKey];



        jsonToValue(&marketId, value, "int");


    }

    const char *paymentNameKey = "PaymentName";

    if(object.has_key(paymentNameKey))
    {
        bourne::json value = object[paymentNameKey];



        jsonToValue(&paymentName, value, "std::string");


    }

    const char *parcelGroupIdKey = "ParcelGroupId";

    if(object.has_key(parcelGroupIdKey))
    {
        bourne::json value = object[parcelGroupIdKey];



        jsonToValue(&parcelGroupId, value, "int");


    }

    const char *customerIdKey = "CustomerId";

    if(object.has_key(customerIdKey))
    {
        bourne::json value = object[customerIdKey];



        jsonToValue(&customerId, value, "int");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *includeKey = "Include";

    if(object.has_key(includeKey))
    {
        bourne::json value = object[includeKey];



        jsonToValue(&include, value, "std::string");


    }

    const char *externalOrderStatusKey = "ExternalOrderStatus";

    if(object.has_key(externalOrderStatusKey))
    {
        bourne::json value = object[externalOrderStatusKey];



        jsonToValue(&externalOrderStatus, value, "int");


    }

    const char *combineProductContainerRowsKey = "CombineProductContainerRows";

    if(object.has_key(combineProductContainerRowsKey))
    {
        bourne::json value = object[combineProductContainerRowsKey];



        jsonToValue(&combineProductContainerRows, value, "bool");


    }

    const char *packingLocationIdKey = "PackingLocationId";

    if(object.has_key(packingLocationIdKey))
    {
        bourne::json value = object[packingLocationIdKey];



        jsonToValue(&packingLocationId, value, "int");


    }


}

bourne::json
Order.Models.OrderQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["updated"] = getUpdated();






    object["statusList"] = getStatusList();






    object["marketId"] = getMarketId();






    object["paymentName"] = getPaymentName();






    object["parcelGroupId"] = getParcelGroupId();






    object["customerId"] = getCustomerId();






    object["email"] = getEmail();






    object["include"] = getInclude();






    object["externalOrderStatus"] = getExternalOrderStatus();






    object["combineProductContainerRows"] = isCombineProductContainerRows();






    object["packingLocationId"] = getPackingLocationId();



    return object;

}

std::string
Order.Models.OrderQuery::getUpdated()
{
	return updated;
}

void
Order.Models.OrderQuery::setUpdated(std::string  updated)
{
	this->updated = updated;
}

std::string
Order.Models.OrderQuery::getStatusList()
{
	return statusList;
}

void
Order.Models.OrderQuery::setStatusList(std::string  statusList)
{
	this->statusList = statusList;
}

int
Order.Models.OrderQuery::getMarketId()
{
	return marketId;
}

void
Order.Models.OrderQuery::setMarketId(int  marketId)
{
	this->marketId = marketId;
}

std::string
Order.Models.OrderQuery::getPaymentName()
{
	return paymentName;
}

void
Order.Models.OrderQuery::setPaymentName(std::string  paymentName)
{
	this->paymentName = paymentName;
}

int
Order.Models.OrderQuery::getParcelGroupId()
{
	return parcelGroupId;
}

void
Order.Models.OrderQuery::setParcelGroupId(int  parcelGroupId)
{
	this->parcelGroupId = parcelGroupId;
}

int
Order.Models.OrderQuery::getCustomerId()
{
	return customerId;
}

void
Order.Models.OrderQuery::setCustomerId(int  customerId)
{
	this->customerId = customerId;
}

std::string
Order.Models.OrderQuery::getEmail()
{
	return email;
}

void
Order.Models.OrderQuery::setEmail(std::string  email)
{
	this->email = email;
}

std::string
Order.Models.OrderQuery::getInclude()
{
	return include;
}

void
Order.Models.OrderQuery::setInclude(std::string  include)
{
	this->include = include;
}

int
Order.Models.OrderQuery::getExternalOrderStatus()
{
	return externalOrderStatus;
}

void
Order.Models.OrderQuery::setExternalOrderStatus(int  externalOrderStatus)
{
	this->externalOrderStatus = externalOrderStatus;
}

bool
Order.Models.OrderQuery::isCombineProductContainerRows()
{
	return combineProductContainerRows;
}

void
Order.Models.OrderQuery::setCombineProductContainerRows(bool  combineProductContainerRows)
{
	this->combineProductContainerRows = combineProductContainerRows;
}

int
Order.Models.OrderQuery::getPackingLocationId()
{
	return packingLocationId;
}

void
Order.Models.OrderQuery::setPackingLocationId(int  packingLocationId)
{
	this->packingLocationId = packingLocationId;
}



