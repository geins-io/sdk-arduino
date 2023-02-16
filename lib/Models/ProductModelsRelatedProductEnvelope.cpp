

#include "Product.Models.RelatedProductEnvelope.h"

using namespace Tiny;

Product.Models.RelatedProductEnvelope::Product.Models.RelatedProductEnvelope()
{
	message = std::string();
	invalid = std::list<Product.Models.Write.RelatedProduct>();
	notFound = std::list<Product.Models.Write.RelatedProduct>();
	updateCount = int(0);
}

Product.Models.RelatedProductEnvelope::Product.Models.RelatedProductEnvelope(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.RelatedProductEnvelope::~Product.Models.RelatedProductEnvelope()
{

}

void
Product.Models.RelatedProductEnvelope::fromJson(std::string jsonObj)
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


        std::list<Product.Models.Write.RelatedProduct> invalid_list;
        Product.Models.Write.RelatedProduct element;
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


        std::list<Product.Models.Write.RelatedProduct> notFound_list;
        Product.Models.Write.RelatedProduct element;
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
Product.Models.RelatedProductEnvelope::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();





    std::list<Product.Models.Write.RelatedProduct> invalid_list = getInvalid();
    bourne::json invalid_arr = bourne::json::array();

    for(auto& var : invalid_list)
    {
        Product.Models.Write.RelatedProduct obj = var;
        invalid_arr.append(obj.toJson());
    }
    object["invalid"] = invalid_arr;






    std::list<Product.Models.Write.RelatedProduct> notFound_list = getNotFound();
    bourne::json notFound_arr = bourne::json::array();

    for(auto& var : notFound_list)
    {
        Product.Models.Write.RelatedProduct obj = var;
        notFound_arr.append(obj.toJson());
    }
    object["notFound"] = notFound_arr;







    object["updateCount"] = getUpdateCount();



    return object;

}

std::string
Product.Models.RelatedProductEnvelope::getMessage()
{
	return message;
}

void
Product.Models.RelatedProductEnvelope::setMessage(std::string  message)
{
	this->message = message;
}

std::list<Product.Models.Write.RelatedProduct>
Product.Models.RelatedProductEnvelope::getInvalid()
{
	return invalid;
}

void
Product.Models.RelatedProductEnvelope::setInvalid(std::list <Product.Models.Write.RelatedProduct> invalid)
{
	this->invalid = invalid;
}

std::list<Product.Models.Write.RelatedProduct>
Product.Models.RelatedProductEnvelope::getNotFound()
{
	return notFound;
}

void
Product.Models.RelatedProductEnvelope::setNotFound(std::list <Product.Models.Write.RelatedProduct> notFound)
{
	this->notFound = notFound;
}

int
Product.Models.RelatedProductEnvelope::getUpdateCount()
{
	return updateCount;
}

void
Product.Models.RelatedProductEnvelope::setUpdateCount(int  updateCount)
{
	this->updateCount = updateCount;
}



