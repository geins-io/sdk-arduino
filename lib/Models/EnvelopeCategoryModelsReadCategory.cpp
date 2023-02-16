

#include "Envelope-Category.Models.Read.Category.h"

using namespace Tiny;

Envelope-Category.Models.Read.Category::Envelope-Category.Models.Read.Category()
{
	message = std::string();
	details = std::list<std::string>();
	resource = Category.Models.Read.Category();
	pageResult = PageResult();
}

Envelope-Category.Models.Read.Category::Envelope-Category.Models.Read.Category(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-Category.Models.Read.Category::~Envelope-Category.Models.Read.Category()
{

}

void
Envelope-Category.Models.Read.Category::fromJson(std::string jsonObj)
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




        Category.Models.Read.Category* obj = &resource;
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
Envelope-Category.Models.Read.Category::toJson()
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
Envelope-Category.Models.Read.Category::getMessage()
{
	return message;
}

void
Envelope-Category.Models.Read.Category::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-Category.Models.Read.Category::getDetails()
{
	return details;
}

void
Envelope-Category.Models.Read.Category::setDetails(std::list <std::string> details)
{
	this->details = details;
}

Category.Models.Read.Category
Envelope-Category.Models.Read.Category::getResource()
{
	return resource;
}

void
Envelope-Category.Models.Read.Category::setResource(Category.Models.Read.Category  resource)
{
	this->resource = resource;
}

PageResult
Envelope-Category.Models.Read.Category::getPageResult()
{
	return pageResult;
}

void
Envelope-Category.Models.Read.Category::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



