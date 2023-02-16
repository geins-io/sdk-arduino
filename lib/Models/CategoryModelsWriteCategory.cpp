

#include "Category.Models.Write.Category.h"

using namespace Tiny;

Category.Models.Write.Category::Category.Models.Write.Category()
{
	parentCategoryId = int(0);
	names = std::list<Shared.Models.LocalizableContent>();
	descriptions = std::list<Shared.Models.LocalizableContent>();
}

Category.Models.Write.Category::Category.Models.Write.Category(std::string jsonString)
{
	this->fromJson(jsonString);
}

Category.Models.Write.Category::~Category.Models.Write.Category()
{

}

void
Category.Models.Write.Category::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *parentCategoryIdKey = "ParentCategoryId";

    if(object.has_key(parentCategoryIdKey))
    {
        bourne::json value = object[parentCategoryIdKey];



        jsonToValue(&parentCategoryId, value, "int");


    }

    const char *namesKey = "Names";

    if(object.has_key(namesKey))
    {
        bourne::json value = object[namesKey];


        std::list<Shared.Models.LocalizableContent> names_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            names_list.push_back(element);
        }
        names = names_list;


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
Category.Models.Write.Category::toJson()
{
    bourne::json object = bourne::json::object();





    object["parentCategoryId"] = getParentCategoryId();





    std::list<Shared.Models.LocalizableContent> names_list = getNames();
    bourne::json names_arr = bourne::json::array();

    for(auto& var : names_list)
    {
        Shared.Models.LocalizableContent obj = var;
        names_arr.append(obj.toJson());
    }
    object["names"] = names_arr;






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
Category.Models.Write.Category::getParentCategoryId()
{
	return parentCategoryId;
}

void
Category.Models.Write.Category::setParentCategoryId(int  parentCategoryId)
{
	this->parentCategoryId = parentCategoryId;
}

std::list<Shared.Models.LocalizableContent>
Category.Models.Write.Category::getNames()
{
	return names;
}

void
Category.Models.Write.Category::setNames(std::list <Shared.Models.LocalizableContent> names)
{
	this->names = names;
}

std::list<Shared.Models.LocalizableContent>
Category.Models.Write.Category::getDescriptions()
{
	return descriptions;
}

void
Category.Models.Write.Category::setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions)
{
	this->descriptions = descriptions;
}



