
#include "Product.Models.Read.Product.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.Product_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Product.Models.Read.Product_articleNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getArticleNumber().c_str());






}



void test_Product.Models.Read.Product_dateCreated_is_assigned_from_json()
{








}


void test_Product.Models.Read.Product_dateUpdated_is_assigned_from_json()
{








}


void test_Product.Models.Read.Product_active_is_assigned_from_json()
{




    bourne::json input =
    {
        "active", true
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT(true == obj.isActive());




}


void test_Product.Models.Read.Product_purchasePrice_is_assigned_from_json()
{








}


void test_Product.Models.Read.Product_purchasePriceCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "purchasePriceCurrency", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPurchasePriceCurrency().c_str());






}









void test_Product.Models.Read.Product_brandId_is_assigned_from_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBrandId());








}


void test_Product.Models.Read.Product_brandName_is_assigned_from_json()
{


    bourne::json input =
    {
        "brandName", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBrandName().c_str());






}


void test_Product.Models.Read.Product_supplierId_is_assigned_from_json()
{
    bourne::json input =
    {
        "supplierId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSupplierId());








}


void test_Product.Models.Read.Product_supplierName_is_assigned_from_json()
{


    bourne::json input =
    {
        "supplierName", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSupplierName().c_str());






}





void test_Product.Models.Read.Product_vat_is_assigned_from_json()
{








}


void test_Product.Models.Read.Product_primaryImage_is_assigned_from_json()
{


    bourne::json input =
    {
        "primaryImage", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrimaryImage().c_str());






}


void test_Product.Models.Read.Product_freightClassId_is_assigned_from_json()
{
    bourne::json input =
    {
        "freightClassId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFreightClassId());








}


void test_Product.Models.Read.Product_intrastatCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "intrastatCode", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIntrastatCode().c_str());






}


void test_Product.Models.Read.Product_countryOfOrigin_is_assigned_from_json()
{


    bourne::json input =
    {
        "countryOfOrigin", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountryOfOrigin().c_str());






}


void test_Product.Models.Read.Product_variantGroupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "variantGroupId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getVariantGroupId());








}


void test_Product.Models.Read.Product_vatId_is_assigned_from_json()
{
    bourne::json input =
    {
        "vatId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getVatId());








}


void test_Product.Models.Read.Product_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Product.Models.Read.Product_activationDate_is_assigned_from_json()
{








}




void test_Product.Models.Read.Product_mainCategoryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "mainCategoryId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMainCategoryId());








}




void test_Product.Models.Read.Product_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Product.Models.Read.Product_articleNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["articleNumber"] == output["articleNumber"]);



}



void test_Product.Models.Read.Product_dateCreated_is_converted_to_json()
{




}


void test_Product.Models.Read.Product_dateUpdated_is_converted_to_json()
{




}


void test_Product.Models.Read.Product_active_is_converted_to_json()
{


    bourne::json input =
    {
        "active", true
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);


}


void test_Product.Models.Read.Product_purchasePrice_is_converted_to_json()
{




}


void test_Product.Models.Read.Product_purchasePriceCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "purchasePriceCurrency", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["purchasePriceCurrency"] == output["purchasePriceCurrency"]);



}









void test_Product.Models.Read.Product_brandId_is_converted_to_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brandId"] == output["brandId"]);




}


void test_Product.Models.Read.Product_brandName_is_converted_to_json()
{

    bourne::json input =
    {
        "brandName", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brandName"] == output["brandName"]);



}


void test_Product.Models.Read.Product_supplierId_is_converted_to_json()
{
    bourne::json input =
    {
        "supplierId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["supplierId"] == output["supplierId"]);




}


void test_Product.Models.Read.Product_supplierName_is_converted_to_json()
{

    bourne::json input =
    {
        "supplierName", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["supplierName"] == output["supplierName"]);



}





void test_Product.Models.Read.Product_vat_is_converted_to_json()
{




}


void test_Product.Models.Read.Product_primaryImage_is_converted_to_json()
{

    bourne::json input =
    {
        "primaryImage", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["primaryImage"] == output["primaryImage"]);



}


void test_Product.Models.Read.Product_freightClassId_is_converted_to_json()
{
    bourne::json input =
    {
        "freightClassId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["freightClassId"] == output["freightClassId"]);




}


void test_Product.Models.Read.Product_intrastatCode_is_converted_to_json()
{

    bourne::json input =
    {
        "intrastatCode", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["intrastatCode"] == output["intrastatCode"]);



}


void test_Product.Models.Read.Product_countryOfOrigin_is_converted_to_json()
{

    bourne::json input =
    {
        "countryOfOrigin", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryOfOrigin"] == output["countryOfOrigin"]);



}


void test_Product.Models.Read.Product_variantGroupId_is_converted_to_json()
{
    bourne::json input =
    {
        "variantGroupId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["variantGroupId"] == output["variantGroupId"]);




}


void test_Product.Models.Read.Product_vatId_is_converted_to_json()
{
    bourne::json input =
    {
        "vatId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vatId"] == output["vatId"]);




}


void test_Product.Models.Read.Product_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Product.Models.Read.Product_activationDate_is_converted_to_json()
{




}




void test_Product.Models.Read.Product_mainCategoryId_is_converted_to_json()
{
    bourne::json input =
    {
        "mainCategoryId", 1
    };

    Product.Models.Read.Product obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mainCategoryId"] == output["mainCategoryId"]);




}



