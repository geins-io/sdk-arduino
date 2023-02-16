

#include "Product.Models.ProductCategory.h"

using namespace Tiny;

Product.Models.ProductCategory::Product.Models.ProductCategory()
{
	categoryId = int(0);
}

Product.Models.ProductCategory::Product.Models.ProductCategory(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.ProductCategory::~Product.Models.ProductCategory()
{

}

void
Product.Models.ProductCategory::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *categoryIdKey = "CategoryId";

    if(object.has_key(categoryIdKey))
    {
        bourne::json value = object[categoryIdKey];



        jsonToValue(&categoryId, value, "int");


    }


}

bourne::json
Product.Models.ProductCategory::toJson()
{
    bourne::json object = bourne::json::object();





    object["categoryId"] = getCategoryId();



    return object;

}

int
Product.Models.ProductCategory::getCategoryId()
{
	return categoryId;
}

void
Product.Models.ProductCategory::setCategoryId(int  categoryId)
{
	this->categoryId = categoryId;
}



