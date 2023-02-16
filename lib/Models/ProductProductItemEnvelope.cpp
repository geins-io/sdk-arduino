

#include "Product.ProductItemEnvelope.h"

using namespace Tiny;

Product.ProductItemEnvelope::Product.ProductItemEnvelope()
{
	message = std::string();
	item = Product.Models.Read.ProductItem();
}

Product.ProductItemEnvelope::Product.ProductItemEnvelope(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.ProductItemEnvelope::~Product.ProductItemEnvelope()
{

}

void
Product.ProductItemEnvelope::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *itemKey = "Item";

    if(object.has_key(itemKey))
    {
        bourne::json value = object[itemKey];




        Product.Models.Read.ProductItem* obj = &item;
		obj->fromJson(value.dump());

    }


}

bourne::json
Product.ProductItemEnvelope::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();







	object["item"] = getItem().toJson();


    return object;

}

std::string
Product.ProductItemEnvelope::getMessage()
{
	return message;
}

void
Product.ProductItemEnvelope::setMessage(std::string  message)
{
	this->message = message;
}

Product.Models.Read.ProductItem
Product.ProductItemEnvelope::getItem()
{
	return item;
}

void
Product.ProductItemEnvelope::setItem(Product.Models.Read.ProductItem  item)
{
	this->item = item;
}



