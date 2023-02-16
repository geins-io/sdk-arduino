
/*
 * Category.Models.CategoryQuery.h
 *
 * A query to filter categories by.
 */

#ifndef TINY_CPP_CLIENT_Category.Models.CategoryQuery_H_
#define TINY_CPP_CLIENT_Category.Models.CategoryQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief A query to filter categories by.
 *
 *  \ingroup Models
 *
 */

class Category.Models.CategoryQuery{
public:

    /*! \brief Constructor.
	 */
    Category.Models.CategoryQuery();
    Category.Models.CategoryQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Category.Models.CategoryQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Limits query to categories created after the specified date.
	 */
	std::string getCreatedAfter();

	/*! \brief Set Limits query to categories created after the specified date.
	 */
	void setCreatedAfter(std::string  createdAfter);
	/*! \brief Get Limits query to only include the supplied category ids.
	 */
	std::list<int> getCategoryIds();

	/*! \brief Set Limits query to only include the supplied category ids.
	 */
	void setCategoryIds(std::list <int> categoryIds);


    private:
    std::string createdAfter{};
    std::list<int> categoryIds;
};
}

#endif /* TINY_CPP_CLIENT_Category.Models.CategoryQuery_H_ */
