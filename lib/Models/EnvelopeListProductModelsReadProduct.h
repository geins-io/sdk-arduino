
/*
 * Envelope-List-Product.Models.Read.Product.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-List-Product.Models.Read.Product_H_
#define TINY_CPP_CLIENT_Envelope-List-Product.Models.Read.Product_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageResult.h"
#include "Product.Models.Read.Product.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-List-Product.Models.Read.Product{
public:

    /*! \brief Constructor.
	 */
    Envelope-List-Product.Models.Read.Product();
    Envelope-List-Product.Models.Read.Product(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-List-Product.Models.Read.Product();


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
	/*! \brief Get The resource on which the action was taken.
	 */
	std::list<Product.Models.Read.Product> getResource();

	/*! \brief Set The resource on which the action was taken.
	 */
	void setResource(std::list <Product.Models.Read.Product> resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    std::list<Product.Models.Read.Product> resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-List-Product.Models.Read.Product_H_ */
