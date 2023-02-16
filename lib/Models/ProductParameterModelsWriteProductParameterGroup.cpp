

#include "ProductParameter.Models.Write.ProductParameterGroup.h"

using namespace Tiny;

ProductParameter.Models.Write.ProductParameterGroup::ProductParameter.Models.Write.ProductParameterGroup()
{
	name = std::string();
	localizedNames = std::list<Shared.Models.LocalizableContent>();
	parameterIds = std::list<int>();
}

ProductParameter.Models.Write.ProductParameterGroup::ProductParameter.Models.Write.ProductParameterGroup(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Write.ProductParameterGroup::~ProductParameter.Models.Write.ProductParameterGroup()
{

}

void
ProductParameter.Models.Write.ProductParameterGroup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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
ProductParameter.Models.Write.ProductParameterGroup::toJson()
{
    bourne::json object = bourne::json::object();





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

std::string
ProductParameter.Models.Write.ProductParameterGroup::getName()
{
	return name;
}

void
ProductParameter.Models.Write.ProductParameterGroup::setName(std::string  name)
{
	this->name = name;
}

std::list<Shared.Models.LocalizableContent>
ProductParameter.Models.Write.ProductParameterGroup::getLocalizedNames()
{
	return localizedNames;
}

void
ProductParameter.Models.Write.ProductParameterGroup::setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames)
{
	this->localizedNames = localizedNames;
}

std::list<int>
ProductParameter.Models.Write.ProductParameterGroup::getParameterIds()
{
	return parameterIds;
}

void
ProductParameter.Models.Write.ProductParameterGroup::setParameterIds(std::list <int> parameterIds)
{
	this->parameterIds = parameterIds;
}



