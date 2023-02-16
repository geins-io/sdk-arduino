
#include "Product.Models.Read.Image.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.Image_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.Image obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Product.Models.Read.Image_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.Image obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUrl().c_str());






}


void test_Product.Models.Read.Image_order_is_assigned_from_json()
{
    bourne::json input =
    {
        "order", 1
    };

    Product.Models.Read.Image obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrder());








}



void test_Product.Models.Read.Image_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.Image obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Product.Models.Read.Image_url_is_converted_to_json()
{

    bourne::json input =
    {
        "url", "hello"
    };

    Product.Models.Read.Image obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["url"] == output["url"]);



}


void test_Product.Models.Read.Image_order_is_converted_to_json()
{
    bourne::json input =
    {
        "order", 1
    };

    Product.Models.Read.Image obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["order"] == output["order"]);




}


