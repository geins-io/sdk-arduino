
/*
 * Envelope-Supplier.Models.Read.Supplier.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-Supplier.Models.Read.Supplier_H_
#define TINY_CPP_CLIENT_Envelope-Supplier.Models.Read.Supplier_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageResult.h"
#include "Supplier.Models.Read.Supplier.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-Supplier.Models.Read.Supplier{
public:

    /*! \brief Constructor.
	 */
    Envelope-Supplier.Models.Read.Supplier();
    Envelope-Supplier.Models.Read.Supplier(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-Supplier.Models.Read.Supplier();


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
	Supplier.Models.Read.Supplier getResource();

	/*! \brief Set 
	 */
	void setResource(Supplier.Models.Read.Supplier  resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    Supplier.Models.Read.Supplier resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-Supplier.Models.Read.Supplier_H_ */
