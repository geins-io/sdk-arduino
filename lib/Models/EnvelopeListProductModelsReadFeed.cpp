

#include "Envelope-List-Product.Models.Read.Feed.h"

using namespace Tiny;

Envelope-List-Product.Models.Read.Feed::Envelope-List-Product.Models.Read.Feed()
{
	message = std::string();
	details = std::list<std::string>();
	resource = std::list<Product.Models.Read.Feed>();
	pageResult = PageResult();
}

Envelope-List-Product.Models.Read.Feed::Envelope-List-Product.Models.Read.Feed(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-List-Product.Models.Read.Feed::~Envelope-List-Product.Models.Read.Feed()
{

}

void
Envelope-List-Product.Models.Read.Feed::fromJson(std::string jsonObj)
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


        std::list<Product.Models.Read.Feed> resource_list;
        Product.Models.Read.Feed element;
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
Envelope-List-Product.Models.Read.Feed::toJson()
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








    std::list<Product.Models.Read.Feed> resource_list = getResource();
    bourne::json resource_arr = bourne::json::array();

    for(auto& var : resource_list)
    {
        Product.Models.Read.Feed obj = var;
        resource_arr.append(obj.toJson());
    }
    object["resource"] = resource_arr;








	object["pageResult"] = getPageResult().toJson();


    return object;

}

std::string
Envelope-List-Product.Models.Read.Feed::getMessage()
{
	return message;
}

void
Envelope-List-Product.Models.Read.Feed::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-List-Product.Models.Read.Feed::getDetails()
{
	return details;
}

void
Envelope-List-Product.Models.Read.Feed::setDetails(std::list <std::string> details)
{
	this->details = details;
}

std::list<Product.Models.Read.Feed>
Envelope-List-Product.Models.Read.Feed::getResource()
{
	return resource;
}

void
Envelope-List-Product.Models.Read.Feed::setResource(std::list <Product.Models.Read.Feed> resource)
{
	this->resource = resource;
}

PageResult
Envelope-List-Product.Models.Read.Feed::getPageResult()
{
	return pageResult;
}

void
Envelope-List-Product.Models.Read.Feed::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



