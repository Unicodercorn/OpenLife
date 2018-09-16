

switch (side player) do {
    case WEST: {
		
		_texture =  "#(rgb,8,8,3)color(0.1,0.1,0.1,1)"; //black texture
		player setObjectTextureGlobal [0, _texture]; //set it on player
		(backpackContainer player) setObjectTextureGlobal [0,''];
	};
    case EAST: {
	
	};
	
	case independent: {
		
	};
	
	case civilian: {
	
	};
};