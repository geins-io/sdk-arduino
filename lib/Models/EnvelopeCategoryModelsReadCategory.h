
/*
 * Envelope-Category.Models.Read.Category.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-Category.Models.Read.Category_H_
#define TINY_CPP_CLIENT_Envelope-Category.Models.Read.Category_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Category.Models.Read.Category.h"
#include "PageResult.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-Category.Models.Read.Category{
public:

    /*! \brief Constructor.
	 */
    Envelope-Category.Models.Read.Category();
    Envelope-Category.Models.Read.Category(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-Category.Models.Read.Category();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A status message for the action taken.
	 */
	std::string getMessage();

	/*! \brief Set A status message for the action taken.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Any validation messages for the data on the current action.
	 */
	std::list<std::string> getDetails();

	/*! \brief Set Any validation messages for the data on the current action.
	 */
	void setDetails(std::list <std::string> details);
	/*! \brief Get 
	 */
	Category.Models.Read.Category getResource();

	/*! \brief Set 
	 */
	void setResource(Category.Models.Read.Category  resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    Category.Models.Read.Category resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-Category.Models.Read.Category_H_ */
