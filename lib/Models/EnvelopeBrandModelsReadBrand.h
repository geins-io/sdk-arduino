
/*
 * Envelope-Brand.Models.Read.Brand.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-Brand.Models.Read.Brand_H_
#define TINY_CPP_CLIENT_Envelope-Brand.Models.Read.Brand_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Brand.Models.Read.Brand.h"
#include "PageResult.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-Brand.Models.Read.Brand{
public:

    /*! \brief Constructor.
	 */
    Envelope-Brand.Models.Read.Brand();
    Envelope-Brand.Models.Read.Brand(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-Brand.Models.Read.Brand();


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
	Brand.Models.Read.Brand getResource();

	/*! \brief Set 
	 */
	void setResource(Brand.Models.Read.Brand  resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    Brand.Models.Read.Brand resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-Brand.Models.Read.Brand_H_ */
