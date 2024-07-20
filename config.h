#define CMDLENGTH 100
#define DELIMITER " "
#define CLICKABLE_BLOCKS 1


const Block blocks[] = {
	// BLOCK("block_resources",1 ,1),
  // bottombar
	BLOCK("block_wifi"     ,1 ,1),
	BLOCK("block_pulse"    ,0 ,3),
	BLOCK("block_battery"  ,60,4),
  // split
  {"echo ';'" ,0,0},
  // topbar 
	BLOCK("block_light"    ,0 ,2),
	BLOCK("block_time"     ,60,5),
};

