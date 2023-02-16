

#include "PageArea.Models.Write.PageArea.h"

using namespace Tiny;

PageArea.Models.Write.PageArea::PageArea.Models.Write.PageArea()
{
	index = int(0);
	name = std::string();
	familyId = int(0);
	settings = System.Nullable-ValidationConfiguration();
}

PageArea.Models.Write.PageArea::PageArea.Models.Write.PageArea(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Write.PageArea::~PageArea.Models.Write.PageArea()
{

}

void
PageArea.Models.Write.PageArea::fromJson(std::string jsonObj)
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




        System.Nullable-ValidationConfiguration* obj = &settings;
		obj->fromJson(value.dump());

    }


}

bourne::json
PageArea.Models.Write.PageArea::toJson()
{
    bourne::json object = bourne::json::object();





    object["index"] = getIndex();






    object["name"] = getName();






    object["familyId"] = getFamilyId();







	object["settings"] = getSettings().toJson();


    return object;

}

int
PageArea.Models.Write.PageArea::getIndex()
{
	return index;
}

void
PageArea.Models.Write.PageArea::setIndex(int  index)
{
	this->index = index;
}

std::string
PageArea.Models.Write.PageArea::getName()
{
	return name;
}

void
PageArea.Models.Write.PageArea::setName(std::string  name)
{
	this->name = name;
}

int
PageArea.Models.Write.PageArea::getFamilyId()
{
	return familyId;
}

void
PageArea.Models.Write.PageArea::setFamilyId(int  familyId)
{
	this->familyId = familyId;
}

System.Nullable-ValidationConfiguration
PageArea.Models.Write.PageArea::getSettings()
{
	return settings;
}

void
PageArea.Models.Write.PageArea::setSettings(System.Nullable-ValidationConfiguration  settings)
{
	this->settings = settings;
}



