
/*
 * ContainerRestrictionSetup.ContainerRestrictionConfiguration.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ContainerRestrictionSetup.ContainerRestrictionConfiguration_H_
#define TINY_CPP_CLIENT_ContainerRestrictionSetup.ContainerRestrictionConfiguration_H_


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

class ContainerRestrictionSetup.ContainerRestrictionConfiguration{
public:

    /*! \brief Constructor.
	 */
    ContainerRestrictionSetup.ContainerRestrictionConfiguration();
    ContainerRestrictionSetup.ContainerRestrictionConfiguration(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ContainerRestrictionSetup.ContainerRestrictionConfiguration();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<int> getAllowedLayouts();

	/*! \brief Set 
	 */
	void setAllowedLayouts(std::list <int> allowedLayouts);
	/*! \brief Get 
	 */
	std::list<std::string> getBannedWidgets();

	/*! \brief Set 
	 */
	void setBannedWidgets(std::list <std::string> bannedWidgets);


    private:
    std::list<int> allowedLayouts;
    std::list<std::string> bannedWidgets;
};
}

#endif /* TINY_CPP_CLIENT_ContainerRestrictionSetup.ContainerRestrictionConfiguration_H_ */
