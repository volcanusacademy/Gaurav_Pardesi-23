// fetch data
let searchitem   

const datafetch = async ()=>{
 
    const api = await fetch(
        // searchitem = "candian"
     ` https://www.themealdb.com/api/json/v1/1/filter.php?a=${searchitem}`
    );
    const data = await api.json()
    return data.meals
}

const showData=async()=>{
    const data =await datafetch()
    console.log(data)

    data.map((e)=>{
        let div = document.createElement("div")
        div.className="main"
        div.innerHTML=` <img src=${e.strMealThumb} alt="none" />  <h3>${e.strMeal}</h3> `
        document.querySelector(".container").append(div)
    })
}

const indi =  ()=>{
    searchitem = "indian"
    remove()
     
    showData()
    console.log(datafetch())
}

document.querySelector("#in").addEventListener("click",indi)

const it =  ()=>{
    searchitem = "italian"
    remove()
     
    showData()
    console.log(datafetch())
}

document.querySelector("#it").addEventListener("click",it)

const am =  ()=>{
    remove()
    searchitem = "american"
     
    showData()
    console.log(datafetch())
}

document.querySelector("#am").addEventListener("click",am)

const ca =  ()=>{
    remove()
    searchitem = "Canadian";
     
    showData()
    console.log(datafetch())
}
document.querySelector("#ca").addEventListener("click", ca);


const remove=()=>{
    let count = document.querySelector(".container").childElementCount
    for(let x=0 ; x<count ; x++){
        document.querySelector(".main").remove()
    }
}

ca()
// document.querySelector("#ca").addEventListener("click",ca)


// showData()