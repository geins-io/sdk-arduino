

#include "Category.Models.Read.Category.h"

using namespace Tiny;

Category.Models.Read.Category::Category.Models.Read.Category()
{
	categoryId = int(0);
	parentCategoryId = int(0);
	names = std::list<Shared.Models.LocalizableContent>();
	descriptions = std::list<Shared.Models.LocalizableContent>();
	googleCategoryPath = std::string();
}

Category.Models.Read.Category::Category.Models.Read.Category(std::string jsonString)
{
	this->fromJson(jsonString);
}

Category.Models.Read.Category::~Category.Models.Read.Category()
{

}

void
Category.Models.Read.Category::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *categoryIdKey = "CategoryId";

    if(object.has_key(categoryIdKey))
    {
        bourne::json value = object[categoryIdKey];



        jsonToValue(&categoryId, value, "int");


    }

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

    const char *googleCategoryPathKey = "GoogleCategoryPath";

    if(object.has_key(googleCategoryPathKey))
    {
        bourne::json value = object[googleCategoryPathKey];



        jsonToValue(&googleCategoryPath, value, "std::string");


    }


}

bourne::json
Category.Models.Read.Category::toJson()
{
    bourne::json object = bourne::json::object();





    object["categoryId"] = getCategoryId();






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







    object["googleCategoryPath"] = getGoogleCategoryPath();



    return object;

}

int
Category.Models.Read.Category::getCategoryId()
{
	return categoryId;
}

void
Category.Models.Read.Category::setCategoryId(int  categoryId)
{
	this->categoryId = categoryId;
}

int
Category.Models.Read.Category::getParentCategoryId()
{
	return parentCategoryId;
}

void
Category.Models.Read.Category::setParentCategoryId(int  parentCategoryId)
{
	this->parentCategoryId = parentCategoryId;
}

std::list<Shared.Models.LocalizableContent>
Category.Models.Read.Category::getNames()
{
	return names;
}

void
Category.Models.Read.Category::setNames(std::list <Shared.Models.LocalizableContent> names)
{
	this->names = names;
}

std::list<Shared.Models.LocalizableContent>
Category.Models.Read.Category::getDescriptions()
{
	return descriptions;
}

void
Category.Models.Read.Category::setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions)
{
	this->descriptions = descriptions;
}

std::string
Category.Models.Read.Category::getGoogleCategoryPath()
{
	return googleCategoryPath;
}

void
Category.Models.Read.Category::setGoogleCategoryPath(std::string  googleCategoryPath)
{
	this->googleCategoryPath = googleCategoryPath;
}



