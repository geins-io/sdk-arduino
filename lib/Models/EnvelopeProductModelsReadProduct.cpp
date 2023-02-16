

#include "Envelope-Product.Models.Read.Product.h"

using namespace Tiny;

Envelope-Product.Models.Read.Product::Envelope-Product.Models.Read.Product()
{
	message = std::string();
	details = std::list<std::string>();
	resource = Product.Models.Read.Product();
	pageResult = PageResult();
}

Envelope-Product.Models.Read.Product::Envelope-Product.Models.Read.Product(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Product.Models.Read.Product::~Envelope-Product.Models.Read.Product()
{

}

void
Envelope-Product.Models.Read.Product::fromJson(std::string jsonObj)
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




        Product.Models.Read.Product* obj = &resource;
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
Envelope-Product.Models.Read.Product::toJson()
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
Envelope-Product.Models.Read.Product::getMessage()
{
	return message;
}

void
Envelope-Product.Models.Read.Product::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Product.Models.Read.Product::getDetails()
{
	return details;
}

void
Envelope-Product.Models.Read.Product::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Product.Models.Read.Product
Envelope-Product.Models.Read.Product::getResource()
{
	return resource;
}

void
Envelope-Product.Models.Read.Product::setResource(Product.Models.Read.Product  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Product.Models.Read.Product::getPageResult()
{
	return pageResult;
}

void
Envelope-Product.Models.Read.Product::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



