

#include "Shipping.Models.ShippingQuery.h"

using namespace Tiny;

Shipping.Models.ShippingQuery::Shipping.Models.ShippingQuery()
{
	siteId = int(0);
	countryId = int(0);
	shippingId = int(0);
	deliveryOptionId = std::string();
	order = Order.CheckoutOrder();
	minimumFreeShippingLimit = float(0);
}

Shipping.Models.ShippingQuery::Shipping.Models.ShippingQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Shipping.Models.ShippingQuery::~Shipping.Models.ShippingQuery()
{

}

void
Shipping.Models.ShippingQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *siteIdKey = "SiteId";

    if(object.has_key(siteIdKey))
    {
        bourne::json value = object[siteIdKey];



        jsonToValue(&siteId, value, "int");


    }

    const char *countryIdKey = "CountryId";

    if(object.has_key(countryIdKey))
    {
        bourne::json value = object[countryIdKey];



        jsonToValue(&countryId, value, "int");


    }

    const char *shippingIdKey = "ShippingId";

    if(object.has_key(shippingIdKey))
    {
        bourne::json value = object[shippingIdKey];



        jsonToValue(&shippingId, value, "int");


    }

    const char *deliveryOptionIdKey = "DeliveryOptionId";

    if(object.has_key(deliveryOptionIdKey))
    {
        bourne::json value = object[deliveryOptionIdKey];



        jsonToValue(&deliveryOptionId, value, "std::string");


    }

    const char *orderKey = "Order";

    if(object.has_key(orderKey))
    {
        bourne::json value = object[orderKey];




        Order.CheckoutOrder* obj = &order;
		obj->fromJson(value.dump());

    }

    const char *minimumFreeShippingLimitKey = "MinimumFreeShippingLimit";

    if(object.has_key(minimumFreeShippingLimitKey))
    {
        bourne::json value = object[minimumFreeShippingLimitKey];



        jsonToValue(&minimumFreeShippingLimit, value, "double");


    }


}

bourne::json
Shipping.Models.ShippingQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["siteId"] = getSiteId();






    object["countryId"] = getCountryId();






    object["shippingId"] = getShippingId();






    object["deliveryOptionId"] = getDeliveryOptionId();







	object["order"] = getOrder().toJson();





    object["minimumFreeShippingLimit"] = getMinimumFreeShippingLimit();



    return object;

}

int
Shipping.Models.ShippingQuery::getSiteId()
{
	return siteId;
}

void
Shipping.Models.ShippingQuery::setSiteId(int  siteId)
{
	this->siteId = siteId;
}

int
Shipping.Models.ShippingQuery::getCountryId()
{
	return countryId;
}

void
Shipping.Models.ShippingQuery::setCountryId(int  countryId)
{
	this->countryId = countryId;
}

int
Shipping.Models.ShippingQuery::getShippingId()
{
	return shippingId;
}

void
Shipping.Models.ShippingQuery::setShippingId(int  shippingId)
{
	this->shippingId = shippingId;
}

std::string
Shipping.Models.ShippingQuery::getDeliveryOptionId()
{
	return deliveryOptionId;
}

void
Shipping.Models.ShippingQuery::setDeliveryOptionId(std::string  deliveryOptionId)
{
	this->deliveryOptionId = deliveryOptionId;
}

Order.CheckoutOrder
Shipping.Models.ShippingQuery::getOrder()
{
	return order;
}

void
Shipping.Models.ShippingQuery::setOrder(Order.CheckoutOrder  order)
{
	this->order = order;
}

double
Shipping.Models.ShippingQuery::getMinimumFreeShippingLimit()
{
	return minimumFreeShippingLimit;
}

void
Shipping.Models.ShippingQuery::setMinimumFreeShippingLimit(double  minimumFreeShippingLimit)
{
	this->minimumFreeShippingLimit = minimumFreeShippingLimit;
}



