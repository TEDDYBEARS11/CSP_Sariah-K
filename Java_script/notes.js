let images = ["https://i.natgeofe.com/n/04505c35-858b-4e95-a1a7-d72e5418b7fc/steep-karst-cliffs-of-el-nido-in-palawan.jpg?w=1534&h=768", "https://www.travelandleisure.com/thmb/W9Vi5ELeps5nR9KfUY_jFYz7SHo=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc()/TAL-entalula-beach-philippines-BESTBEACHASIA1024-202638afe9d44bd49467388cca190fbf.jpg", "https://i.natgeofe.com/n/54720271-2656-4eae-a088-a2023cc25c9f/historic-colonial-town-of-vigan.jpg","https://media.audleytravel.com/-/media/images/home/southeast-asia/the-philippines/places/istock_26383760_banaue_rice_terraces_3000x1000.jpg?q=79&w=1920&h=685"]
let counter = 0

function change(){
    if(counter < images.length){
        document.getElementById("img"). src = images[counter]
        [counter]
        counter + 1
    }else{ 
        counter = 0
        document.getElementById
        ("img").src = images
        [counter]
    }
    
}


function hello(){
    let name = window.prompt("what is your name?")
    document.getElementById("title").innerHTML = "Hello " + name+ "!"
}

function hover(){
    document. getElementById("img"). src = "https://static.scientificamerican.com/dam/m/4c6a7129cb60ae2d/original/GettyImages-504677701_WEB.jpg?m=1720796329.143&w=1200"
}


function leave(){
    document. getElementById("img"). src = "https://cdn.crowdriff.com/in-use/e6a67c05-802e-cead-9e5b-ddf824ffb6cc/1080.jpg"
}

function show(){
    document. getElementById("lost"). style.display = "block"
}

function pop(){
    window. alert("really don't click that!")
}