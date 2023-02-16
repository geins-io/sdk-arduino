

#include "Envelope-Market.Models.Market.h"

using namespace Tiny;

Envelope-Market.Models.Market::Envelope-Market.Models.Market()
{
	message = std::string();
	details = std::list<std::string>();
	resource = Market.Models.Market();
	pageResult = PageResult();
}

Envelope-Market.Models.Market::Envelope-Market.Models.Market(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Market.Models.Market::~Envelope-Market.Models.Market()
{

}

void
Envelope-Market.Models.Market::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *detailsKey = "Details";

    if(object.has_key(detailsKey))
    {
        bourne::json value = object[detailsKey];


        std::list<std::string> details_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            details_list.push_back(element);
        }
        details = details_list;


    }

    const char *resourceKey = "Resource";

    if(object.has_key(resourceKey))
    {
        bourne::json value = object[resourceKey];




        Market.Models.Market* obj = &resource;
		obj->fromJson(value.dump());

    }

    const char *pageResultKey = "PageResult";

    if(object.has_key(pageResultKey))
    {
        bourne::json value = object[pageResultKey];




        PageResult* obj = &pageResult;
		obj->fromJson(value.dump());

    }


}

bourne::json
Envelope-Market.Models.Market::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();





    std::list<std::string> details_list = getDetails();
    bourne::json details_arr = bourne::json::array();

    for(auto& var : details_list)
    {
        details_arr.append(var);
    }
    object["details"] = details_arr;










	object["resource"] = getResource().toJson();






	object["pageResult"] = getPageResult().toJson();


    return object;

}

std::string
Envelope-Market.Models.Market::getMessage()
{
	return message;
}

void
Envelope-Market.Models.Market::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Market.Models.Market::getDetails()
{
	return details;
}

void
Envelope-Market.Models.Market::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Market.Models.Market
Envelope-Market.Models.Market::getResource()
{
	return resource;
}

void
Envelope-Market.Models.Market::setResource(Market.Models.Market  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Market.Models.Market::getPageResult()
{
	return pageResult;
}

void
Envelope-Market.Models.Market::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



