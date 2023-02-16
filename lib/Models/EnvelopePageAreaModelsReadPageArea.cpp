

#include "Envelope-PageArea.Models.Read.PageArea.h"

using namespace Tiny;

Envelope-PageArea.Models.Read.PageArea::Envelope-PageArea.Models.Read.PageArea()
{
	message = std::string();
	details = std::list<std::string>();
	resource = PageArea.Models.Read.PageArea();
	pageResult = PageResult();
}

Envelope-PageArea.Models.Read.PageArea::Envelope-PageArea.Models.Read.PageArea(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-PageArea.Models.Read.PageArea::~Envelope-PageArea.Models.Read.PageArea()
{

}

void
Envelope-PageArea.Models.Read.PageArea::fromJson(std::string jsonObj)
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




        PageArea.Models.Read.PageArea* obj = &resource;
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
Envelope-PageArea.Models.Read.PageArea::toJson()
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
Envelope-PageArea.Models.Read.PageArea::getMessage()
{
	return message;
}

void
Envelope-PageArea.Models.Read.PageArea::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-PageArea.Models.Read.PageArea::getDetails()
{
	return details;
}

void
Envelope-PageArea.Models.Read.PageArea::setDetails(std::list <std::string> details)
{
	this->details = details;
}

PageArea.Models.Read.PageArea
Envelope-PageArea.Models.Read.PageArea::getResource()
{
	return resource;
}

void
Envelope-PageArea.Models.Read.PageArea::setResource(PageArea.Models.Read.PageArea  resource)
{
	this->resource = resource;
}

PageResult
Envelope-PageArea.Models.Read.PageArea::getPageResult()
{
	return pageResult;
}

void
Envelope-PageArea.Models.Read.PageArea::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



