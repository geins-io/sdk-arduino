
/*
 * Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue_H_
#define TINY_CPP_CLIENT_Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageResult.h"
#include "ProductParameter.Models.Read.ProductParameterPredefinedValue.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue{
public:

    /*! \brief Constructor.
	 */
    Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue();
    Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue();


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
	ProductParameter.Models.Read.ProductParameterPredefinedValue getResource();

	/*! \brief Set 
	 */
	void setResource(ProductParameter.Models.Read.ProductParameterPredefinedValue  resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    ProductParameter.Models.Read.ProductParameterPredefinedValue resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue_H_ */
