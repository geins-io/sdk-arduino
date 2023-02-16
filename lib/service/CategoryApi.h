#ifndef TINY_CPP_CLIENT_CategoryApi_H_
#define TINY_CPP_CLIENT_CategoryApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Category.Models.CategoryQuery.h"
#include "Category.Models.Read.Category.h"
#include "Category.Models.Write.Category.h"
#include "Envelope-Category.Models.Read.Category.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class CategoryApi : public Service {
public:
    CategoryApi() = default;

    virtual ~CategoryApi() = default;

    /**
    * Create a new category.
    *
    * 
    * \param category The category to create. *Required*
    */
    Response<
                Envelope-Category.Models.Read.Category
        >
    create_category(
            
            Category.Models.Write.Category category
            
    );
    /**
    * Get a specific category.
    *
    * 
    * \param id The id of the category to get. *Required*
    */
    Response<
                Envelope-Category.Models.Read.Category
        >
    get_category_by_id(
            
            int id
            
    );
    /**
    * Query categories.
    *
    * No response envelope.
    * \param query The query to filter categories by. *Required*
    */
    Response<
                    std::list<Category.Models.Read.Category>
        >
    query_categories(
            
            Category.Models.CategoryQuery query
            
    );
    /**
    * Update a category.
    *
    * Leaving out a property will ensure no changes are made to that property. Collection properties will delete and/or add as necessary to match the supplied data.
    * \param id The id of the category to update. *Required*
    * \param category The category data to update. *Required*
    */
    Response<
                Envelope-Category.Models.Read.Category
        >
    update_category(
            
            int id
            , 
            
            Category.Models.Write.Category category
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_CategoryApi_H_ */