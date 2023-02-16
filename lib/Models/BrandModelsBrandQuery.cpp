

#include "Brand.Models.BrandQuery.h"

using namespace Tiny;

Brand.Models.BrandQuery::Brand.Models.BrandQuery()
{
	createdAfter = std::string();
	brandIds = std::list<int>();
	externalIds = std::list<std::string>();
}

Brand.Models.BrandQuery::Brand.Models.BrandQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Brand.Models.BrandQuery::~Brand.Models.BrandQuery()
{

}

void
Brand.Models.BrandQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *createdAfterKey = "CreatedAfter";

    if(object.has_key(createdAfterKey))
    {
        bourne::json value = object[createdAfterKey];



        jsonToValue(&createdAfter, value, "std::string");


    }

    const char *brandIdsKey = "BrandIds";

    if(object.has_key(brandIdsKey))
    {
        bourne::json value = object[brandIdsKey];


        std::list<int> brandIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            brandIds_list.push_back(element);
        }
        brandIds = brandIds_list;


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
Brand.Models.BrandQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["createdAfter"] = getCreatedAfter();





    std::list<int> brandIds_list = getBrandIds();
    bourne::json brandIds_arr = bourne::json::array();

    for(auto& var : brandIds_list)
    {
        brandIds_arr.append(var);
    }
    object["brandIds"] = brandIds_arr;








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
Brand.Models.BrandQuery::getCreatedAfter()
{
	return createdAfter;
}

void
Brand.Models.BrandQuery::setCreatedAfter(std::string  createdAfter)
{
	this->createdAfter = createdAfter;
}

std::list<int>
Brand.Models.BrandQuery::getBrandIds()
{
	return brandIds;
}

void
Brand.Models.BrandQuery::setBrandIds(std::list <int> brandIds)
{
	this->brandIds = brandIds;
}

std::list<std::string>
Brand.Models.BrandQuery::getExternalIds()
{
	return externalIds;
}

void
Brand.Models.BrandQuery::setExternalIds(std::list <std::string> externalIds)
{
	this->externalIds = externalIds;
}



