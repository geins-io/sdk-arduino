

#include "Brand.Models.Read.Brand.h"

using namespace Tiny;

Brand.Models.Read.Brand::Brand.Models.Read.Brand()
{
	brandId = int(0);
	name = std::string();
	externalId = std::string();
	descriptions = std::list<Shared.Models.LocalizableContent>();
}

Brand.Models.Read.Brand::Brand.Models.Read.Brand(std::string jsonString)
{
	this->fromJson(jsonString);
}

Brand.Models.Read.Brand::~Brand.Models.Read.Brand()
{

}

void
Brand.Models.Read.Brand::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *brandIdKey = "BrandId";

    if(object.has_key(brandIdKey))
    {
        bourne::json value = object[brandIdKey];



        jsonToValue(&brandId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *descriptionsKey = "Descriptions";

    if(object.has_key(descriptionsKey))
    {
        bourne::json value = object[descriptionsKey];


        std::list<Shared.Models.LocalizableContent> descriptions_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            descriptions_list.push_back(element);
        }
        descriptions = descriptions_list;


    }


}

bourne::json
Brand.Models.Read.Brand::toJson()
{
    bourne::json object = bourne::json::object();





    object["brandId"] = getBrandId();






    object["name"] = getName();






    object["externalId"] = getExternalId();





    std::list<Shared.Models.LocalizableContent> descriptions_list = getDescriptions();
    bourne::json descriptions_arr = bourne::json::array();

    for(auto& var : descriptions_list)
    {
        Shared.Models.LocalizableContent obj = var;
        descriptions_arr.append(obj.toJson());
    }
    object["descriptions"] = descriptions_arr;




    return object;

}

int
Brand.Models.Read.Brand::getBrandId()
{
	return brandId;
}

void
Brand.Models.Read.Brand::setBrandId(int  brandId)
{
	this->brandId = brandId;
}

std::string
Brand.Models.Read.Brand::getName()
{
	return name;
}

void
Brand.Models.Read.Brand::setName(std::string  name)
{
	this->name = name;
}

std::string
Brand.Models.Read.Brand::getExternalId()
{
	return externalId;
}

void
Brand.Models.Read.Brand::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::list<Shared.Models.LocalizableContent>
Brand.Models.Read.Brand::getDescriptions()
{
	return descriptions;
}

void
Brand.Models.Read.Brand::setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions)
{
	this->descriptions = descriptions;
}



