#include "ProductApi.h"

using namespace Tiny;



        Response<
            Envelope
        >
        ProductApi::
        add_Image_to_Product(
            
            std::string productId
            , 
            
            std::string imageName
            , 
            
            bool isPrimaryImage
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}/Image/{imageName}"; //productId imageName 


            // Headers  | 

            // Query    | isPrimaryImage productIdType 
            addQueryParam("isPrimaryImage",isPrimaryImage);
            addQueryParam("productIdType",productIdType);

            // Form     | 



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));
                std::string s_imageName("{");
                s_imageName.append("imageName");
                s_imageName.append("}");

                int pos = url.find(s_imageName);

                url.erase(pos, s_imageName.length());
                url.insert(pos, stringify(imageName));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | 
            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope
        >
        ProductApi::
        add_availability_monitor(
            
            Product.Models.MonitorSku model
            
        )
        {
            std::string url = basepath + "/API/Product/MonitorAvailability"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | model



            payload = model.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope
        >
        ProductApi::
        add_category_to_product(
            
            std::string productId
            , 
            
            Product.Models.ProductCategory productCategory
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}/Category"; //productId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productCategory



            payload = productCategory.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Product.Models.RelatedProductEnvelope
        >
        ProductApi::
        add_related_products_to_product(
            
            std::string productId
            , 
            std::list<Product.Models.Write.RelatedProduct> relatedProducts
            
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}/Related"; //productId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | relatedProducts


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : relatedProducts)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Product.Models.RelatedProductEnvelope obj(output_string);


            Response<Product.Models.RelatedProductEnvelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope
        >
        ProductApi::
        batch_update_product_items(
            std::list<Product.Models.Write.ProductItem> productItems
            
            , 
            
            int productItemIdType
            
        )
        {
            std::string url = basepath + "/API/Product/Items"; //


            // Headers  | 

            // Query    | productItemIdType 
            addQueryParam("productItemIdType",productItemIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productItems


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : productItems)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Product.Models.StockEnvelope
        >
        ProductApi::
        batch_update_stock_values(
            std::list<Product.Models.Write.ProductItemStock> productItemStocks
            
            , 
            
            int productItemIdType
            
        )
        {
            std::string url = basepath + "/API/Product/Stock"; //


            // Headers  | 

            // Query    | productItemIdType 
            addQueryParam("productItemIdType",productItemIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productItemStocks


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : productItemStocks)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Product.Models.StockEnvelope obj(output_string);


            Response<Product.Models.StockEnvelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Product.Models.Read.Product
        >
        ProductApi::
        create_product(
            
            Product.Models.Write.Product product
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Product"; //


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | product



            payload = product.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Product.Models.Read.Product obj(output_string);


            Response<Envelope-Product.Models.Read.Product> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Product.Models.Read.ProductItem
        >
        ProductApi::
        create_product_items(
            
            std::string productId
            , 
            
            Product.Models.Write.ProductItem productItem
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}/Item"; //productId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productItem



            payload = productItem.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Product.Models.Read.ProductItem obj(output_string);


            Response<Envelope-Product.Models.Read.ProductItem> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Product.Models.Read.Product
        >
        ProductApi::
        get_product_by_id(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}"; //productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Product.Models.Read.Product obj(output_string);


            Response<Envelope-Product.Models.Read.Product> response(obj, httpCode);
            return response;
        }

        Response<
            Product.ProductItemEnvelope
        >
        ProductApi::
        get_product_item_by_id(
            
            std::string itemId
            , 
            
            int productItemIdType
            
        )
        {
            std::string url = basepath + "/API/Product/Item/{itemId}"; //itemId 


            // Headers  | 

            // Query    | productItemIdType 
            addQueryParam("productItemIdType",productItemIdType);

            // Form     | 



                std::string s_itemId("{");
                s_itemId.append("itemId");
                s_itemId.append("}");

                int pos = url.find(s_itemId);

                url.erase(pos, s_itemId.length());
                url.insert(pos, stringify(itemId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Product.ProductItemEnvelope obj(output_string);


            Response<Product.ProductItemEnvelope> response(obj, httpCode);
            return response;
        }

        Response<
            Product.Models.RelatedProductEnvelope
        >
        ProductApi::
        link_related_products_by_relation_id(
            
            std::string productId
            , 
            
            int relationTypeId
            , 
            std::list<Product.Models.Write.RelatedProduct> relatedProducts
            
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}/Related/{relationTypeId}"; //productId relationTypeId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));
                std::string s_relationTypeId("{");
                s_relationTypeId.append("relationTypeId");
                s_relationTypeId.append("}");

                int pos = url.find(s_relationTypeId);

                url.erase(pos, s_relationTypeId.length());
                url.insert(pos, stringify(relationTypeId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | relatedProducts


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : relatedProducts)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Product.Models.RelatedProductEnvelope obj(output_string);


            Response<Product.Models.RelatedProductEnvelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-List-Product.Models.Read.ProductItem
        >
        ProductApi::
        list_all_product_items_paged(
            
            int page
            
        )
        {
            std::string url = basepath + "/API/Product/Items/{page}"; //page 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_page("{");
                s_page.append("page");
                s_page.append("}");

                int pos = url.find(s_page);

                url.erase(pos, s_page.length());
                url.insert(pos, stringify(page));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-List-Product.Models.Read.ProductItem obj(output_string);


            Response<Envelope-List-Product.Models.Read.ProductItem> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-List-Product.Models.Read.Feed
        >
        ProductApi::
        list_feeds(
        )
        {
            std::string url = basepath + "/API/Product/Feeds"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-List-Product.Models.Read.Feed obj(output_string);


            Response<Envelope-List-Product.Models.Read.Feed> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Product.Models.Read.ProductItem>
        >
        ProductApi::
        list_product_items(
        )
        {
            std::string url = basepath + "/API/Product/Items"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Product.Models.Read.ProductItem> obj = std::list<Product.Models.Read.ProductItem>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Product.Models.Read.ProductItem tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Product.Models.Read.ProductItem>> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-List-Product.Models.Read.RelationType
        >
        ProductApi::
        list_product_relation_types(
        )
        {
            std::string url = basepath + "/API/Product/RelationTypes"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-List-Product.Models.Read.RelationType obj(output_string);


            Response<Envelope-List-Product.Models.Read.RelationType> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-List-Product.Models.Read.Product
        >
        ProductApi::
        query_products(
            
            Product.Models.ProductQuery query
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Product/Query"; //


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | query



            payload = query.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-List-Product.Models.Read.Product obj(output_string);


            Response<Envelope-List-Product.Models.Read.Product> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-List-Product.Models.Read.Product
        >
        ProductApi::
        query_products_paged(
            
            int page
            , 
            
            Product.Models.ProductQuery query
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Product/Query/{page}"; //page 


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_page("{");
                s_page.append("page");
                s_page.append("}");

                int pos = url.find(s_page);

                url.erase(pos, s_page.length());
                url.insert(pos, stringify(page));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | query



            payload = query.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-List-Product.Models.Read.Product obj(output_string);


            Response<Envelope-List-Product.Models.Read.Product> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Product.Models.Read.ProductItemStock>
        >
        ProductApi::
        query_stock(
            std::list<int> productItemIds
            
            
        )
        {
            std::string url = basepath + "/API/Product/Stock/Query"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productItemIds

            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : productItemIds)
            {
                tmp_arr.append(var);
            }
            payload = tmp_arr.dump();



            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Product.Models.Read.ProductItemStock> obj = std::list<Product.Models.Read.ProductItemStock>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Product.Models.Read.ProductItemStock tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Product.Models.Read.ProductItemStock>> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Product.Models.Read.Product
        >
        ProductApi::
        update_product(
            
            std::string productId
            , 
            
            Product.Models.Write.Product product
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Product/{productId}"; //productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | product



            payload = product.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Product.Models.Read.Product obj(output_string);


            Response<Envelope-Product.Models.Read.Product> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Product.Models.Read.ProductItem
        >
        ProductApi::
        update_product_item(
            
            std::string itemId
            , 
            
            Product.Models.Write.ProductItem productItem
            , 
            
            int productItemIdType
            
        )
        {
            std::string url = basepath + "/API/Product/Item/{itemId}"; //itemId 


            // Headers  | 

            // Query    | productItemIdType 
            addQueryParam("productItemIdType",productItemIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_itemId("{");
                s_itemId.append("itemId");
                s_itemId.append("}");

                int pos = url.find(s_itemId);

                url.erase(pos, s_itemId.length());
                url.insert(pos, stringify(itemId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productItem



            payload = productItem.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Product.Models.Read.ProductItem obj(output_string);


            Response<Envelope-Product.Models.Read.ProductItem> response(obj, httpCode);
            return response;
        }



