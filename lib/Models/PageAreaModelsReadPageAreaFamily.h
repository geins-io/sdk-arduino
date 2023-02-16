
/*
 * PageArea.Models.Read.PageAreaFamily.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Read.PageAreaFamily_H_
#define TINY_CPP_CLIENT_PageArea.Models.Read.PageAreaFamily_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageArea.Models.Read.PageArea.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Read.PageAreaFamily{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Read.PageAreaFamily();
    PageArea.Models.Read.PageAreaFamily(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Read.PageAreaFamily();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get This page area family has access to the following properties that can be used for filtering, when rendering itself.
	 */
	std::string getFilterableProperties();

	/*! \brief Set This page area family has access to the following properties that can be used for filtering, when rendering itself.
	 */
	void setFilterableProperties(std::string  filterableProperties);
	/*! \brief Get 
	 */
	std::list<PageArea.Models.Read.PageArea> getAreas();

	/*! \brief Set 
	 */
	void setAreas(std::list <PageArea.Models.Read.PageArea> areas);


    private:
    int id{};
    std::string name{};
    std::string filterableProperties{};
    std::list<PageArea.Models.Read.PageArea> areas;
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Read.PageAreaFamily_H_ */
