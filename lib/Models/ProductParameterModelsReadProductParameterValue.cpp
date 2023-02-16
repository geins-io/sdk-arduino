

#include "ProductParameter.Models.Read.ProductParameterValue.h"

using namespace Tiny;

ProductParameter.Models.Read.ProductParameterValue::ProductParameter.Models.Read.ProductParameterValue()
{
	parameterValueId = int(0);
	productId = int(0);
	parameterId = int(0);
	parameterName = std::string();
	groupId = int(0);
	groupName = std::string();
	parameterType = int(0);
	value = std::string();
	description = std::string();
	localizedDescriptions = std::list<Shared.Models.LocalizableContent>();
	internalIdentifier = std::string();
}

ProductParameter.Models.Read.ProductParameterValue::ProductParameter.Models.Read.ProductParameterValue(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Read.ProductParameterValue::~ProductParameter.Models.Read.ProductParameterValue()
{

}

void
ProductParameter.Models.Read.ProductParameterValue::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *parameterValueIdKey = "ParameterValueId";

    if(object.has_key(parameterValueIdKey))
    {
        bourne::json value = object[parameterValueIdKey];



        jsonToValue(&parameterValueId, value, "int");


    }

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

    const char *parameterNameKey = "ParameterName";

    if(object.has_key(parameterNameKey))
    {
        bourne::json value = object[parameterNameKey];



        jsonToValue(&parameterName, value, "std::string");


    }

    const char *groupIdKey = "GroupId";

    if(object.has_key(groupIdKey))
    {
        bourne::json value = object[groupIdKey];



        jsonToValue(&groupId, value, "int");


    }

    const char *groupNameKey = "GroupName";

    if(object.has_key(groupNameKey))
    {
        bourne::json value = object[groupNameKey];



        jsonToValue(&groupName, value, "std::string");


    }

    const char *parameterTypeKey = "ParameterType";

    if(object.has_key(parameterTypeKey))
    {
        bourne::json value = object[parameterTypeKey];



        jsonToValue(&parameterType, value, "int");


    }

    const char *valueKey = "Value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }

    const char *descriptionKey = "Description";

    if(object.has_key(descriptionKey))
    {
        bourne::json value = object[descriptionKey];



        jsonToValue(&description, value, "std::string");


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

    const char *internalIdentifierKey = "InternalIdentifier";

    if(object.has_key(internalIdentifierKey))
    {
        bourne::json value = object[internalIdentifierKey];



        jsonToValue(&internalIdentifier, value, "std::string");


    }


}

bourne::json
ProductParameter.Models.Read.ProductParameterValue::toJson()
{
    bourne::json object = bourne::json::object();





    object["parameterValueId"] = getParameterValueId();






    object["productId"] = getProductId();






    object["parameterId"] = getParameterId();






    object["parameterName"] = getParameterName();






    object["groupId"] = getGroupId();






    object["groupName"] = getGroupName();






    object["parameterType"] = getParameterType();






    object["value"] = getValue();






    object["description"] = getDescription();





    std::list<Shared.Models.LocalizableContent> localizedDescriptions_list = getLocalizedDescriptions();
    bourne::json localizedDescriptions_arr = bourne::json::array();

    for(auto& var : localizedDescriptions_list)
    {
        Shared.Models.LocalizableContent obj = var;
        localizedDescriptions_arr.append(obj.toJson());
    }
    object["localizedDescriptions"] = localizedDescriptions_arr;







    object["internalIdentifier"] = getInternalIdentifier();



    return object;

}

int
ProductParameter.Models.Read.ProductParameterValue::getParameterValueId()
{
	return parameterValueId;
}

void
ProductParameter.Models.Read.ProductParameterValue::setParameterValueId(int  parameterValueId)
{
	this->parameterValueId = parameterValueId;
}

int
ProductParameter.Models.Read.ProductParameterValue::getProductId()
{
	return productId;
}

void
ProductParameter.Models.Read.ProductParameterValue::setProductId(int  productId)
{
	this->productId = productId;
}

int
ProductParameter.Models.Read.ProductParameterValue::getParameterId()
{
	return parameterId;
}

void
ProductParameter.Models.Read.ProductParameterValue::setParameterId(int  parameterId)
{
	this->parameterId = parameterId;
}

std::string
ProductParameter.Models.Read.ProductParameterValue::getParameterName()
{
	return parameterName;
}

void
ProductParameter.Models.Read.ProductParameterValue::setParameterName(std::string  parameterName)
{
	this->parameterName = parameterName;
}

int
ProductParameter.Models.Read.ProductParameterValue::getGroupId()
{
	return groupId;
}

void
ProductParameter.Models.Read.ProductParameterValue::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

std::string
ProductParameter.Models.Read.ProductParameterValue::getGroupName()
{
	return groupName;
}

void
ProductParameter.Models.Read.ProductParameterValue::setGroupName(std::string  groupName)
{
	this->groupName = groupName;
}

int
ProductParameter.Models.Read.ProductParameterValue::getParameterType()
{
	return parameterType;
}

void
ProductParameter.Models.Read.ProductParameterValue::setParameterType(int  parameterType)
{
	this->parameterType = parameterType;
}

std::string
ProductParameter.Models.Read.ProductParameterValue::getValue()
{
	return value;
}

void
ProductParameter.Models.Read.ProductParameterValue::setValue(std::string  value)
{
	this->value = value;
}

std::string
ProductParameter.Models.Read.ProductParameterValue::getDescription()
{
	return description;
}

void
ProductParameter.Models.Read.ProductParameterValue::setDescription(std::string  description)
{
	this->description = description;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Read.ProductParameterValue::getLocalizedDescriptions()
{
	return localizedDescriptions;
}

void
ProductParameter.Models.Read.ProductParameterValue::setLocalizedDescriptions(std::list <Shared.Models.LocalizableContent> localizedDescriptions)
{
	this->localizedDescriptions = localizedDescriptions;
}

std::string
ProductParameter.Models.Read.ProductParameterValue::getInternalIdentifier()
{
	return internalIdentifier;
}

void
ProductParameter.Models.Read.ProductParameterValue::setInternalIdentifier(std::string  internalIdentifier)
{
	this->internalIdentifier = internalIdentifier;
}



