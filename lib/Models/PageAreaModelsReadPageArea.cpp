

#include "PageArea.Models.Read.PageArea.h"

using namespace Tiny;

PageArea.Models.Read.PageArea::PageArea.Models.Read.PageArea()
{
	index = int(0);
	name = std::string();
	familyId = int(0);
	settings = std::string();
	containers = std::list<PageArea.Models.Read.PageWidgetContainer>();
}

PageArea.Models.Read.PageArea::PageArea.Models.Read.PageArea(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Read.PageArea::~PageArea.Models.Read.PageArea()
{

}

void
PageArea.Models.Read.PageArea::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *indexKey = "Index";

    if(object.has_key(indexKey))
    {
        bourne::json value = object[indexKey];



        jsonToValue(&index, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *familyIdKey = "FamilyId";

    if(object.has_key(familyIdKey))
    {
        bourne::json value = object[familyIdKey];



        jsonToValue(&familyId, value, "int");


    }

    const char *settingsKey = "Settings";

    if(object.has_key(settingsKey))
    {
        bourne::json value = object[settingsKey];



        jsonToValue(&settings, value, "std::string");


    }

    const char *containersKey = "Containers";

    if(object.has_key(containersKey))
    {
        bourne::json value = object[containersKey];


        std::list<PageArea.Models.Read.PageWidgetContainer> containers_list;
        PageArea.Models.Read.PageWidgetContainer element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            containers_list.push_back(element);
        }
        containers = containers_list;


    }


}

bourne::json
PageArea.Models.Read.PageArea::toJson()
{
    bourne::json object = bourne::json::object();





    object["index"] = getIndex();






    object["name"] = getName();






    object["familyId"] = getFamilyId();






    object["settings"] = getSettings();





    std::list<PageArea.Models.Read.PageWidgetContainer> containers_list = getContainers();
    bourne::json containers_arr = bourne::json::array();

    for(auto& var : containers_list)
    {
        PageArea.Models.Read.PageWidgetContainer obj = var;
        containers_arr.append(obj.toJson());
    }
    object["containers"] = containers_arr;




    return object;

}

int
PageArea.Models.Read.PageArea::getIndex()
{
	return index;
}

void
PageArea.Models.Read.PageArea::setIndex(int  index)
{
	this->index = index;
}

std::string
PageArea.Models.Read.PageArea::getName()
{
	return name;
}

void
PageArea.Models.Read.PageArea::setName(std::string  name)
{
	this->name = name;
}

int
PageArea.Models.Read.PageArea::getFamilyId()
{
	return familyId;
}

void
PageArea.Models.Read.PageArea::setFamilyId(int  familyId)
{
	this->familyId = familyId;
}

std::string
PageArea.Models.Read.PageArea::getSettings()
{
	return settings;
}

void
PageArea.Models.Read.PageArea::setSettings(std::string  settings)
{
	this->settings = settings;
}

std::list<PageArea.Models.Read.PageWidgetContainer>
PageArea.Models.Read.PageArea::getContainers()
{
	return containers;
}

void
PageArea.Models.Read.PageArea::setContainers(std::list <PageArea.Models.Read.PageWidgetContainer> containers)
{
	this->containers = containers;
}



