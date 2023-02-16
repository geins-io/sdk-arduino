

#include "Product.Models.Read.FeedMembership.h"

using namespace Tiny;

Product.Models.Read.FeedMembership::Product.Models.Read.FeedMembership()
{
	feedId = int(0);
	allowSale = bool(false);
}

Product.Models.Read.FeedMembership::Product.Models.Read.FeedMembership(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.FeedMembership::~Product.Models.Read.FeedMembership()
{

}

void
Product.Models.Read.FeedMembership::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *feedIdKey = "FeedId";

    if(object.has_key(feedIdKey))
    {
        bourne::json value = object[feedIdKey];



        jsonToValue(&feedId, value, "int");


    }

    const char *allowSaleKey = "AllowSale";

    if(object.has_key(allowSaleKey))
    {
        bourne::json value = object[allowSaleKey];



        jsonToValue(&allowSale, value, "bool");


    }


}

bourne::json
Product.Models.Read.FeedMembership::toJson()
{
    bourne::json object = bourne::json::object();





    object["feedId"] = getFeedId();






    object["allowSale"] = isAllowSale();



    return object;

}

int
Product.Models.Read.FeedMembership::getFeedId()
{
	return feedId;
}

void
Product.Models.Read.FeedMembership::setFeedId(int  feedId)
{
	this->feedId = feedId;
}

bool
Product.Models.Read.FeedMembership::isAllowSale()
{
	return allowSale;
}

void
Product.Models.Read.FeedMembership::setAllowSale(bool  allowSale)
{
	this->allowSale = allowSale;
}



