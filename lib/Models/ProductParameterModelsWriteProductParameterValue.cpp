

#include "ProductParameter.Models.Write.ProductParameterValue.h"

using namespace Tiny;

ProductParameter.Models.Write.ProductParameterValue::ProductParameter.Models.Write.ProductParameterValue()
{
	productId = int(0);
	parameterId = int(0);
	value = std::string();
	localizedDescriptions = std::list<Shared.Models.LocalizableContent>();
}

ProductParameter.Models.Write.ProductParameterValue::ProductParameter.Models.Write.ProductParameterValue(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Write.ProductParameterValue::~ProductParameter.Models.Write.ProductParameterValue()
{

}

void
ProductParameter.Models.Write.ProductParameterValue::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *parameterIdKey = "ParameterId";

    if(object.has_key(parameterIdKey))
    {
        bourne::json value = object[parameterIdKey];



        jsonToValue(&parameterId, value, "int");


    }

    const char *valueKey = "Value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }

    const char *localizedDescriptionsKey = "LocalizedDescriptions";

    if(object.has_key(localizedDescriptionsKey))
    {
        bourne::json value = object[localizedDescriptionsKey];


        std::list<Shared.Models.LocalizableContent> localizedDescriptions_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            localizedDescriptions_list.push_back(element);
        }
        localizedDescriptions = localizedDescriptions_list;


    }


}

bourne::json
ProductParameter.Models.Write.ProductParameterValue::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["parameterId"] = getParameterId();






    object["value"] = getValue();





    std::list<Shared.Models.LocalizableContent> localizedDescriptions_list = getLocalizedDescriptions();
    bourne::json localizedDescriptions_arr = bourne::json::array();

    for(auto& var : localizedDescriptions_list)
    {
        Shared.Models.LocalizableContent obj = var;
        localizedDescriptions_arr.append(obj.toJson());
    }
    object["localizedDescriptions"] = localizedDescriptions_arr;




    return object;

}

int
ProductParameter.Models.Write.ProductParameterValue::getProductId()
{
	return productId;
}

void
ProductParameter.Models.Write.ProductParameterValue::setProductId(int  productId)
{
	this->productId = productId;
}

int
ProductParameter.Models.Write.ProductParameterValue::getParameterId()
{
	return parameterId;
}

void
ProductParameter.Models.Write.ProductParameterValue::setParameterId(int  parameterId)
{
	this->parameterId = parameterId;
}

std::string
ProductParameter.Models.Write.ProductParameterValue::getValue()
{
	return value;
}

void
ProductParameter.Models.Write.ProductParameterValue::setValue(std::string  value)
{
	this->value = value;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Write.ProductParameterValue::getLocalizedDescriptions()
{
	return localizedDescriptions;
}

void
ProductParameter.Models.Write.ProductParameterValue::setLocalizedDescriptions(std::list <Shared.Models.LocalizableContent> localizedDescriptions)
{
	this->localizedDescriptions = localizedDescriptions;
}



