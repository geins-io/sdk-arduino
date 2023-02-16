

#include "PriceList.Models.PriceListPriceResponse.h"

using namespace Tiny;

PriceList.Models.PriceListPriceResponse::PriceList.Models.PriceListPriceResponse()
{
	message = std::string();
	invalid = std::list<PriceList.Models.Write.PriceListPrice>();
	notFound = std::list<PriceList.Models.Write.PriceListPrice>();
	updateCount = int(0);
}

PriceList.Models.PriceListPriceResponse::PriceList.Models.PriceListPriceResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

PriceList.Models.PriceListPriceResponse::~PriceList.Models.PriceListPriceResponse()
{

}

void
PriceList.Models.PriceListPriceResponse::fromJson(std::string jsonObj)
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


        std::list<PriceList.Models.Write.PriceListPrice> invalid_list;
        PriceList.Models.Write.PriceListPrice element;
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


        std::list<PriceList.Models.Write.PriceListPrice> notFound_list;
        PriceList.Models.Write.PriceListPrice element;
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
PriceList.Models.PriceListPriceResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();





    std::list<PriceList.Models.Write.PriceListPrice> invalid_list = getInvalid();
    bourne::json invalid_arr = bourne::json::array();

    for(auto& var : invalid_list)
    {
        PriceList.Models.Write.PriceListPrice obj = var;
        invalid_arr.append(obj.toJson());
    }
    object["invalid"] = invalid_arr;






    std::list<PriceList.Models.Write.PriceListPrice> notFound_list = getNotFound();
    bourne::json notFound_arr = bourne::json::array();

    for(auto& var : notFound_list)
    {
        PriceList.Models.Write.PriceListPrice obj = var;
        notFound_arr.append(obj.toJson());
    }
    object["notFound"] = notFound_arr;







    object["updateCount"] = getUpdateCount();



    return object;

}

std::string
PriceList.Models.PriceListPriceResponse::getMessage()
{
	return message;
}

void
PriceList.Models.PriceListPriceResponse::setMessage(std::string  message)
{
	this->message = message;
}

std::list<PriceList.Models.Write.PriceListPrice>
PriceList.Models.PriceListPriceResponse::getInvalid()
{
	return invalid;
}

void
PriceList.Models.PriceListPriceResponse::setInvalid(std::list <PriceList.Models.Write.PriceListPrice> invalid)
{
	this->invalid = invalid;
}

std::list<PriceList.Models.Write.PriceListPrice>
PriceList.Models.PriceListPriceResponse::getNotFound()
{
	return notFound;
}

void
PriceList.Models.PriceListPriceResponse::setNotFound(std::list <PriceList.Models.Write.PriceListPrice> notFound)
{
	this->notFound = notFound;
}

int
PriceList.Models.PriceListPriceResponse::getUpdateCount()
{
	return updateCount;
}

void
PriceList.Models.PriceListPriceResponse::setUpdateCount(int  updateCount)
{
	this->updateCount = updateCount;
}



