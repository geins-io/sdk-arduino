

#include "PageArea.Models.Write.PageAreaFamily.h"

using namespace Tiny;

PageArea.Models.Write.PageAreaFamily::PageArea.Models.Write.PageAreaFamily()
{
	id = int(0);
	name = std::string();
	filterableProperties = std::list<std::string>();
	areas = std::list<PageArea.Models.Write.PageArea>();
}

PageArea.Models.Write.PageAreaFamily::PageArea.Models.Write.PageAreaFamily(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Write.PageAreaFamily::~PageArea.Models.Write.PageAreaFamily()
{

}

void
PageArea.Models.Write.PageAreaFamily::fromJson(std::string jsonObj)
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


        std::list<std::string> filterableProperties_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            filterableProperties_list.push_back(element);
        }
        filterableProperties = filterableProperties_list;


    }

    const char *areasKey = "Areas";

    if(object.has_key(areasKey))
    {
        bourne::json value = object[areasKey];


        std::list<PageArea.Models.Write.PageArea> areas_list;
        PageArea.Models.Write.PageArea element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            areas_list.push_back(element);
        }
        areas = areas_list;


    }


}

bourne::json
PageArea.Models.Write.PageAreaFamily::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();





    std::list<std::string> filterableProperties_list = getFilterableProperties();
    bourne::json filterableProperties_arr = bourne::json::array();

    for(auto& var : filterableProperties_list)
    {
        filterableProperties_arr.append(var);
    }
    object["filterableProperties"] = filterableProperties_arr;








    std::list<PageArea.Models.Write.PageArea> areas_list = getAreas();
    bourne::json areas_arr = bourne::json::array();

    for(auto& var : areas_list)
    {
        PageArea.Models.Write.PageArea obj = var;
        areas_arr.append(obj.toJson());
    }
    object["areas"] = areas_arr;




    return object;

}

int
PageArea.Models.Write.PageAreaFamily::getId()
{
	return id;
}

void
PageArea.Models.Write.PageAreaFamily::setId(int  id)
{
	this->id = id;
}

std::string
PageArea.Models.Write.PageAreaFamily::getName()
{
	return name;
}

void
PageArea.Models.Write.PageAreaFamily::setName(std::string  name)
{
	this->name = name;
}

std::list<std::string>
PageArea.Models.Write.PageAreaFamily::getFilterableProperties()
{
	return filterableProperties;
}

void
PageArea.Models.Write.PageAreaFamily::setFilterableProperties(std::list <std::string> filterableProperties)
{
	this->filterableProperties = filterableProperties;
}

std::list<PageArea.Models.Write.PageArea>
PageArea.Models.Write.PageAreaFamily::getAreas()
{
	return areas;
}

void
PageArea.Models.Write.PageAreaFamily::setAreas(std::list <PageArea.Models.Write.PageArea> areas)
{
	this->areas = areas;
}



