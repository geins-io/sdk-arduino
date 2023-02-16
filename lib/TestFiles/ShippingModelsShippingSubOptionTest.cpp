
#include "Shipping.Models.ShippingSubOption.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Shipping.Models.ShippingSubOption_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Shipping.Models.ShippingSubOption_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Shipping.Models.ShippingSubOption_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Shipping.Models.ShippingSubOption_fee_is_assigned_from_json()
{








}


void test_Shipping.Models.ShippingSubOption_logo_is_assigned_from_json()
{


    bourne::json input =
    {
        "logo", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLogo().c_str());






}


void test_Shipping.Models.ShippingSubOption_shippingData_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingData", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingData().c_str());






}



void test_Shipping.Models.ShippingSubOption_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Shipping.Models.ShippingSubOption_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Shipping.Models.ShippingSubOption_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Shipping.Models.ShippingSubOption_fee_is_converted_to_json()
{




}


void test_Shipping.Models.ShippingSubOption_logo_is_converted_to_json()
{

    bourne::json input =
    {
        "logo", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["logo"] == output["logo"]);



}


void test_Shipping.Models.ShippingSubOption_shippingData_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingData", "hello"
    };

    Shipping.Models.ShippingSubOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingData"] == output["shippingData"]);



}


