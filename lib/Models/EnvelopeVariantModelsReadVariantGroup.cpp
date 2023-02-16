

#include "Envelope-Variant.Models.Read.VariantGroup.h"

using namespace Tiny;

Envelope-Variant.Models.Read.VariantGroup::Envelope-Variant.Models.Read.VariantGroup()
{
	message = std::string();
	details = std::list<std::string>();
	resource = Variant.Models.Read.VariantGroup();
	pageResult = PageResult();
}

Envelope-Variant.Models.Read.VariantGroup::Envelope-Variant.Models.Read.VariantGroup(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Variant.Models.Read.VariantGroup::~Envelope-Variant.Models.Read.VariantGroup()
{

}

void
Envelope-Variant.Models.Read.VariantGroup::fromJson(std::string jsonObj)
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




        Variant.Models.Read.VariantGroup* obj = &resource;
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
Envelope-Variant.Models.Read.VariantGroup::toJson()
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
Envelope-Variant.Models.Read.VariantGroup::getMessage()
{
	return message;
}

void
Envelope-Variant.Models.Read.VariantGroup::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Variant.Models.Read.VariantGroup::getDetails()
{
	return details;
}

void
Envelope-Variant.Models.Read.VariantGroup::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Variant.Models.Read.VariantGroup
Envelope-Variant.Models.Read.VariantGroup::getResource()
{
	return resource;
}

void
Envelope-Variant.Models.Read.VariantGroup::setResource(Variant.Models.Read.VariantGroup  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Variant.Models.Read.VariantGroup::getPageResult()
{
	return pageResult;
}

void
Envelope-Variant.Models.Read.VariantGroup::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



