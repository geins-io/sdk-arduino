
#include "PageResult.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageResult_batchId_is_assigned_from_json()
{


    bourne::json input =
    {
        "batchId", "hello"
    };

    PageResult obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBatchId().c_str());






}


void test_PageResult_page_is_assigned_from_json()
{
    bourne::json input =
    {
        "page", 1
    };

    PageResult obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPage());








}


void test_PageResult_rowCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "rowCount", 1
    };

    PageResult obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRowCount());








}


void test_PageResult_pageCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "pageCount", 1
    };

    PageResult obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPageCount());








}


void test_PageResult_pageSize_is_assigned_from_json()
{
    bourne::json input =
    {
        "pageSize", 1
    };

    PageResult obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPageSize());








}


void test_PageResult_hasMoreRows_is_assigned_from_json()
{




    bourne::json input =
    {
        "hasMoreRows", true
    };

    PageResult obj(input.dump());

    TEST_ASSERT(true == obj.isHasMoreRows());




}



void test_PageResult_batchId_is_converted_to_json()
{

    bourne::json input =
    {
        "batchId", "hello"
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["batchId"] == output["batchId"]);



}


void test_PageResult_page_is_converted_to_json()
{
    bourne::json input =
    {
        "page", 1
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["page"] == output["page"]);




}


void test_PageResult_rowCount_is_converted_to_json()
{
    bourne::json input =
    {
        "rowCount", 1
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rowCount"] == output["rowCount"]);




}


void test_PageResult_pageCount_is_converted_to_json()
{
    bourne::json input =
    {
        "pageCount", 1
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pageCount"] == output["pageCount"]);




}


void test_PageResult_pageSize_is_converted_to_json()
{
    bourne::json input =
    {
        "pageSize", 1
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pageSize"] == output["pageSize"]);




}


void test_PageResult_hasMoreRows_is_converted_to_json()
{


    bourne::json input =
    {
        "hasMoreRows", true
    };

    PageResult obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hasMoreRows"] == output["hasMoreRows"]);


}


