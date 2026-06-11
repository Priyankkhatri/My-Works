const mongoose = require("mongoose");


const noteSchema = new mongoose.Schema({
    title:String,
    description:String,
})
/* why do we create model (notemodel or just model)
--->agr tuymhe database me kuch bhi operations perform krna hai related to node, toh tumhe node ka model create krna padega

kuch bhi operations se matlab hai -->
CRUD Operations
Create - POST
Read - GET
Update - PATCH
Delete - DELETE

inn operations ko database me krne ke liye notemodel use krna padta hai

agr notemodels use nahi krne toh kaam ho sakta hai but task complex ho jaata hai
*/
const noteModel = mongoose.model("note", notsSchema) 
