const char* _XMTZC05HMKG_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"tag\":\"05\",\"condition\":[\"servicedata\",\"index\",1,\"22\",\"|\",\"servicedata\",\"index\",1,\"2a\",\"|\",\"servicedata\",\"index\",1,\"20\",\"|\",\"servicedata\",\"index\",1,\"62\",\"|\",\"servicedata\",\"index\",1,\"6a\",\"&\",\"servicedata\",\"=\",26,\"&\",\"uuid\",\"contain\",\"181b\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,2,\"person\",\"object\"]},\"is_steady\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,1,false,true]},\"is_current_measurement\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,3,true,false]},\"unit\":{\"decoder\":[\"static_value\",\"kg\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",200]},\"impedance\":{\"condition\":[\"servicedata\",3,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Body Composition Scale",
   "model_id":"XMTZC02HM/XMTZC05HM",
   "tag":"05",
   "condition":["servicedata", "index", 1, "22", "|", "servicedata", "index", 1, "2a", "|", "servicedata", "index", 1, "20", "|", "servicedata", "index", 1, "62", "|", "servicedata", "index", 1, "6a", "&", "servicedata", "=", 26, "&", "uuid", "contain", "181b"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 1, 2, "person", "object"]
      },
      "is_steady":{
         "decoder": ["bit_static_value", "servicedata", 2, 1, false, true]
      },
      "is_current_measurement":{
         "decoder": ["bit_static_value", "servicedata", 2, 3, true, false]
      },
      "unit":{
         "decoder":["static_value", "kg"]
      },
      "weight":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 200]
      },
      "impedance":{
         "condition":["servicedata", 3, "6"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HMKG_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"is_steady\":{\"unit\":\"bool\",\"name\":\"is_steady\"},\"is_current_measurement\":{\"unit\":\"bool\",\"name\":\"is_current_measurement\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"},\"impedance\":{\"unit\":\"Ω\",\"name\":\"impedance\"}}}";
/*R""""(
{
   "properties":{
      "weighing_mode":{
         "unit":"string",
         "name":"weighing_mode"
      },
      "is_steady": {
         "unit": "bool",
         "name": "is_steady"
      },
      "is_current_measurement": {
         "unit": "bool",
         "name": "is_current_measurement"
      },
      "unit":{
         "unit":"string",
         "name":"unit"
      },
      "weight":{
         "unit":"kg",
         "name":"weight"
      },
      "impedance":{
         "unit":"Ω",
         "name":"impedance"
      }
   }
})"""";*/
