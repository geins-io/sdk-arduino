
/*
 * PageArea.Models.Read.PageArea.h
 *
 * The API-version of the PageArea class
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Read.PageArea_H_
#define TINY_CPP_CLIENT_PageArea.Models.Read.PageArea_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageArea.Models.Read.PageWidgetContainer.h"
#include <list>

namespace Tiny {


/*! \brief The API-version of the PageArea class
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Read.PageArea{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Read.PageArea();
    PageArea.Models.Read.PageArea(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Read.PageArea();


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
	/*! \brief Get The settings that determine how containers can be added to this area.
	 */
	std::string getSettings();

	/*! \brief Set The settings that determine how containers can be added to this area.
	 */
	void setSettings(std::string  settings);
	/*! \brief Get The containers in this area
	 */
	std::list<PageArea.Models.Read.PageWidgetContainer> getContainers();

	/*! \brief Set The containers in this area
	 */
	void setContainers(std::list <PageArea.Models.Read.PageWidgetContainer> containers);


    private:
    int index{};
    std::string name{};
    int familyId{};
    std::string settings{};
    std::list<PageArea.Models.Read.PageWidgetContainer> containers;
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Read.PageArea_H_ */
