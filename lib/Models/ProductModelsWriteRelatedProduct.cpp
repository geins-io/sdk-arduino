

#include "Product.Models.Write.RelatedProduct.h"

using namespace Tiny;

Product.Models.Write.RelatedProduct::Product.Models.Write.RelatedProduct()
{
	relatedProductId = std::string();
	relationTypeId = int(0);
}

Product.Models.Write.RelatedProduct::Product.Models.Write.RelatedProduct(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Write.RelatedProduct::~Product.Models.Write.RelatedProduct()
{

}

void
Product.Models.Write.RelatedProduct::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *relatedProductIdKey = "RelatedProductId";

    if(object.has_key(relatedProductIdKey))
    {
        bourne::json value = object[relatedProductIdKey];



        jsonToValue(&relatedProductId, value, "std::string");


    }

    const char *relationTypeIdKey = "RelationTypeId";

    if(object.has_key(relationTypeIdKey))
    {
        bourne::json value = object[relationTypeIdKey];



        jsonToValue(&relationTypeId, value, "int");


    }


}

bourne::json
Product.Models.Write.RelatedProduct::toJson()
{
    bourne::json object = bourne::json::object();





    object["relatedProductId"] = getRelatedProductId();






    object["relationTypeId"] = getRelationTypeId();



    return object;

}

std::string
Product.Models.Write.RelatedProduct::getRelatedProductId()
{
	return relatedProductId;
}

void
Product.Models.Write.RelatedProduct::setRelatedProductId(std::string  relatedProductId)
{
	this->relatedProductId = relatedProductId;
}

int
Product.Models.Write.RelatedProduct::getRelationTypeId()
{
	return relationTypeId;
}

void
Product.Models.Write.RelatedProduct::setRelationTypeId(int  relationTypeId)
{
	this->relationTypeId = relationTypeId;
}



