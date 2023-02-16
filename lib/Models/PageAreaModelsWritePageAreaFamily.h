
/*
 * PageArea.Models.Write.PageAreaFamily.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Write.PageAreaFamily_H_
#define TINY_CPP_CLIENT_PageArea.Models.Write.PageAreaFamily_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageArea.Models.Write.PageArea.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Write.PageAreaFamily{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Write.PageAreaFamily();
    PageArea.Models.Write.PageAreaFamily(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Write.PageAreaFamily();


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
	/*! \brief Get This page area family has access to the following properties that can be used for filtering, when rendering itself.  <para>  The following properties are available:  SiteId,  LanguageId,  ProductId,  CategoryId,  BrandId,  InfoPageId,  DiscountCampaignNumber,  GenderId,  Sale,  UserTypeId  ActiveFrom,  ActiveTo  </para>
	 */
	std::list<std::string> getFilterableProperties();

	/*! \brief Set This page area family has access to the following properties that can be used for filtering, when rendering itself.  <para>  The following properties are available:  SiteId,  LanguageId,  ProductId,  CategoryId,  BrandId,  InfoPageId,  DiscountCampaignNumber,  GenderId,  Sale,  UserTypeId  ActiveFrom,  ActiveTo  </para>
	 */
	void setFilterableProperties(std::list <std::string> filterableProperties);
	/*! \brief Get 
	 */
	std::list<PageArea.Models.Write.PageArea> getAreas();

	/*! \brief Set 
	 */
	void setAreas(std::list <PageArea.Models.Write.PageArea> areas);


    private:
    int id{};
    std::string name{};
    std::list<std::string> filterableProperties;
    std::list<PageArea.Models.Write.PageArea> areas;
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Write.PageAreaFamily_H_ */
