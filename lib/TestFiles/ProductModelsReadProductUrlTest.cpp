
#include "Product.Models.Read.ProductUrl.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.ProductUrl_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUrl().c_str());






}


void test_Product.Models.Read.ProductUrl_market_is_assigned_from_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarket());








}


void test_Product.Models.Read.ProductUrl_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}



void test_Product.Models.Read.ProductUrl_url_is_converted_to_json()
{

    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["url"] == output["url"]);



}


void test_Product.Models.Read.ProductUrl_market_is_converted_to_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["market"] == output["market"]);




}


void test_Product.Models.Read.ProductUrl_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    Product.Models.Read.ProductUrl obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}


