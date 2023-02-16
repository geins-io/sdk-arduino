
#include "Product.Models.Write.Product.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Write.Product_articleNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getArticleNumber().c_str());






}



void test_Product.Models.Write.Product_active_is_assigned_from_json()
{




    bourne::json input =
    {
        "active", true
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT(true == obj.isActive());




}


void test_Product.Models.Write.Product_purchasePrice_is_assigned_from_json()
{








}


void test_Product.Models.Write.Product_purchasePriceCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "purchasePriceCurrency", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPurchasePriceCurrency().c_str());






}





void test_Product.Models.Write.Product_brandId_is_assigned_from_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBrandId());








}


void test_Product.Models.Write.Product_supplierId_is_assigned_from_json()
{
    bourne::json input =
    {
        "supplierId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSupplierId());








}







void test_Product.Models.Write.Product_freightClassId_is_assigned_from_json()
{
    bourne::json input =
    {
        "freightClassId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFreightClassId());








}


void test_Product.Models.Write.Product_intrastatCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "intrastatCode", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIntrastatCode().c_str());






}


void test_Product.Models.Write.Product_countryOfOrigin_is_assigned_from_json()
{


    bourne::json input =
    {
        "countryOfOrigin", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountryOfOrigin().c_str());






}


void test_Product.Models.Write.Product_variantGroupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "variantGroupId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getVariantGroupId());








}


void test_Product.Models.Write.Product_vat_is_assigned_from_json()
{
    bourne::json input =
    {
        "vat", 1
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getVat());








}


void test_Product.Models.Write.Product_vatType_is_assigned_from_json()
{


    bourne::json input =
    {
        "vatType", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVatType().c_str());






}


void test_Product.Models.Write.Product_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Product.Models.Write.Product_activationDate_is_assigned_from_json()
{








}



void test_Product.Models.Write.Product_articleNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["articleNumber"] == output["articleNumber"]);



}



void test_Product.Models.Write.Product_active_is_converted_to_json()
{


    bourne::json input =
    {
        "active", true
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);


}


void test_Product.Models.Write.Product_purchasePrice_is_converted_to_json()
{




}


void test_Product.Models.Write.Product_purchasePriceCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "purchasePriceCurrency", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["purchasePriceCurrency"] == output["purchasePriceCurrency"]);



}





void test_Product.Models.Write.Product_brandId_is_converted_to_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brandId"] == output["brandId"]);




}


void test_Product.Models.Write.Product_supplierId_is_converted_to_json()
{
    bourne::json input =
    {
        "supplierId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["supplierId"] == output["supplierId"]);




}







void test_Product.Models.Write.Product_freightClassId_is_converted_to_json()
{
    bourne::json input =
    {
        "freightClassId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["freightClassId"] == output["freightClassId"]);




}


void test_Product.Models.Write.Product_intrastatCode_is_converted_to_json()
{

    bourne::json input =
    {
        "intrastatCode", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["intrastatCode"] == output["intrastatCode"]);



}


void test_Product.Models.Write.Product_countryOfOrigin_is_converted_to_json()
{

    bourne::json input =
    {
        "countryOfOrigin", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryOfOrigin"] == output["countryOfOrigin"]);



}


void test_Product.Models.Write.Product_variantGroupId_is_converted_to_json()
{
    bourne::json input =
    {
        "variantGroupId", 1
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["variantGroupId"] == output["variantGroupId"]);




}


void test_Product.Models.Write.Product_vat_is_converted_to_json()
{
    bourne::json input =
    {
        "vat", 1
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vat"] == output["vat"]);




}


void test_Product.Models.Write.Product_vatType_is_converted_to_json()
{

    bourne::json input =
    {
        "vatType", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vatType"] == output["vatType"]);



}


void test_Product.Models.Write.Product_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Write.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Product.Models.Write.Product_activationDate_is_converted_to_json()
{




}


