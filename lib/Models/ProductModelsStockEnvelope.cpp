

#include "Product.Models.StockEnvelope.h"

using namespace Tiny;

Product.Models.StockEnvelope::Product.Models.StockEnvelope()
{
	message = std::string();
	invalid = std::list<Product.Models.Write.ProductItemStock>();
	notFound = std::list<Product.Models.Write.ProductItemStock>();
	updateCount = int(0);
}

Product.Models.StockEnvelope::Product.Models.StockEnvelope(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.StockEnvelope::~Product.Models.StockEnvelope()
{

}

void
Product.Models.StockEnvelope::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *invalidKey = "Invalid";

    if(object.has_key(invalidKey))
    {
        bourne::json value = object[invalidKey];


        std::list<Product.Models.Write.ProductItemStock> invalid_list;
        Product.Models.Write.ProductItemStock element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            invalid_list.push_back(element);
        }
        invalid = invalid_list;


    }

    const char *notFoundKey = "NotFound";

    if(object.has_key(notFoundKey))
    {
        bourne::json value = object[notFoundKey];


        std::list<Product.Models.Write.ProductItemStock> notFound_list;
        Product.Models.Write.ProductItemStock element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            notFound_list.push_back(element);
        }
        notFound = notFound_list;


    }

    const char *updateCountKey = "UpdateCount";

    if(object.has_key(updateCountKey))
    {
        bourne::json value = object[updateCountKey];



        jsonToValue(&updateCount, value, "int");


    }


}

bourne::json
Product.Models.StockEnvelope::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();





    std::list<Product.Models.Write.ProductItemStock> invalid_list = getInvalid();
    bourne::json invalid_arr = bourne::json::array();

    for(auto& var : invalid_list)
    {
        Product.Models.Write.ProductItemStock obj = var;
        invalid_arr.append(obj.toJson());
    }
    object["invalid"] = invalid_arr;






    std::list<Product.Models.Write.ProductItemStock> notFound_list = getNotFound();
    bourne::json notFound_arr = bourne::json::array();

    for(auto& var : notFound_list)
    {
        Product.Models.Write.ProductItemStock obj = var;
        notFound_arr.append(obj.toJson());
    }
    object["notFound"] = notFound_arr;







    object["updateCount"] = getUpdateCount();



    return object;

}

std::string
Product.Models.StockEnvelope::getMessage()
{
	return message;
}

void
Product.Models.StockEnvelope::setMessage(std::string  message)
{
	this->message = message;
}

std::list<Product.Models.Write.ProductItemStock>
Product.Models.StockEnvelope::getInvalid()
{
	return invalid;
}

void
Product.Models.StockEnvelope::setInvalid(std::list <Product.Models.Write.ProductItemStock> invalid)
{
	this->invalid = invalid;
}

std::list<Product.Models.Write.ProductItemStock>
Product.Models.StockEnvelope::getNotFound()
{
	return notFound;
}

void
Product.Models.StockEnvelope::setNotFound(std::list <Product.Models.Write.ProductItemStock> notFound)
{
	this->notFound = notFound;
}

int
Product.Models.StockEnvelope::getUpdateCount()
{
	return updateCount;
}

void
Product.Models.StockEnvelope::setUpdateCount(int  updateCount)
{
	this->updateCount = updateCount;
}



