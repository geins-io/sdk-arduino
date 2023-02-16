

#include "ProductParameter.Models.Read.ProductParameterGroup.h"

using namespace Tiny;

ProductParameter.Models.Read.ProductParameterGroup::ProductParameter.Models.Read.ProductParameterGroup()
{
	groupId = int(0);
	name = std::string();
	localizedNames = std::list<Shared.Models.LocalizableContent>();
	parameterIds = std::list<int>();
}

ProductParameter.Models.Read.ProductParameterGroup::ProductParameter.Models.Read.ProductParameterGroup(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Read.ProductParameterGroup::~ProductParameter.Models.Read.ProductParameterGroup()
{

}

void
ProductParameter.Models.Read.ProductParameterGroup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *groupIdKey = "GroupId";

    if(object.has_key(groupIdKey))
    {
        bourne::json value = object[groupIdKey];



        jsonToValue(&groupId, value, "int");


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

    const char *parameterIdsKey = "ParameterIds";

    if(object.has_key(parameterIdsKey))
    {
        bourne::json value = object[parameterIdsKey];


        std::list<int> parameterIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            parameterIds_list.push_back(element);
        }
        parameterIds = parameterIds_list;


    }


}

bourne::json
ProductParameter.Models.Read.ProductParameterGroup::toJson()
{
    bourne::json object = bourne::json::object();





    object["groupId"] = getGroupId();






    object["name"] = getName();





    std::list<Shared.Models.LocalizableContent> localizedNames_list = getLocalizedNames();
    bourne::json localizedNames_arr = bourne::json::array();

    for(auto& var : localizedNames_list)
    {
        Shared.Models.LocalizableContent obj = var;
        localizedNames_arr.append(obj.toJson());
    }
    object["localizedNames"] = localizedNames_arr;






    std::list<int> parameterIds_list = getParameterIds();
    bourne::json parameterIds_arr = bourne::json::array();

    for(auto& var : parameterIds_list)
    {
        parameterIds_arr.append(var);
    }
    object["parameterIds"] = parameterIds_arr;






    return object;

}

int
ProductParameter.Models.Read.ProductParameterGroup::getGroupId()
{
	return groupId;
}

void
ProductParameter.Models.Read.ProductParameterGroup::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

std::string
ProductParameter.Models.Read.ProductParameterGroup::getName()
{
	return name;
}

void
ProductParameter.Models.Read.ProductParameterGroup::setName(std::string  name)
{
	this->name = name;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Read.ProductParameterGroup::getLocalizedNames()
{
	return localizedNames;
}

void
ProductParameter.Models.Read.ProductParameterGroup::setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames)
{
	this->localizedNames = localizedNames;
}

std::list<int>
ProductParameter.Models.Read.ProductParameterGroup::getParameterIds()
{
	return parameterIds;
}

void
ProductParameter.Models.Read.ProductParameterGroup::setParameterIds(std::list <int> parameterIds)
{
	this->parameterIds = parameterIds;
}



