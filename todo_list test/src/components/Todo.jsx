import React from 'react'
import { useState } from 'react'
import { useEffect } from 'react'




const todo = () => {
const showLoaclstrorage = () => {
      const localdata = JSON.parse(localStorage.getItem("todolist"));
     if(localdata){
        return localdata
     }
     else{
        return[]
     }
    };
    showLoaclstrorage();
    const [index, setindex] = useState("")
    const [id, setid] = useState("")
    const [todolist, settodolist] = useState(showLoaclstrorage())
    const [title, settitle] = useState("")
    const [discription, setdiscription] = useState("")
    // console.log(title ,discription)

    const addTask=()=>{
        if (id ===""){
          const newtask = {
            id: Math.random(),
            title: title,
            discription: discription,
          };
          settodolist([...todolist, newtask]);
          settitle("");
          setdiscription("");
        }
        else{
            todolist[index].title = title
            todolist[index].discription=discription
            setid("")
            setindex("")
            settodolist(todolist)
            settitle("")
            setdiscription("")
            // document.querySelector("#ad-ed").innerText = "Add";
        }
    }

    const editTrigger= (id , i)=>{
        const trigger = todolist.filter((e)=> e.id == id)
        console.log(trigger)
        settitle(trigger[0].title)
        setdiscription(trigger[0].discription)
        setid(id)
        setindex(i)

        document.querySelector("#ad-ed").innerText = "Update"


    }

    const removeTask = (id)=>{
        const newArr = todolist.filter((e)=>e.id!=id)
        settodolist(newArr)
    }

    localStorage.setItem("todolist",JSON.stringify(todolist))
  
    

  return (
    <>
      <div className="container d-flex flex-column align-items-center ">
        <h1>React To do List CRUD App</h1>
        <div className="form d-flex gap-3 ">
          <input
            placeholder="title"
            type="text"
            value={title}
            onChange={(e) => settitle(e.target.value)}
          />
          <input
            placeholder="discription"
            type="text"
            value={discription}
            onChange={(e) => setdiscription(e.target.value)}
          />
          <button onClick={addTask} id='ad-ed' className="btn btn-warning  ">
            Add
          </button>
        </div>
        {/* show data */}
        <div className="showdata d-flex justify-content-around ">
          <div>
            <h1>Title</h1>
          </div>
          <div>
            <h1>Description</h1>
          </div>
          <div>
            <h1> Action</h1>
          </div>
        </div>
      
        {todolist.map((e , i) => {
          return (
            <div className="showdata d-flex justify-content-around ">
              {/*  */}
              <div>
                <h1>{e.title}</h1>
              </div>
              <div>
                <h1> {e.discription}</h1>
              </div>
              <div>
                {/* <h1>Action</h1> */}
                <div className="button">
                  <button onClick={()=>editTrigger(e.id , i)} className="btn btn-warning ">edit</button>
              <button onClick={()=>removeTask(e.id)} className="btn btn-danger ">Deleate</button>
                </div>
              </div>
            </div>
          );
        })}
      </div>
    </>
  );
}

export default todo