package components.lib;

class percentCompare {
	@no_side_effect @generated("blockdiagram")
	public real calc(real in value, real in avg) {
		if(avg == 0.0){
		return 0.0;	
		}
		return((value - avg) / avg); // Main/calc 1
	}
}