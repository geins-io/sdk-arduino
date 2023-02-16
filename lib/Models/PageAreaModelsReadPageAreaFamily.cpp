

#include "PageArea.Models.Read.PageAreaFamily.h"

using namespace Tiny;

PageArea.Models.Read.PageAreaFamily::PageArea.Models.Read.PageAreaFamily()
{
	id = int(0);
	name = std::string();
	filterableProperties = std::string();
	areas = std::list<PageArea.Models.Read.PageArea>();
}

PageArea.Models.Read.PageAreaFamily::PageArea.Models.Read.PageAreaFamily(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Read.PageAreaFamily::~PageArea.Models.Read.PageAreaFamily()
{

}

void
PageArea.Models.Read.PageAreaFamily::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *filterablePropertiesKey = "FilterableProperties";

    if(object.has_key(filterablePropertiesKey))
    {
        bourne::json value = object[filterablePropertiesKey];



        jsonToValue(&filterableProperties, value, "std::string");


    }

    const char *areasKey = "Areas";

    if(object.has_key(areasKey))
    {
        bourne::json value = object[areasKey];


        std::list<PageArea.Models.Read.PageArea> areas_list;
        PageArea.Models.Read.PageArea element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            areas_list.push_back(element);
        }
        areas = areas_list;


    }


}

bourne::json
PageArea.Models.Read.PageAreaFamily::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["filterableProperties"] = getFilterableProperties();





    std::list<PageArea.Models.Read.PageArea> areas_list = getAreas();
    bourne::json areas_arr = bourne::json::array();

    for(auto& var : areas_list)
    {
        PageArea.Models.Read.PageArea obj = var;
        areas_arr.append(obj.toJson());
    }
    object["areas"] = areas_arr;




    return object;

}

int
PageArea.Models.Read.PageAreaFamily::getId()
{
	return id;
}

void
PageArea.Models.Read.PageAreaFamily::setId(int  id)
{
	this->id = id;
}

std::string
PageArea.Models.Read.PageAreaFamily::getName()
{
	return name;
}

void
PageArea.Models.Read.PageAreaFamily::setName(std::string  name)
{
	this->name = name;
}

std::string
PageArea.Models.Read.PageAreaFamily::getFilterableProperties()
{
	return filterableProperties;
}

void
PageArea.Models.Read.PageAreaFamily::setFilterableProperties(std::string  filterableProperties)
{
	this->filterableProperties = filterableProperties;
}

std::list<PageArea.Models.Read.PageArea>
PageArea.Models.Read.PageAreaFamily::getAreas()
{
	return areas;
}

void
PageArea.Models.Read.PageAreaFamily::setAreas(std::list <PageArea.Models.Read.PageArea> areas)
{
	this->areas = areas;
}



