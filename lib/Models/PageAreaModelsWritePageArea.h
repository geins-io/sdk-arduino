
/*
 * PageArea.Models.Write.PageArea.h
 *
 * The API-version of the PageArea class
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Write.PageArea_H_
#define TINY_CPP_CLIENT_PageArea.Models.Write.PageArea_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "System.Nullable-ValidationConfiguration.h"

namespace Tiny {


/*! \brief The API-version of the PageArea class
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Write.PageArea{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Write.PageArea();
    PageArea.Models.Write.PageArea(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Write.PageArea();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The primary id of this page are family collection
	 */
	int getIndex();

	/*! \brief Set The primary id of this page are family collection
	 */
	void setIndex(int  index);
	/*! \brief Get A descriptive, user-defined name for this page area family collection
	 */
	std::string getName();

	/*! \brief Set A descriptive, user-defined name for this page area family collection
	 */
	void setName(std::string  name);
	/*! \brief Get The family this area belongs to.
	 */
	int getFamilyId();

	/*! \brief Set The family this area belongs to.
	 */
	void setFamilyId(int  familyId);
	/*! \brief Get 
	 */
	System.Nullable-ValidationConfiguration getSettings();

	/*! \brief Set 
	 */
	void setSettings(System.Nullable-ValidationConfiguration  settings);


    private:
    int index{};
    std::string name{};
    int familyId{};
    System.Nullable-ValidationConfiguration settings;
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Write.PageArea_H_ */
