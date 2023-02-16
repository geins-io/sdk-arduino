
#include "PageArea.Models.Read.PageWidgetContainer.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageArea.Models.Read.PageWidgetContainer_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_PageArea.Models.Read.PageWidgetContainer_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}



void test_PageArea.Models.Read.PageWidgetContainer_active_is_assigned_from_json()
{




    bourne::json input =
    {
        "active", true
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT(true == obj.isActive());




}


void test_PageArea.Models.Read.PageWidgetContainer_layout_is_assigned_from_json()
{


    bourne::json input =
    {
        "layout", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLayout().c_str());






}


void test_PageArea.Models.Read.PageWidgetContainer_responsiveMode_is_assigned_from_json()
{


    bourne::json input =
    {
        "responsiveMode", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponsiveMode().c_str());






}


void test_PageArea.Models.Read.PageWidgetContainer_visibility_is_assigned_from_json()
{


    bourne::json input =
    {
        "visibility", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVisibility().c_str());






}


void test_PageArea.Models.Read.PageWidgetContainer_design_is_assigned_from_json()
{


    bourne::json input =
    {
        "design", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDesign().c_str());






}




void test_PageArea.Models.Read.PageWidgetContainer_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_PageArea.Models.Read.PageWidgetContainer_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



void test_PageArea.Models.Read.PageWidgetContainer_active_is_converted_to_json()
{


    bourne::json input =
    {
        "active", true
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);


}


void test_PageArea.Models.Read.PageWidgetContainer_layout_is_converted_to_json()
{

    bourne::json input =
    {
        "layout", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["layout"] == output["layout"]);



}


void test_PageArea.Models.Read.PageWidgetContainer_responsiveMode_is_converted_to_json()
{

    bourne::json input =
    {
        "responsiveMode", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["responsiveMode"] == output["responsiveMode"]);



}


void test_PageArea.Models.Read.PageWidgetContainer_visibility_is_converted_to_json()
{

    bourne::json input =
    {
        "visibility", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["visibility"] == output["visibility"]);



}


void test_PageArea.Models.Read.PageWidgetContainer_design_is_converted_to_json()
{

    bourne::json input =
    {
        "design", "hello"
    };

    PageArea.Models.Read.PageWidgetContainer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["design"] == output["design"]);



}



