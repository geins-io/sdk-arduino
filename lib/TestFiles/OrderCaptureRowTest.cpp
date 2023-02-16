
#include "Order.CaptureRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.CaptureRow_orderRowId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderRowId", 1
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderRowId());








}


void test_Order.CaptureRow_itemId_is_assigned_from_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getItemId());








}


void test_Order.CaptureRow_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Order.CaptureRow_price_is_assigned_from_json()
{








}


void test_Order.CaptureRow_priceExVat_is_assigned_from_json()
{








}


void test_Order.CaptureRow_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.CaptureRow_productName_is_assigned_from_json()
{


    bourne::json input =
    {
        "productName", "hello"
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProductName().c_str());






}


void test_Order.CaptureRow_variant_is_assigned_from_json()
{


    bourne::json input =
    {
        "variant", "hello"
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVariant().c_str());






}


void test_Order.CaptureRow_brand_is_assigned_from_json()
{


    bourne::json input =
    {
        "brand", "hello"
    };

    Order.CaptureRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBrand().c_str());






}



void test_Order.CaptureRow_orderRowId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderRowId", 1
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderRowId"] == output["orderRowId"]);




}


void test_Order.CaptureRow_itemId_is_converted_to_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["itemId"] == output["itemId"]);




}


void test_Order.CaptureRow_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Order.CaptureRow_price_is_converted_to_json()
{




}


void test_Order.CaptureRow_priceExVat_is_converted_to_json()
{




}


void test_Order.CaptureRow_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.CaptureRow_productName_is_converted_to_json()
{

    bourne::json input =
    {
        "productName", "hello"
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productName"] == output["productName"]);



}


void test_Order.CaptureRow_variant_is_converted_to_json()
{

    bourne::json input =
    {
        "variant", "hello"
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["variant"] == output["variant"]);



}


void test_Order.CaptureRow_brand_is_converted_to_json()
{

    bourne::json input =
    {
        "brand", "hello"
    };

    Order.CaptureRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brand"] == output["brand"]);



}


