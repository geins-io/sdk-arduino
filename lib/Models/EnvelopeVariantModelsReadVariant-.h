
/*
 * Envelope-Variant.Models.Read.Variant-.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-Variant.Models.Read.Variant-_H_
#define TINY_CPP_CLIENT_Envelope-Variant.Models.Read.Variant-_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageResult.h"
#include "Variant.Models.Read.Variant.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-Variant.Models.Read.Variant-{
public:

    /*! \brief Constructor.
	 */
    Envelope-Variant.Models.Read.Variant-();
    Envelope-Variant.Models.Read.Variant-(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-Variant.Models.Read.Variant-();


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
	std::list<Variant.Models.Read.Variant> getResource();

	/*! \brief Set The resource on which the action was taken.
	 */
	void setResource(std::list <Variant.Models.Read.Variant> resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    std::list<Variant.Models.Read.Variant> resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-Variant.Models.Read.Variant-_H_ */
