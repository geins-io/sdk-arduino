

#include "ProductParameter.Models.Write.ProductParameter.h"

using namespace Tiny;

ProductParameter.Models.Write.ProductParameter::ProductParameter.Models.Write.ProductParameter()
{
	parameterId = int(0);
	groupId = int(0);
	parameterType = int(0);
	name = std::string();
	localizedNames = std::list<Shared.Models.LocalizableContent>();
}

ProductParameter.Models.Write.ProductParameter::ProductParameter.Models.Write.ProductParameter(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Write.ProductParameter::~ProductParameter.Models.Write.ProductParameter()
{

}

void
ProductParameter.Models.Write.ProductParameter::fromJson(std::string jsonObj)
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
ProductParameter.Models.Write.ProductParameter::toJson()
{
    bourne::json object = bourne::json::object();





    object["parameterId"] = getParameterId();






    object["groupId"] = getGroupId();






    object["parameterType"] = getParameterType();






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
ProductParameter.Models.Write.ProductParameter::getParameterId()
{
	return parameterId;
}

void
ProductParameter.Models.Write.ProductParameter::setParameterId(int  parameterId)
{
	this->parameterId = parameterId;
}

int
ProductParameter.Models.Write.ProductParameter::getGroupId()
{
	return groupId;
}

void
ProductParameter.Models.Write.ProductParameter::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

int
ProductParameter.Models.Write.ProductParameter::getParameterType()
{
	return parameterType;
}

void
ProductParameter.Models.Write.ProductParameter::setParameterType(int  parameterType)
{
	this->parameterType = parameterType;
}

std::string
ProductParameter.Models.Write.ProductParameter::getName()
{
	return name;
}

void
ProductParameter.Models.Write.ProductParameter::setName(std::string  name)
{
	this->name = name;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Write.ProductParameter::getLocalizedNames()
{
	return localizedNames;
}

void
ProductParameter.Models.Write.ProductParameter::setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames)
{
	this->localizedNames = localizedNames;
}



