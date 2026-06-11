// server create krna
const express = require("express");


const app = express()
app.use(express.json())

const notes = []
/* title, description */
/* POST /notes  */
app.post("/notes", (req, res)=>{
    notes.push(req.body)

    res.status(201).json({
        message:"note created successfully!"
    })
})

/* GET /notes*/
app.get('/notes', (req, res) =>{
    res.status(201).json({
        message: "notes fetched successfully",
        notes : notes
    })
})



/* delete /notes/:index/1 */

app.delete('/notes/:index', (req, res)=>{                        //COLON IS TO GET TO KNOW THTA THE INDEX NO. WILL BE DYNAMIC
    const index = req.params.index    /* 1 */
    delete notes[ index ]

    res.status(200).json({
        message:"note deleted successfully!"
    })
})



app.patch('/notes/:index', (req,res)=>{
    const index = req.params.index
    const title = req.body.title
    const description = req.body.description

    notes[ index ].title = title
    notes[ index ].description = description
    res.status(200).json({
        message: "note updatd succcessfully!"
    })
})


module.exports = app


