
#include "Order.FreightClass.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.FreightClass_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.FreightClass obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Order.FreightClass_type_is_assigned_from_json()
{
    bourne::json input =
    {
        "type", 1
    };

    Order.FreightClass obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getType());








}


void test_Order.FreightClass_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.FreightClass obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.FreightClass_typeAsEnum_is_assigned_from_json()
{
    bourne::json input =
    {
        "typeAsEnum", 1
    };

    Order.FreightClass obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTypeAsEnum());








}



void test_Order.FreightClass_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.FreightClass obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Order.FreightClass_type_is_converted_to_json()
{
    bourne::json input =
    {
        "type", 1
    };

    Order.FreightClass obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);




}


void test_Order.FreightClass_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.FreightClass obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.FreightClass_typeAsEnum_is_converted_to_json()
{
    bourne::json input =
    {
        "typeAsEnum", 1
    };

    Order.FreightClass obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["typeAsEnum"] == output["typeAsEnum"]);




}


