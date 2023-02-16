

#include "Envelope-Int.h"

using namespace Tiny;

Envelope-Int::Envelope-Int()
{
	message = std::string();
	details = std::list<std::string>();
	resource = int(0);
	pageResult = PageResult();
}

Envelope-Int::Envelope-Int(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Int::~Envelope-Int()
{

}

void
Envelope-Int::fromJson(std::string jsonObj)
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



        jsonToValue(&resource, value, "int");


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
Envelope-Int::toJson()
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









    object["resource"] = getResource();







	object["pageResult"] = getPageResult().toJson();


    return object;

}

std::string
Envelope-Int::getMessage()
{
	return message;
}

void
Envelope-Int::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Int::getDetails()
{
	return details;
}

void
Envelope-Int::setDetails(std::list <std::string> details)
{
	this->details = details;
}

int
Envelope-Int::getResource()
{
	return resource;
}

void
Envelope-Int::setResource(int  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Int::getPageResult()
{
	return pageResult;
}

void
Envelope-Int::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



