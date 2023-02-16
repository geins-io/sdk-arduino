
#include "Product.Models.Read.ProductItem.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.ProductItem_itemId_is_assigned_from_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getItemId());








}


void test_Product.Models.Read.ProductItem_articleNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getArticleNumber().c_str());






}


void test_Product.Models.Read.ProductItem_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Product.Models.Read.ProductItem_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Product.Models.Read.ProductItem_shelf_is_assigned_from_json()
{


    bourne::json input =
    {
        "shelf", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShelf().c_str());






}


void test_Product.Models.Read.ProductItem_weight_is_assigned_from_json()
{
    bourne::json input =
    {
        "weight", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getWeight());








}


void test_Product.Models.Read.ProductItem_length_is_assigned_from_json()
{
    bourne::json input =
    {
        "length", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLength());








}


void test_Product.Models.Read.ProductItem_width_is_assigned_from_json()
{
    bourne::json input =
    {
        "width", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getWidth());








}


void test_Product.Models.Read.ProductItem_height_is_assigned_from_json()
{
    bourne::json input =
    {
        "height", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getHeight());








}


void test_Product.Models.Read.ProductItem_gtin_is_assigned_from_json()
{


    bourne::json input =
    {
        "gtin", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGtin().c_str());






}


void test_Product.Models.Read.ProductItem_dateCreated_is_assigned_from_json()
{








}


void test_Product.Models.Read.ProductItem_dateUpdated_is_assigned_from_json()
{








}


void test_Product.Models.Read.ProductItem_active_is_assigned_from_json()
{




    bourne::json input =
    {
        "active", true
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT(true == obj.isActive());




}


void test_Product.Models.Read.ProductItem_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}





void test_Product.Models.Read.ProductItem_itemId_is_converted_to_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["itemId"] == output["itemId"]);




}


void test_Product.Models.Read.ProductItem_articleNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["articleNumber"] == output["articleNumber"]);



}


void test_Product.Models.Read.ProductItem_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Product.Models.Read.ProductItem_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Product.Models.Read.ProductItem_shelf_is_converted_to_json()
{

    bourne::json input =
    {
        "shelf", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shelf"] == output["shelf"]);



}


void test_Product.Models.Read.ProductItem_weight_is_converted_to_json()
{
    bourne::json input =
    {
        "weight", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["weight"] == output["weight"]);




}


void test_Product.Models.Read.ProductItem_length_is_converted_to_json()
{
    bourne::json input =
    {
        "length", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["length"] == output["length"]);




}


void test_Product.Models.Read.ProductItem_width_is_converted_to_json()
{
    bourne::json input =
    {
        "width", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["width"] == output["width"]);




}


void test_Product.Models.Read.ProductItem_height_is_converted_to_json()
{
    bourne::json input =
    {
        "height", 1
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["height"] == output["height"]);




}


void test_Product.Models.Read.ProductItem_gtin_is_converted_to_json()
{

    bourne::json input =
    {
        "gtin", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gtin"] == output["gtin"]);



}


void test_Product.Models.Read.ProductItem_dateCreated_is_converted_to_json()
{




}


void test_Product.Models.Read.ProductItem_dateUpdated_is_converted_to_json()
{




}


void test_Product.Models.Read.ProductItem_active_is_converted_to_json()
{


    bourne::json input =
    {
        "active", true
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);


}


void test_Product.Models.Read.ProductItem_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Read.ProductItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}




