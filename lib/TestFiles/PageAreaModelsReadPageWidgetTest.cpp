
#include "PageArea.Models.Read.PageWidget.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageArea.Models.Read.PageWidget_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_PageArea.Models.Read.PageWidget_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_PageArea.Models.Read.PageWidget_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_PageArea.Models.Read.PageWidget_active_is_assigned_from_json()
{




    bourne::json input =
    {
        "active", true
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT(true == obj.isActive());




}



void test_PageArea.Models.Read.PageWidget_size_is_assigned_from_json()
{


    bourne::json input =
    {
        "size", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSize().c_str());






}


void test_PageArea.Models.Read.PageWidget_configuration_is_assigned_from_json()
{


    bourne::json input =
    {
        "configuration", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getConfiguration().c_str());






}



void test_PageArea.Models.Read.PageWidget_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_PageArea.Models.Read.PageWidget_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_PageArea.Models.Read.PageWidget_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_PageArea.Models.Read.PageWidget_active_is_converted_to_json()
{


    bourne::json input =
    {
        "active", true
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);


}



void test_PageArea.Models.Read.PageWidget_size_is_converted_to_json()
{

    bourne::json input =
    {
        "size", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["size"] == output["size"]);



}


void test_PageArea.Models.Read.PageWidget_configuration_is_converted_to_json()
{

    bourne::json input =
    {
        "configuration", "hello"
    };

    PageArea.Models.Read.PageWidget obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["configuration"] == output["configuration"]);



}


