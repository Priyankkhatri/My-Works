// import React, { Children } from 'react'

// const App = () => {

//   // function btnClicked() {
//   //   console.log("Button is clicked");
//   // }

//   // function mouseEnter() {
//   //   console.log("Mouse Entered");
//   // }
//   // function mouseLeave() {
//   //   console.log("Mouse leave");
//   // }

//     function inputChanging(val){
//         console.log(val);
//     }

//   return (
//     <div>
//       <h1>Hello, Priyank!</h1>
//       {/* <button onMouseEnter={mouseEnter} onMouseLeave={mouseLeave} onClick={btnClicked}>Click here!</button> */}
//       {/* <button>onClick={()=>{
//         console.log("Button clicked!");
//       }}</button> */}

//     <div>
//       {/* <input onChange={inputChanging} onClick={()=>{
//         console.log("Input pe click hua hai");
//       }} type="text" placeholder='Enter Name' /> */}

//         <input 
//         onChange={function(elem){
//           inputChanging(elem.target.value);
//         }} type="text" placeholder='Enter text here' />

//     </div>

//     </div>
//   )
// }
// export default App;

import React from 'react'

const App = () => {
    const pageScrolling = () => {
    console.log('page scrolling....');
  }
  return (
    <div onWheel={(elem)=>{
      pageScrolling(elem)
    }}>
      <div className="page1"></div>
      <div className="page2"></div>
      <div className="page3"></div>
    </div>
  )
}

export default App;