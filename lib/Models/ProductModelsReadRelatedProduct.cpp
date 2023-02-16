

#include "Product.Models.Read.RelatedProduct.h"

using namespace Tiny;

Product.Models.Read.RelatedProduct::Product.Models.Read.RelatedProduct()
{
	productId = int(0);
	relatedProductId = int(0);
	relationTypeId = int(0);
}

Product.Models.Read.RelatedProduct::Product.Models.Read.RelatedProduct(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.RelatedProduct::~Product.Models.Read.RelatedProduct()
{

}

void
Product.Models.Read.RelatedProduct::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *relatedProductIdKey = "RelatedProductId";

    if(object.has_key(relatedProductIdKey))
    {
        bourne::json value = object[relatedProductIdKey];



        jsonToValue(&relatedProductId, value, "int");


    }

    const char *relationTypeIdKey = "RelationTypeId";

    if(object.has_key(relationTypeIdKey))
    {
        bourne::json value = object[relationTypeIdKey];



        jsonToValue(&relationTypeId, value, "int");


    }


}

bourne::json
Product.Models.Read.RelatedProduct::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["relatedProductId"] = getRelatedProductId();






    object["relationTypeId"] = getRelationTypeId();



    return object;

}

int
Product.Models.Read.RelatedProduct::getProductId()
{
	return productId;
}

void
Product.Models.Read.RelatedProduct::setProductId(int  productId)
{
	this->productId = productId;
}

int
Product.Models.Read.RelatedProduct::getRelatedProductId()
{
	return relatedProductId;
}

void
Product.Models.Read.RelatedProduct::setRelatedProductId(int  relatedProductId)
{
	this->relatedProductId = relatedProductId;
}

int
Product.Models.Read.RelatedProduct::getRelationTypeId()
{
	return relationTypeId;
}

void
Product.Models.Read.RelatedProduct::setRelationTypeId(int  relationTypeId)
{
	this->relationTypeId = relationTypeId;
}



