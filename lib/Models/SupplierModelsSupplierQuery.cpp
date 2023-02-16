

#include "Supplier.Models.SupplierQuery.h"

using namespace Tiny;

Supplier.Models.SupplierQuery::Supplier.Models.SupplierQuery()
{
	nameContains = std::string();
	externalIds = std::list<std::string>();
}

Supplier.Models.SupplierQuery::Supplier.Models.SupplierQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Supplier.Models.SupplierQuery::~Supplier.Models.SupplierQuery()
{

}

void
Supplier.Models.SupplierQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameContainsKey = "NameContains";

    if(object.has_key(nameContainsKey))
    {
        bourne::json value = object[nameContainsKey];



        jsonToValue(&nameContains, value, "std::string");


    }

    const char *externalIdsKey = "ExternalIds";

    if(object.has_key(externalIdsKey))
    {
        bourne::json value = object[externalIdsKey];


        std::list<std::string> externalIds_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            externalIds_list.push_back(element);
        }
        externalIds = externalIds_list;


    }


}

bourne::json
Supplier.Models.SupplierQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["nameContains"] = getNameContains();





    std::list<std::string> externalIds_list = getExternalIds();
    bourne::json externalIds_arr = bourne::json::array();

    for(auto& var : externalIds_list)
    {
        externalIds_arr.append(var);
    }
    object["externalIds"] = externalIds_arr;






    return object;

}

std::string
Supplier.Models.SupplierQuery::getNameContains()
{
	return nameContains;
}

void
Supplier.Models.SupplierQuery::setNameContains(std::string  nameContains)
{
	this->nameContains = nameContains;
}

std::list<std::string>
Supplier.Models.SupplierQuery::getExternalIds()
{
	return externalIds;
}

void
Supplier.Models.SupplierQuery::setExternalIds(std::list <std::string> externalIds)
{
	this->externalIds = externalIds;
}



