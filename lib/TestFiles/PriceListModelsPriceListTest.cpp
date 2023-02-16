
#include "PriceList.Models.PriceList.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PriceList.Models.PriceList_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PriceList.Models.PriceList obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_PriceList.Models.PriceList_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_PriceList.Models.PriceList_marketId_is_assigned_from_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    PriceList.Models.PriceList obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarketId());








}


void test_PriceList.Models.PriceList_marketPrefix_is_assigned_from_json()
{


    bourne::json input =
    {
        "marketPrefix", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMarketPrefix().c_str());






}


void test_PriceList.Models.PriceList_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}



void test_PriceList.Models.PriceList_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PriceList.Models.PriceList obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_PriceList.Models.PriceList_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_PriceList.Models.PriceList_marketId_is_converted_to_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    PriceList.Models.PriceList obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketId"] == output["marketId"]);




}


void test_PriceList.Models.PriceList_marketPrefix_is_converted_to_json()
{

    bourne::json input =
    {
        "marketPrefix", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketPrefix"] == output["marketPrefix"]);



}


void test_PriceList.Models.PriceList_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.PriceList obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


