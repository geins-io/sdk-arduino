

#include "Category.Models.CategoryQuery.h"

using namespace Tiny;

Category.Models.CategoryQuery::Category.Models.CategoryQuery()
{
	createdAfter = std::string();
	categoryIds = std::list<int>();
}

Category.Models.CategoryQuery::Category.Models.CategoryQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Category.Models.CategoryQuery::~Category.Models.CategoryQuery()
{

}

void
Category.Models.CategoryQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *createdAfterKey = "CreatedAfter";

    if(object.has_key(createdAfterKey))
    {
        bourne::json value = object[createdAfterKey];



        jsonToValue(&createdAfter, value, "std::string");


    }

    const char *categoryIdsKey = "CategoryIds";

    if(object.has_key(categoryIdsKey))
    {
        bourne::json value = object[categoryIdsKey];


        std::list<int> categoryIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            categoryIds_list.push_back(element);
        }
        categoryIds = categoryIds_list;


    }


}

bourne::json
Category.Models.CategoryQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["createdAfter"] = getCreatedAfter();





    std::list<int> categoryIds_list = getCategoryIds();
    bourne::json categoryIds_arr = bourne::json::array();

    for(auto& var : categoryIds_list)
    {
        categoryIds_arr.append(var);
    }
    object["categoryIds"] = categoryIds_arr;






    return object;

}

std::string
Category.Models.CategoryQuery::getCreatedAfter()
{
	return createdAfter;
}

void
Category.Models.CategoryQuery::setCreatedAfter(std::string  createdAfter)
{
	this->createdAfter = createdAfter;
}

std::list<int>
Category.Models.CategoryQuery::getCategoryIds()
{
	return categoryIds;
}

void
Category.Models.CategoryQuery::setCategoryIds(std::list <int> categoryIds)
{
	this->categoryIds = categoryIds;
}



