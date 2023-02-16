
/*
 * Order.ProcessedCapture.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.ProcessedCapture_H_
#define TINY_CPP_CLIENT_Order.ProcessedCapture_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.ProcessedCapture{
public:

    /*! \brief Constructor.
	 */
    Order.ProcessedCapture();
    Order.ProcessedCapture(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.ProcessedCapture();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCaptureId();

	/*! \brief Set 
	 */
	void setCaptureId(std::string  captureId);
	/*! \brief Get 
	 */
	std::string getExternalId();

	/*! \brief Set 
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get 
	 */
	std::string getReference();

	/*! \brief Set 
	 */
	void setReference(std::string  reference);
	/*! \brief Get 
	 */
	std::string getProcessedOn();

	/*! \brief Set 
	 */
	void setProcessedOn(std::string  processedOn);


    private:
    std::string captureId{};
    std::string externalId{};
    std::string reference{};
    std::string processedOn{};
};
}

#endif /* TINY_CPP_CLIENT_Order.ProcessedCapture_H_ */
