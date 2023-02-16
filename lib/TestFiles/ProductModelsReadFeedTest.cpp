
#include "Product.Models.Read.Feed.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.Feed_feedId_is_assigned_from_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFeedId());








}


void test_Product.Models.Read.Feed_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Product.Models.Read.Feed_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUrl().c_str());






}


void test_Product.Models.Read.Feed_layout_is_assigned_from_json()
{


    bourne::json input =
    {
        "layout", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLayout().c_str());






}


void test_Product.Models.Read.Feed_market_is_assigned_from_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarket());








}


void test_Product.Models.Read.Feed_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}


void test_Product.Models.Read.Feed_defaultCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "defaultCurrency", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDefaultCurrency().c_str());






}


void test_Product.Models.Read.Feed_defaultCountry_is_assigned_from_json()
{


    bourne::json input =
    {
        "defaultCountry", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDefaultCountry().c_str());






}



void test_Product.Models.Read.Feed_feedId_is_converted_to_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["feedId"] == output["feedId"]);




}


void test_Product.Models.Read.Feed_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Product.Models.Read.Feed_url_is_converted_to_json()
{

    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["url"] == output["url"]);



}


void test_Product.Models.Read.Feed_layout_is_converted_to_json()
{

    bourne::json input =
    {
        "layout", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["layout"] == output["layout"]);



}


void test_Product.Models.Read.Feed_market_is_converted_to_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["market"] == output["market"]);




}


void test_Product.Models.Read.Feed_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}


void test_Product.Models.Read.Feed_defaultCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "defaultCurrency", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["defaultCurrency"] == output["defaultCurrency"]);



}


void test_Product.Models.Read.Feed_defaultCountry_is_converted_to_json()
{

    bourne::json input =
    {
        "defaultCountry", "hello"
    };

    Product.Models.Read.Feed obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["defaultCountry"] == output["defaultCountry"]);



}


