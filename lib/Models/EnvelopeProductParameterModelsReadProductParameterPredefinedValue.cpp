

#include "Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue.h"

using namespace Tiny;

Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue()
{
	message = std::string();
	details = std::list<std::string>();
	resource = ProductParameter.Models.Read.ProductParameterPredefinedValue();
	pageResult = PageResult();
}

Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue(std::string jsonString)
{
	this->fromJson(jsonString);
}

Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::~Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue()
{

}

void
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::fromJson(std::string jsonObj)
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




        ProductParameter.Models.Read.ProductParameterPredefinedValue* obj = &resource;
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
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::toJson()
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
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::getMessage()
{
	return message;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::getDetails()
{
	return details;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::setDetails(std::list <std::string> details)
{
	this->details = details;
}

ProductParameter.Models.Read.ProductParameterPredefinedValue
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::getResource()
{
	return resource;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::setResource(ProductParameter.Models.Read.ProductParameterPredefinedValue  resource)
{
	this->resource = resource;
}

PageResult
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::getPageResult()
{
	return pageResult;
}

void
Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue::setPageResult(PageResult  pageResult)
{
	this->pageResult = pageResult;
}



