
/*
 * Category.Models.Write.Category.h
 *
 * A category to create or update.
 */

#ifndef TINY_CPP_CLIENT_Category.Models.Write.Category_H_
#define TINY_CPP_CLIENT_Category.Models.Write.Category_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A category to create or update.
 *
 *  \ingroup Models
 *
 */

class Category.Models.Write.Category{
public:

    /*! \brief Constructor.
	 */
    Category.Models.Write.Category();
    Category.Models.Write.Category(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Category.Models.Write.Category();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier of the parent category of this category.
	 */
	int getParentCategoryId();

	/*! \brief Set The unique identifier of the parent category of this category.
	 */
	void setParentCategoryId(int  parentCategoryId);
	/*! \brief Get The localizable names of the category.
	 */
	std::list<Shared.Models.LocalizableContent> getNames();

	/*! \brief Set The localizable names of the category.
	 */
	void setNames(std::list <Shared.Models.LocalizableContent> names);
	/*! \brief Get The localized descriptions of the category.
	 */
	std::list<Shared.Models.LocalizableContent> getDescriptions();

	/*! \brief Set The localized descriptions of the category.
	 */
	void setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions);


    private:
    int parentCategoryId{};
    std::list<Shared.Models.LocalizableContent> names;
    std::list<Shared.Models.LocalizableContent> descriptions;
};
}

#endif /* TINY_CPP_CLIENT_Category.Models.Write.Category_H_ */
