const express = require('express');

const app = express()    // server instance create kr rahe hai

app.get("/", (req, res) =>{
    res.send("Home Page");
})

app.get("/about", (req, res) => {
    res.send("About Page");
})

app.get("/contact", (req, res)=>{
    res.send("Contact");
})




app.listen(3000);    //server ko start krne ke liye          3000 is a port number