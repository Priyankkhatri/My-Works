const mongoose = require("mongoose");


async function connectDB() {
    await mongoose.connect("mongodb+srv://Priyank1980p:priyank123456@cluster0.mw8fpgu.mongodb.net/priyank")


   
    console.log("Connected to db"); 
}

module.exports = connectDB