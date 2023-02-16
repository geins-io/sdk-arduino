

#include "Order.Models.ShippingDetail.h"

using namespace Tiny;

Order.Models.ShippingDetail::Order.Models.ShippingDetail()
{
	id = int(0);
	shippingId = int(0);
	name = std::string();
	parcelNumber = std::string();
	shippingDate = std::string();
	trackingUrl = std::string();
	externalDeliveryOptionId = std::string();
	externalServiceId = std::string();
	externalCarrierId = std::string();
	pickupPoint = std::string();
}

Order.Models.ShippingDetail::Order.Models.ShippingDetail(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.ShippingDetail::~Order.Models.ShippingDetail()
{

}

void
Order.Models.ShippingDetail::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *shippingIdKey = "ShippingId";

    if(object.has_key(shippingIdKey))
    {
        bourne::json value = object[shippingIdKey];



        jsonToValue(&shippingId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *parcelNumberKey = "ParcelNumber";

    if(object.has_key(parcelNumberKey))
    {
        bourne::json value = object[parcelNumberKey];



        jsonToValue(&parcelNumber, value, "std::string");


    }

    const char *shippingDateKey = "ShippingDate";

    if(object.has_key(shippingDateKey))
    {
        bourne::json value = object[shippingDateKey];



        jsonToValue(&shippingDate, value, "std::string");


    }

    const char *trackingUrlKey = "TrackingUrl";

    if(object.has_key(trackingUrlKey))
    {
        bourne::json value = object[trackingUrlKey];



        jsonToValue(&trackingUrl, value, "std::string");


    }

    const char *externalDeliveryOptionIdKey = "ExternalDeliveryOptionId";

    if(object.has_key(externalDeliveryOptionIdKey))
    {
        bourne::json value = object[externalDeliveryOptionIdKey];



        jsonToValue(&externalDeliveryOptionId, value, "std::string");


    }

    const char *externalServiceIdKey = "ExternalServiceId";

    if(object.has_key(externalServiceIdKey))
    {
        bourne::json value = object[externalServiceIdKey];



        jsonToValue(&externalServiceId, value, "std::string");


    }

    const char *externalCarrierIdKey = "ExternalCarrierId";

    if(object.has_key(externalCarrierIdKey))
    {
        bourne::json value = object[externalCarrierIdKey];



        jsonToValue(&externalCarrierId, value, "std::string");


    }

    const char *pickupPointKey = "PickupPoint";

    if(object.has_key(pickupPointKey))
    {
        bourne::json value = object[pickupPointKey];



        jsonToValue(&pickupPoint, value, "std::string");


    }


}

bourne::json
Order.Models.ShippingDetail::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["shippingId"] = getShippingId();






    object["name"] = getName();






    object["parcelNumber"] = getParcelNumber();






    object["shippingDate"] = getShippingDate();






    object["trackingUrl"] = getTrackingUrl();






    object["externalDeliveryOptionId"] = getExternalDeliveryOptionId();






    object["externalServiceId"] = getExternalServiceId();






    object["externalCarrierId"] = getExternalCarrierId();






    object["pickupPoint"] = getPickupPoint();



    return object;

}

int
Order.Models.ShippingDetail::getId()
{
	return id;
}

void
Order.Models.ShippingDetail::setId(int  id)
{
	this->id = id;
}

int
Order.Models.ShippingDetail::getShippingId()
{
	return shippingId;
}

void
Order.Models.ShippingDetail::setShippingId(int  shippingId)
{
	this->shippingId = shippingId;
}

std::string
Order.Models.ShippingDetail::getName()
{
	return name;
}

void
Order.Models.ShippingDetail::setName(std::string  name)
{
	this->name = name;
}

std::string
Order.Models.ShippingDetail::getParcelNumber()
{
	return parcelNumber;
}

void
Order.Models.ShippingDetail::setParcelNumber(std::string  parcelNumber)
{
	this->parcelNumber = parcelNumber;
}

std::string
Order.Models.ShippingDetail::getShippingDate()
{
	return shippingDate;
}

void
Order.Models.ShippingDetail::setShippingDate(std::string  shippingDate)
{
	this->shippingDate = shippingDate;
}

std::string
Order.Models.ShippingDetail::getTrackingUrl()
{
	return trackingUrl;
}

void
Order.Models.ShippingDetail::setTrackingUrl(std::string  trackingUrl)
{
	this->trackingUrl = trackingUrl;
}

std::string
Order.Models.ShippingDetail::getExternalDeliveryOptionId()
{
	return externalDeliveryOptionId;
}

void
Order.Models.ShippingDetail::setExternalDeliveryOptionId(std::string  externalDeliveryOptionId)
{
	this->externalDeliveryOptionId = externalDeliveryOptionId;
}

std::string
Order.Models.ShippingDetail::getExternalServiceId()
{
	return externalServiceId;
}

void
Order.Models.ShippingDetail::setExternalServiceId(std::string  externalServiceId)
{
	this->externalServiceId = externalServiceId;
}

std::string
Order.Models.ShippingDetail::getExternalCarrierId()
{
	return externalCarrierId;
}

void
Order.Models.ShippingDetail::setExternalCarrierId(std::string  externalCarrierId)
{
	this->externalCarrierId = externalCarrierId;
}

std::string
Order.Models.ShippingDetail::getPickupPoint()
{
	return pickupPoint;
}

void
Order.Models.ShippingDetail::setPickupPoint(std::string  pickupPoint)
{
	this->pickupPoint = pickupPoint;
}



