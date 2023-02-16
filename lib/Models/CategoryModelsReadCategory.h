
/*
 * Category.Models.Read.Category.h
 *
 * An existing category.
 */

#ifndef TINY_CPP_CLIENT_Category.Models.Read.Category_H_
#define TINY_CPP_CLIENT_Category.Models.Read.Category_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief An existing category.
 *
 *  \ingroup Models
 *
 */

class Category.Models.Read.Category{
public:

    /*! \brief Constructor.
	 */
    Category.Models.Read.Category();
    Category.Models.Read.Category(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Category.Models.Read.Category();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for the category.
	 */
	int getCategoryId();

	/*! \brief Set The unique identifier for the category.
	 */
	void setCategoryId(int  categoryId);
	/*! \brief Get The unique identifier for the parent category.
	 */
	int getParentCategoryId();

	/*! \brief Set The unique identifier for the parent category.
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
	/*! \brief Get The Google Taxonomy category path for the category, if any.
	 */
	std::string getGoogleCategoryPath();

	/*! \brief Set The Google Taxonomy category path for the category, if any.
	 */
	void setGoogleCategoryPath(std::string  googleCategoryPath);


    private:
    int categoryId{};
    int parentCategoryId{};
    std::list<Shared.Models.LocalizableContent> names;
    std::list<Shared.Models.LocalizableContent> descriptions;
    std::string googleCategoryPath{};
};
}

#endif /* TINY_CPP_CLIENT_Category.Models.Read.Category_H_ */
