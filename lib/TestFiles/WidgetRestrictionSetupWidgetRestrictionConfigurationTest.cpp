
#include "WidgetRestrictionSetup.WidgetRestrictionConfiguration.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WidgetRestrictionSetup.WidgetRestrictionConfiguration_forcedResponsiveMode_is_assigned_from_json()
{
    bourne::json input =
    {
        "forcedResponsiveMode", 1
    };

    WidgetRestrictionSetup.WidgetRestrictionConfiguration obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getForcedResponsiveMode());








}




void test_WidgetRestrictionSetup.WidgetRestrictionConfiguration_forcedResponsiveMode_is_converted_to_json()
{
    bourne::json input =
    {
        "forcedResponsiveMode", 1
    };

    WidgetRestrictionSetup.WidgetRestrictionConfiguration obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["forcedResponsiveMode"] == output["forcedResponsiveMode"]);




}



