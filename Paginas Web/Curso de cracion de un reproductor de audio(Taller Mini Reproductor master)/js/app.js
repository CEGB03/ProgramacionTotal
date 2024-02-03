$(document).ready(function(){
	getSongs();
	initPlayer();
});
var audio;
var music;

function getSongs(){
	$.getJSON("js/app.json",function(mjson){
		music = mjson;
		genList(music);
	});

}

function genList(music){
	$.each(music.songs,function(i,song){
		$('#playlist').append('<li class="list-group-item" id="'+i+'">'+song.name+'</li>')
	});
	$('#playlist li').click(function(){
		var selectedsong = $(this).attr('id');
		playSong(selectedsong);
	});
}

audio = document.getElementById('player');
function initPlayer(){
	$('#shuffle').click(function(){
		$('#playlist').empty();
		genList(music);
		playSong(0);
	});
}

function randomSong(){
	const randomNum = Math.round(Math.random()*music.songs.length);
	playSong(randomNum);
}

function playSong(id){
	console.log(id);
	var long = music.songs;
	if (id >=long.length) {
		randomSong();
	}else{
		$('#img-album').attr('src',music.songs[id].image);
		$('#player').attr('src',music.songs[id].song);
		audio.play();
		scheduleSong(id);
	}
	
}

function initPlayer(){
	$('#shuffle').click(function(){
		randomSong();
	});
}

function scheduleSong(id){
	audio.onended = function(){
		playSong(parseInt(id)+1);
	}
}

/*

function shuffle(array){
	for(var random, temp, position = array.length;position; random = Math.floor(Math.random()* position),temp = array[--position], array[position]= array[random],array[random]=temp);
		return array;
}
*/