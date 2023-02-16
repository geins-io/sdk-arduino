

#include "Envelope-Supplier.Models.Read.Supplier.h"

using namespace Tiny;

Envelope-Supplier.Models.Read.Supplier::Envelope-Supplier.Models.Read.Supplier()
{
	message = std::string();
	details = std::list<std::string>();
	resource = Supplier.Models.Read.Supplier();
	pageResult = PageResult();
}

Envelope-Supplier.Models.Read.Supplier::Envelope-Supplier.Models.Read.Supplier(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Supplier.Models.Read.Supplier::~Envelope-Supplier.Models.Read.Supplier()
{

}

void
Envelope-Supplier.Models.Read.Supplier::fromJson(std::string jsonObj)
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




        Supplier.Models.Read.Supplier* obj = &resource;
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
Envelope-Supplier.Models.Read.Supplier::toJson()
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
Envelope-Supplier.Models.Read.Supplier::getMessage()
{
	return message;
}

void
Envelope-Supplier.Models.Read.Supplier::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Supplier.Models.Read.Supplier::getDetails()
{
	return details;
}

void
Envelope-Supplier.Models.Read.Supplier::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Supplier.Models.Read.Supplier
Envelope-Supplier.Models.Read.Supplier::getResource()
{
	return resource;
}

void
Envelope-Supplier.Models.Read.Supplier::setResource(Supplier.Models.Read.Supplier  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Supplier.Models.Read.Supplier::getPageResult()
{
	return pageResult;
}

void
Envelope-Supplier.Models.Read.Supplier::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



