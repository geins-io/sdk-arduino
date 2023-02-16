

#include "Envelope-Variant.Models.Read.Variant-.h"

using namespace Tiny;

Envelope-Variant.Models.Read.Variant-::Envelope-Variant.Models.Read.Variant-()
{
	message = std::string();
	details = std::list<std::string>();
	resource = std::list<Variant.Models.Read.Variant>();
	pageResult = PageResult();
}

Envelope-Variant.Models.Read.Variant-::Envelope-Variant.Models.Read.Variant-(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Variant.Models.Read.Variant-::~Envelope-Variant.Models.Read.Variant-()
{

}

void
Envelope-Variant.Models.Read.Variant-::fromJson(std::string jsonObj)
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


        std::list<Variant.Models.Read.Variant> resource_list;
        Variant.Models.Read.Variant element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            resource_list.push_back(element);
        }
        resource = resource_list;


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
Envelope-Variant.Models.Read.Variant-::toJson()
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








    std::list<Variant.Models.Read.Variant> resource_list = getResource();
    bourne::json resource_arr = bourne::json::array();

    for(auto& var : resource_list)
    {
        Variant.Models.Read.Variant obj = var;
        resource_arr.append(obj.toJson());
    }
    object["resource"] = resource_arr;








	object["pageResult"] = getPageResult().toJson();


    return object;

}

std::string
Envelope-Variant.Models.Read.Variant-::getMessage()
{
	return message;
}

void
Envelope-Variant.Models.Read.Variant-::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Variant.Models.Read.Variant-::getDetails()
{
	return details;
}

void
Envelope-Variant.Models.Read.Variant-::setDetails(std::list <std::string> details)
{
	this->details = details;
}

std::list<Variant.Models.Read.Variant>
Envelope-Variant.Models.Read.Variant-::getResource()
{
	return resource;
}

void
Envelope-Variant.Models.Read.Variant-::setResource(std::list <Variant.Models.Read.Variant> resource)
{
	this->resource = resource;
}

PageResult
Envelope-Variant.Models.Read.Variant-::getPageResult()
{
	return pageResult;
}

void
Envelope-Variant.Models.Read.Variant-::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



