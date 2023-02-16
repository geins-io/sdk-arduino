

#include "Envelope.h"

using namespace Tiny;

Envelope::Envelope()
{
	message = std::string();
	details = std::list<std::string>();
	resource = null;
	pageResult = PageResult();
}

Envelope::Envelope(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope::~Envelope()
{

}

void
Envelope::fromJson(std::string jsonObj)
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




        Object* obj = &resource;
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
Envelope::toJson()
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
Envelope::getMessage()
{
	return message;
}

void
Envelope::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope::getDetails()
{
	return details;
}

void
Envelope::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Object
Envelope::getResource()
{
	return resource;
}

void
Envelope::setResource(Object  resource)
{
	this->resource = resource;
}

PageResult
Envelope::getPageResult()
{
	return pageResult;
}

void
Envelope::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



