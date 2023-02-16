
#include "ProductParameter.Models.Read.ProductParameterValue.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ProductParameter.Models.Read.ProductParameterValue_parameterValueId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterValueId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterValueId());








}


void test_ProductParameter.Models.Read.ProductParameterValue_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterId());








}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterName_is_assigned_from_json()
{


    bourne::json input =
    {
        "parameterName", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getParameterName().c_str());






}


void test_ProductParameter.Models.Read.ProductParameterValue_groupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getGroupId());








}


void test_ProductParameter.Models.Read.ProductParameterValue_groupName_is_assigned_from_json()
{


    bourne::json input =
    {
        "groupName", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGroupName().c_str());






}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterType_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterType", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterType());








}


void test_ProductParameter.Models.Read.ProductParameterValue_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}


void test_ProductParameter.Models.Read.ProductParameterValue_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "description", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDescription().c_str());






}



void test_ProductParameter.Models.Read.ProductParameterValue_internalIdentifier_is_assigned_from_json()
{


    bourne::json input =
    {
        "internalIdentifier", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInternalIdentifier().c_str());






}



void test_ProductParameter.Models.Read.ProductParameterValue_parameterValueId_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterValueId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterValueId"] == output["parameterValueId"]);




}


void test_ProductParameter.Models.Read.ProductParameterValue_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterId_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterId"] == output["parameterId"]);




}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterName_is_converted_to_json()
{

    bourne::json input =
    {
        "parameterName", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterName"] == output["parameterName"]);



}


void test_ProductParameter.Models.Read.ProductParameterValue_groupId_is_converted_to_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["groupId"] == output["groupId"]);




}


void test_ProductParameter.Models.Read.ProductParameterValue_groupName_is_converted_to_json()
{

    bourne::json input =
    {
        "groupName", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["groupName"] == output["groupName"]);



}


void test_ProductParameter.Models.Read.ProductParameterValue_parameterType_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterType", 1
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterType"] == output["parameterType"]);




}


void test_ProductParameter.Models.Read.ProductParameterValue_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}


void test_ProductParameter.Models.Read.ProductParameterValue_description_is_converted_to_json()
{

    bourne::json input =
    {
        "description", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["description"] == output["description"]);



}



void test_ProductParameter.Models.Read.ProductParameterValue_internalIdentifier_is_converted_to_json()
{

    bourne::json input =
    {
        "internalIdentifier", "hello"
    };

    ProductParameter.Models.Read.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["internalIdentifier"] == output["internalIdentifier"]);



}


