

#include "Envelope-ProductParameter.Models.Read.ProductParameterValue.h"

using namespace Tiny;

Envelope-ProductParameter.Models.Read.ProductParameterValue::Envelope-ProductParameter.Models.Read.ProductParameterValue()
{
	message = std::string();
	details = std::list<std::string>();
	resource = ProductParameter.Models.Read.ProductParameterValue();
	pageResult = PageResult();
}

Envelope-ProductParameter.Models.Read.ProductParameterValue::Envelope-ProductParameter.Models.Read.ProductParameterValue(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-ProductParameter.Models.Read.ProductParameterValue::~Envelope-ProductParameter.Models.Read.ProductParameterValue()
{

}

void
Envelope-ProductParameter.Models.Read.ProductParameterValue::fromJson(std::string jsonObj)
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




        ProductParameter.Models.Read.ProductParameterValue* obj = &resource;
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
Envelope-ProductParameter.Models.Read.ProductParameterValue::toJson()
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
Envelope-ProductParameter.Models.Read.ProductParameterValue::getMessage()
{
	return message;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterValue::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-ProductParameter.Models.Read.ProductParameterValue::getDetails()
{
	return details;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterValue::setDetails(std::list <std::string> details)
{
	this->details = details;
}

ProductParameter.Models.Read.ProductParameterValue
Envelope-ProductParameter.Models.Read.ProductParameterValue::getResource()
{
	return resource;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterValue::setResource(ProductParameter.Models.Read.ProductParameterValue  resource)
{
	this->resource = resource;
}

PageResult
Envelope-ProductParameter.Models.Read.ProductParameterValue::getPageResult()
{
	return pageResult;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterValue::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



