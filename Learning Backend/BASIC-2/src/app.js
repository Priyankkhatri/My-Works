// server create krna
const express = require("express");


const app = express()


const notes = []
/* title, description */
/* POST /notes  */
app.post("/notes", (req, res)=>{
    console.log(req.body)
})




module.exports = app


