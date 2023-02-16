
#include "PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_collectionName_is_assigned_from_json()
{


    bourne::json input =
    {
        "collectionName", "hello"
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCollectionName().c_str());






}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadMobile_is_assigned_from_json()
{




    bourne::json input =
    {
        "enableLazyloadMobile", true
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    TEST_ASSERT(true == obj.isEnableLazyloadMobile());




}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsMobile_is_assigned_from_json()
{
    bourne::json input =
    {
        "eagerLoadStepsMobile", 1
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getEagerLoadStepsMobile());








}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadDesktop_is_assigned_from_json()
{




    bourne::json input =
    {
        "enableLazyloadDesktop", true
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    TEST_ASSERT(true == obj.isEnableLazyloadDesktop());




}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsDesktop_is_assigned_from_json()
{
    bourne::json input =
    {
        "eagerLoadStepsDesktop", 1
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getEagerLoadStepsDesktop());








}



void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_collectionName_is_converted_to_json()
{

    bourne::json input =
    {
        "collectionName", "hello"
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["collectionName"] == output["collectionName"]);



}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadMobile_is_converted_to_json()
{


    bourne::json input =
    {
        "enableLazyloadMobile", true
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enableLazyloadMobile"] == output["enableLazyloadMobile"]);


}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsMobile_is_converted_to_json()
{
    bourne::json input =
    {
        "eagerLoadStepsMobile", 1
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["eagerLoadStepsMobile"] == output["eagerLoadStepsMobile"]);




}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadDesktop_is_converted_to_json()
{


    bourne::json input =
    {
        "enableLazyloadDesktop", true
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enableLazyloadDesktop"] == output["enableLazyloadDesktop"]);


}


void test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsDesktop_is_converted_to_json()
{
    bourne::json input =
    {
        "eagerLoadStepsDesktop", 1
    };

    PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["eagerLoadStepsDesktop"] == output["eagerLoadStepsDesktop"]);




}


