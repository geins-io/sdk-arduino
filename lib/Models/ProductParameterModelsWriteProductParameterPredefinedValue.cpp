

#include "ProductParameter.Models.Write.ProductParameterPredefinedValue.h"

using namespace Tiny;

ProductParameter.Models.Write.ProductParameterPredefinedValue::ProductParameter.Models.Write.ProductParameterPredefinedValue()
{
	parameterId = int(0);
	predefinedValueId = int(0);
	name = std::string();
	localizedNames = std::list<Shared.Models.LocalizableContent>();
}

ProductParameter.Models.Write.ProductParameterPredefinedValue::ProductParameter.Models.Write.ProductParameterPredefinedValue(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Write.ProductParameterPredefinedValue::~ProductParameter.Models.Write.ProductParameterPredefinedValue()
{

}

void
ProductParameter.Models.Write.ProductParameterPredefinedValue::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *parameterIdKey = "ParameterId";

    if(object.has_key(parameterIdKey))
    {
        bourne::json value = object[parameterIdKey];



        jsonToValue(&parameterId, value, "int");


    }

    const char *predefinedValueIdKey = "PredefinedValueId";

    if(object.has_key(predefinedValueIdKey))
    {
        bourne::json value = object[predefinedValueIdKey];



        jsonToValue(&predefinedValueId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *localizedNamesKey = "LocalizedNames";

    if(object.has_key(localizedNamesKey))
    {
        bourne::json value = object[localizedNamesKey];


        std::list<Shared.Models.LocalizableContent> localizedNames_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            localizedNames_list.push_back(element);
        }
        localizedNames = localizedNames_list;


    }


}

bourne::json
ProductParameter.Models.Write.ProductParameterPredefinedValue::toJson()
{
    bourne::json object = bourne::json::object();





    object["parameterId"] = getParameterId();






    object["predefinedValueId"] = getPredefinedValueId();






    object["name"] = getName();





    std::list<Shared.Models.LocalizableContent> localizedNames_list = getLocalizedNames();
    bourne::json localizedNames_arr = bourne::json::array();

    for(auto& var : localizedNames_list)
    {
        Shared.Models.LocalizableContent obj = var;
        localizedNames_arr.append(obj.toJson());
    }
    object["localizedNames"] = localizedNames_arr;




    return object;

}

int
ProductParameter.Models.Write.ProductParameterPredefinedValue::getParameterId()
{
	return parameterId;
}

void
ProductParameter.Models.Write.ProductParameterPredefinedValue::setParameterId(int  parameterId)
{
	this->parameterId = parameterId;
}

int
ProductParameter.Models.Write.ProductParameterPredefinedValue::getPredefinedValueId()
{
	return predefinedValueId;
}

void
ProductParameter.Models.Write.ProductParameterPredefinedValue::setPredefinedValueId(int  predefinedValueId)
{
	this->predefinedValueId = predefinedValueId;
}

std::string
ProductParameter.Models.Write.ProductParameterPredefinedValue::getName()
{
	return name;
}

void
ProductParameter.Models.Write.ProductParameterPredefinedValue::setName(std::string  name)
{
	this->name = name;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Write.ProductParameterPredefinedValue::getLocalizedNames()
{
	return localizedNames;
}

void
ProductParameter.Models.Write.ProductParameterPredefinedValue::setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames)
{
	this->localizedNames = localizedNames;
}



