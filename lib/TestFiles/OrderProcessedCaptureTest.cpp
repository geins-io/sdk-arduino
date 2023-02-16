
#include "Order.ProcessedCapture.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.ProcessedCapture_captureId_is_assigned_from_json()
{


    bourne::json input =
    {
        "captureId", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCaptureId().c_str());






}


void test_Order.ProcessedCapture_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.ProcessedCapture_reference_is_assigned_from_json()
{


    bourne::json input =
    {
        "reference", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReference().c_str());






}


void test_Order.ProcessedCapture_processedOn_is_assigned_from_json()
{








}



void test_Order.ProcessedCapture_captureId_is_converted_to_json()
{

    bourne::json input =
    {
        "captureId", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["captureId"] == output["captureId"]);



}


void test_Order.ProcessedCapture_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.ProcessedCapture_reference_is_converted_to_json()
{

    bourne::json input =
    {
        "reference", "hello"
    };

    Order.ProcessedCapture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reference"] == output["reference"]);



}


void test_Order.ProcessedCapture_processedOn_is_converted_to_json()
{




}


