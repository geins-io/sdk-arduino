#ifndef TINY_CPP_CLIENT_PageAreaApi_H_
#define TINY_CPP_CLIENT_PageAreaApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope-PageArea.Models.Read.PageArea.h"
#include "Envelope-PageArea.Models.Read.PageAreaFamily.h"
#include "PageArea.Models.Read.PageArea.h"
#include "PageArea.Models.Read.PageAreaFamily.h"
#include "PageArea.Models.Write.PageArea.h"
#include "PageArea.Models.Write.PageAreaFamily.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class PageAreaApi : public Service {
public:
    PageAreaApi() = default;

    virtual ~PageAreaApi() = default;

    /**
    * Create or update a page area.
    *
    * 
    * \param area The area model to create or update. *Required*
    */
    Response<
                Envelope-PageArea.Models.Read.PageArea
        >
    create_or_update_a_page_area(
            
            PageArea.Models.Write.PageArea area
            
    );
    /**
    * Create or update a page area family.
    *
    * 
    * \param family The family model to create or update. *Required*
    */
    Response<
                Envelope-PageArea.Models.Read.PageAreaFamily
        >
    create_or_update_page_area_family(
            
            PageArea.Models.Write.PageAreaFamily family
            
    );
    /**
    * Get a specific page area.
    *
    * 
    * \param name The name of the page area to get. *Required*
    */
    Response<
                PageArea.Models.Read.PageArea
        >
    get_page_area(
            
            std::string name
            
    );
    /**
    * Get a specific page area family.
    *
    * 
    * \param familyId The id of the page area family to get. *Required*
    */
    Response<
                PageArea.Models.Read.PageAreaFamily
        >
    get_page_area_family(
            
            int familyId
            
    );
    /**
    * Gets a list of all page area families, including nested data.
    *
    * 
    */
    Response<
                    std::list<PageArea.Models.Read.PageAreaFamily>
        >
    list_page_area_families(
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_PageAreaApi_H_ */