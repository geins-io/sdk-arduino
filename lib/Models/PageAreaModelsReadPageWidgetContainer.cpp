

#include "PageArea.Models.Read.PageWidgetContainer.h"

using namespace Tiny;

PageArea.Models.Read.PageWidgetContainer::PageArea.Models.Read.PageWidgetContainer()
{
	id = int(0);
	name = std::string();
	classNames = std::list<std::string>();
	active = bool(false);
	layout = std::string();
	responsiveMode = std::string();
	visibility = std::string();
	design = std::string();
	widgets = std::list<PageArea.Models.Read.PageWidget>();
}

PageArea.Models.Read.PageWidgetContainer::PageArea.Models.Read.PageWidgetContainer(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageArea.Models.Read.PageWidgetContainer::~PageArea.Models.Read.PageWidgetContainer()
{

}

void
PageArea.Models.Read.PageWidgetContainer::fromJson(std::string jsonObj)
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

    const char *activeKey = "Active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "bool");


    }

    const char *layoutKey = "Layout";

    if(object.has_key(layoutKey))
    {
        bourne::json value = object[layoutKey];



        jsonToValue(&layout, value, "std::string");


    }

    const char *responsiveModeKey = "ResponsiveMode";

    if(object.has_key(responsiveModeKey))
    {
        bourne::json value = object[responsiveModeKey];



        jsonToValue(&responsiveMode, value, "std::string");


    }

    const char *visibilityKey = "Visibility";

    if(object.has_key(visibilityKey))
    {
        bourne::json value = object[visibilityKey];



        jsonToValue(&visibility, value, "std::string");


    }

    const char *designKey = "Design";

    if(object.has_key(designKey))
    {
        bourne::json value = object[designKey];



        jsonToValue(&design, value, "std::string");


    }

    const char *widgetsKey = "Widgets";

    if(object.has_key(widgetsKey))
    {
        bourne::json value = object[widgetsKey];


        std::list<PageArea.Models.Read.PageWidget> widgets_list;
        PageArea.Models.Read.PageWidget element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            widgets_list.push_back(element);
        }
        widgets = widgets_list;


    }


}

bourne::json
PageArea.Models.Read.PageWidgetContainer::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();





    std::list<std::string> classNames_list = getClassNames();
    bourne::json classNames_arr = bourne::json::array();

    for(auto& var : classNames_list)
    {
        classNames_arr.append(var);
    }
    object["classNames"] = classNames_arr;









    object["active"] = isActive();






    object["layout"] = getLayout();






    object["responsiveMode"] = getResponsiveMode();






    object["visibility"] = getVisibility();






    object["design"] = getDesign();





    std::list<PageArea.Models.Read.PageWidget> widgets_list = getWidgets();
    bourne::json widgets_arr = bourne::json::array();

    for(auto& var : widgets_list)
    {
        PageArea.Models.Read.PageWidget obj = var;
        widgets_arr.append(obj.toJson());
    }
    object["widgets"] = widgets_arr;




    return object;

}

int
PageArea.Models.Read.PageWidgetContainer::getId()
{
	return id;
}

void
PageArea.Models.Read.PageWidgetContainer::setId(int  id)
{
	this->id = id;
}

std::string
PageArea.Models.Read.PageWidgetContainer::getName()
{
	return name;
}

void
PageArea.Models.Read.PageWidgetContainer::setName(std::string  name)
{
	this->name = name;
}

std::list<std::string>
PageArea.Models.Read.PageWidgetContainer::getClassNames()
{
	return classNames;
}

void
PageArea.Models.Read.PageWidgetContainer::setClassNames(std::list <std::string> classNames)
{
	this->classNames = classNames;
}

bool
PageArea.Models.Read.PageWidgetContainer::isActive()
{
	return active;
}

void
PageArea.Models.Read.PageWidgetContainer::setActive(bool  active)
{
	this->active = active;
}

std::string
PageArea.Models.Read.PageWidgetContainer::getLayout()
{
	return layout;
}

void
PageArea.Models.Read.PageWidgetContainer::setLayout(std::string  layout)
{
	this->layout = layout;
}

std::string
PageArea.Models.Read.PageWidgetContainer::getResponsiveMode()
{
	return responsiveMode;
}

void
PageArea.Models.Read.PageWidgetContainer::setResponsiveMode(std::string  responsiveMode)
{
	this->responsiveMode = responsiveMode;
}

std::string
PageArea.Models.Read.PageWidgetContainer::getVisibility()
{
	return visibility;
}

void
PageArea.Models.Read.PageWidgetContainer::setVisibility(std::string  visibility)
{
	this->visibility = visibility;
}

std::string
PageArea.Models.Read.PageWidgetContainer::getDesign()
{
	return design;
}

void
PageArea.Models.Read.PageWidgetContainer::setDesign(std::string  design)
{
	this->design = design;
}

std::list<PageArea.Models.Read.PageWidget>
PageArea.Models.Read.PageWidgetContainer::getWidgets()
{
	return widgets;
}

void
PageArea.Models.Read.PageWidgetContainer::setWidgets(std::list <PageArea.Models.Read.PageWidget> widgets)
{
	this->widgets = widgets;
}



