
/*
 * WidgetRestrictionSetup.WidgetRestrictionConfiguration.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WidgetRestrictionSetup.WidgetRestrictionConfiguration_H_
#define TINY_CPP_CLIENT_WidgetRestrictionSetup.WidgetRestrictionConfiguration_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WidgetRestrictionSetup.WidgetRestrictionConfiguration{
public:

    /*! \brief Constructor.
	 */
    WidgetRestrictionSetup.WidgetRestrictionConfiguration();
    WidgetRestrictionSetup.WidgetRestrictionConfiguration(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WidgetRestrictionSetup.WidgetRestrictionConfiguration();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getForcedResponsiveMode();

	/*! \brief Set 
	 */
	void setForcedResponsiveMode(int  forcedResponsiveMode);
	/*! \brief Get 
	 */
	std::list<int> getAllowedSizes();

	/*! \brief Set 
	 */
	void setAllowedSizes(std::list <int> allowedSizes);


    private:
    int forcedResponsiveMode{};
    std::list<int> allowedSizes;
};
}

#endif /* TINY_CPP_CLIENT_WidgetRestrictionSetup.WidgetRestrictionConfiguration_H_ */
