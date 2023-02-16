

#include "ProductParameter.Models.Read.ProductParameter.h"

using namespace Tiny;

ProductParameter.Models.Read.ProductParameter::ProductParameter.Models.Read.ProductParameter()
{
	parameterId = int(0);
	groupId = int(0);
	groupName = std::string();
	parameterType = int(0);
	name = std::string();
}

ProductParameter.Models.Read.ProductParameter::ProductParameter.Models.Read.ProductParameter(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Read.ProductParameter::~ProductParameter.Models.Read.ProductParameter()
{

}

void
ProductParameter.Models.Read.ProductParameter::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *parameterIdKey = "ParameterId";

    if(object.has_key(parameterIdKey))
    {
        bourne::json value = object[parameterIdKey];



        jsonToValue(&parameterId, value, "int");


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

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }


}

bourne::json
ProductParameter.Models.Read.ProductParameter::toJson()
{
    bourne::json object = bourne::json::object();





    object["parameterId"] = getParameterId();






    object["groupId"] = getGroupId();






    object["groupName"] = getGroupName();






    object["parameterType"] = getParameterType();






    object["name"] = getName();



    return object;

}

int
ProductParameter.Models.Read.ProductParameter::getParameterId()
{
	return parameterId;
}

void
ProductParameter.Models.Read.ProductParameter::setParameterId(int  parameterId)
{
	this->parameterId = parameterId;
}

int
ProductParameter.Models.Read.ProductParameter::getGroupId()
{
	return groupId;
}

void
ProductParameter.Models.Read.ProductParameter::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

std::string
ProductParameter.Models.Read.ProductParameter::getGroupName()
{
	return groupName;
}

void
ProductParameter.Models.Read.ProductParameter::setGroupName(std::string  groupName)
{
	this->groupName = groupName;
}

int
ProductParameter.Models.Read.ProductParameter::getParameterType()
{
	return parameterType;
}

void
ProductParameter.Models.Read.ProductParameter::setParameterType(int  parameterType)
{
	this->parameterType = parameterType;
}

std::string
ProductParameter.Models.Read.ProductParameter::getName()
{
	return name;
}

void
ProductParameter.Models.Read.ProductParameter::setName(std::string  name)
{
	this->name = name;
}



