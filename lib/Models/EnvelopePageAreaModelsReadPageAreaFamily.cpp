

#include "Envelope-PageArea.Models.Read.PageAreaFamily.h"

using namespace Tiny;

Envelope-PageArea.Models.Read.PageAreaFamily::Envelope-PageArea.Models.Read.PageAreaFamily()
{
	message = std::string();
	details = std::list<std::string>();
	resource = PageArea.Models.Read.PageAreaFamily();
	pageResult = PageResult();
}

Envelope-PageArea.Models.Read.PageAreaFamily::Envelope-PageArea.Models.Read.PageAreaFamily(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-PageArea.Models.Read.PageAreaFamily::~Envelope-PageArea.Models.Read.PageAreaFamily()
{

}

void
Envelope-PageArea.Models.Read.PageAreaFamily::fromJson(std::string jsonObj)
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




        PageArea.Models.Read.PageAreaFamily* obj = &resource;
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
Envelope-PageArea.Models.Read.PageAreaFamily::toJson()
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
Envelope-PageArea.Models.Read.PageAreaFamily::getMessage()
{
	return message;
}

void
Envelope-PageArea.Models.Read.PageAreaFamily::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-PageArea.Models.Read.PageAreaFamily::getDetails()
{
	return details;
}

void
Envelope-PageArea.Models.Read.PageAreaFamily::setDetails(std::list <std::string> details)
{
	this->details = details;
}

PageArea.Models.Read.PageAreaFamily
Envelope-PageArea.Models.Read.PageAreaFamily::getResource()
{
	return resource;
}

void
Envelope-PageArea.Models.Read.PageAreaFamily::setResource(PageArea.Models.Read.PageAreaFamily  resource)
{
	this->resource = resource;
}

PageResult
Envelope-PageArea.Models.Read.PageAreaFamily::getPageResult()
{
	return pageResult;
}

void
Envelope-PageArea.Models.Read.PageAreaFamily::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



