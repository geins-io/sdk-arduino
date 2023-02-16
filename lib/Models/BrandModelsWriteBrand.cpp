

#include "Brand.Models.Write.Brand.h"

using namespace Tiny;

Brand.Models.Write.Brand::Brand.Models.Write.Brand()
{
	name = std::string();
	externalId = std::string();
	descriptions = std::list<Shared.Models.LocalizableContent>();
}

Brand.Models.Write.Brand::Brand.Models.Write.Brand(std::string jsonString)
{
	this->fromJson(jsonString);
}

Brand.Models.Write.Brand::~Brand.Models.Write.Brand()
{

}

void
Brand.Models.Write.Brand::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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
Brand.Models.Write.Brand::toJson()
{
    bourne::json object = bourne::json::object();





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

std::string
Brand.Models.Write.Brand::getName()
{
	return name;
}

void
Brand.Models.Write.Brand::setName(std::string  name)
{
	this->name = name;
}

std::string
Brand.Models.Write.Brand::getExternalId()
{
	return externalId;
}

void
Brand.Models.Write.Brand::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::list<Shared.Models.LocalizableContent>
Brand.Models.Write.Brand::getDescriptions()
{
	return descriptions;
}

void
Brand.Models.Write.Brand::setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions)
{
	this->descriptions = descriptions;
}



