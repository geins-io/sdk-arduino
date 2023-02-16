

#include "Product.Models.ProductQuery.h"

using namespace Tiny;

Product.Models.ProductQuery::Product.Models.ProductQuery()
{
	updatedAfter = std::string();
	productIds = std::list<int>();
	articleNumbers = std::list<std::string>();
	onlySellable = bool(false);
	feedId = int(0);
	batchId = std::string();
}

Product.Models.ProductQuery::Product.Models.ProductQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.ProductQuery::~Product.Models.ProductQuery()
{

}

void
Product.Models.ProductQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *updatedAfterKey = "UpdatedAfter";

    if(object.has_key(updatedAfterKey))
    {
        bourne::json value = object[updatedAfterKey];



        jsonToValue(&updatedAfter, value, "std::string");


    }

    const char *productIdsKey = "ProductIds";

    if(object.has_key(productIdsKey))
    {
        bourne::json value = object[productIdsKey];


        std::list<int> productIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            productIds_list.push_back(element);
        }
        productIds = productIds_list;


    }

    const char *articleNumbersKey = "ArticleNumbers";

    if(object.has_key(articleNumbersKey))
    {
        bourne::json value = object[articleNumbersKey];


        std::list<std::string> articleNumbers_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            articleNumbers_list.push_back(element);
        }
        articleNumbers = articleNumbers_list;


    }

    const char *onlySellableKey = "OnlySellable";

    if(object.has_key(onlySellableKey))
    {
        bourne::json value = object[onlySellableKey];



        jsonToValue(&onlySellable, value, "bool");


    }

    const char *feedIdKey = "FeedId";

    if(object.has_key(feedIdKey))
    {
        bourne::json value = object[feedIdKey];



        jsonToValue(&feedId, value, "int");


    }

    const char *batchIdKey = "BatchId";

    if(object.has_key(batchIdKey))
    {
        bourne::json value = object[batchIdKey];



        jsonToValue(&batchId, value, "std::string");


    }


}

bourne::json
Product.Models.ProductQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["updatedAfter"] = getUpdatedAfter();





    std::list<int> productIds_list = getProductIds();
    bourne::json productIds_arr = bourne::json::array();

    for(auto& var : productIds_list)
    {
        productIds_arr.append(var);
    }
    object["productIds"] = productIds_arr;








    std::list<std::string> articleNumbers_list = getArticleNumbers();
    bourne::json articleNumbers_arr = bourne::json::array();

    for(auto& var : articleNumbers_list)
    {
        articleNumbers_arr.append(var);
    }
    object["articleNumbers"] = articleNumbers_arr;









    object["onlySellable"] = isOnlySellable();






    object["feedId"] = getFeedId();






    object["batchId"] = getBatchId();



    return object;

}

std::string
Product.Models.ProductQuery::getUpdatedAfter()
{
	return updatedAfter;
}

void
Product.Models.ProductQuery::setUpdatedAfter(std::string  updatedAfter)
{
	this->updatedAfter = updatedAfter;
}

std::list<int>
Product.Models.ProductQuery::getProductIds()
{
	return productIds;
}

void
Product.Models.ProductQuery::setProductIds(std::list <int> productIds)
{
	this->productIds = productIds;
}

std::list<std::string>
Product.Models.ProductQuery::getArticleNumbers()
{
	return articleNumbers;
}

void
Product.Models.ProductQuery::setArticleNumbers(std::list <std::string> articleNumbers)
{
	this->articleNumbers = articleNumbers;
}

bool
Product.Models.ProductQuery::isOnlySellable()
{
	return onlySellable;
}

void
Product.Models.ProductQuery::setOnlySellable(bool  onlySellable)
{
	this->onlySellable = onlySellable;
}

int
Product.Models.ProductQuery::getFeedId()
{
	return feedId;
}

void
Product.Models.ProductQuery::setFeedId(int  feedId)
{
	this->feedId = feedId;
}

std::string
Product.Models.ProductQuery::getBatchId()
{
	return batchId;
}

void
Product.Models.ProductQuery::setBatchId(std::string  batchId)
{
	this->batchId = batchId;
}



