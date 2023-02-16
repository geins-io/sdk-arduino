
#include "Product.Models.MonitorSku.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.MonitorSku_siteId_is_assigned_from_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Product.Models.MonitorSku obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSiteId());








}


void test_Product.Models.MonitorSku_languageCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "languageCode", "hello"
    };

    Product.Models.MonitorSku obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguageCode().c_str());






}


void test_Product.Models.MonitorSku_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Product.Models.MonitorSku obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Product.Models.MonitorSku_skuId_is_assigned_from_json()
{
    bourne::json input =
    {
        "skuId", 1
    };

    Product.Models.MonitorSku obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSkuId());








}



void test_Product.Models.MonitorSku_siteId_is_converted_to_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Product.Models.MonitorSku obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteId"] == output["siteId"]);




}


void test_Product.Models.MonitorSku_languageCode_is_converted_to_json()
{

    bourne::json input =
    {
        "languageCode", "hello"
    };

    Product.Models.MonitorSku obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["languageCode"] == output["languageCode"]);



}


void test_Product.Models.MonitorSku_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Product.Models.MonitorSku obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Product.Models.MonitorSku_skuId_is_converted_to_json()
{
    bourne::json input =
    {
        "skuId", 1
    };

    Product.Models.MonitorSku obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["skuId"] == output["skuId"]);




}


