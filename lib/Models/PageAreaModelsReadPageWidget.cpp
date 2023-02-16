

#include "PageArea.Models.Read.PageWidget.h"

using namespace Tiny;

PageArea.Models.Read.PageWidget::PageArea.Models.Read.PageWidget()
{
	id = std::string();
	name = std::string();
	type = std::string();
	active = bool(false);
	classNames = std::list<std::string>();
	size = std::string();
	configuration = std::string();
}

PageArea.Models.Read.PageWidget::PageArea.Models.Read.PageWidget(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Read.PageWidget::~PageArea.Models.Read.PageWidget()
{

}

void
PageArea.Models.Read.PageWidget::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *typeKey = "Type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *activeKey = "Active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "bool");


    }

    const char *classNamesKey = "ClassNames";

    if(object.has_key(classNamesKey))
    {
        bourne::json value = object[classNamesKey];


        std::list<std::string> classNames_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            classNames_list.push_back(element);
        }
        classNames = classNames_list;


    }

    const char *sizeKey = "Size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "std::string");


    }

    const char *configurationKey = "Configuration";

    if(object.has_key(configurationKey))
    {
        bourne::json value = object[configurationKey];



        jsonToValue(&configuration, value, "std::string");


    }


}

bourne::json
PageArea.Models.Read.PageWidget::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["type"] = getType();






    object["active"] = isActive();





    std::list<std::string> classNames_list = getClassNames();
    bourne::json classNames_arr = bourne::json::array();

    for(auto& var : classNames_list)
    {
        classNames_arr.append(var);
    }
    object["classNames"] = classNames_arr;









    object["size"] = getSize();






    object["configuration"] = getConfiguration();



    return object;

}

std::string
PageArea.Models.Read.PageWidget::getId()
{
	return id;
}

void
PageArea.Models.Read.PageWidget::setId(std::string  id)
{
	this->id = id;
}

std::string
PageArea.Models.Read.PageWidget::getName()
{
	return name;
}

void
PageArea.Models.Read.PageWidget::setName(std::string  name)
{
	this->name = name;
}

std::string
PageArea.Models.Read.PageWidget::getType()
{
	return type;
}

void
PageArea.Models.Read.PageWidget::setType(std::string  type)
{
	this->type = type;
}

bool
PageArea.Models.Read.PageWidget::isActive()
{
	return active;
}

void
PageArea.Models.Read.PageWidget::setActive(bool  active)
{
	this->active = active;
}

std::list<std::string>
PageArea.Models.Read.PageWidget::getClassNames()
{
	return classNames;
}

void
PageArea.Models.Read.PageWidget::setClassNames(std::list <std::string> classNames)
{
	this->classNames = classNames;
}

std::string
PageArea.Models.Read.PageWidget::getSize()
{
	return size;
}

void
PageArea.Models.Read.PageWidget::setSize(std::string  size)
{
	this->size = size;
}

std::string
PageArea.Models.Read.PageWidget::getConfiguration()
{
	return configuration;
}

void
PageArea.Models.Read.PageWidget::setConfiguration(std::string  configuration)
{
	this->configuration = configuration;
}



