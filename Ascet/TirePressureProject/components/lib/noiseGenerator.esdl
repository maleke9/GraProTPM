package components.lib;

type myInt is integer 0 .. 1000;

class noiseGenerator {
	myInt Xi = 0;
	@generated("blockdiagram")
	public real calc(integer in argA, integer in argC, integer in argM, real in argScale) {
		Xi = (argM % (argC + (argA * Xi))); // Main/calc 1
		return(argScale * real(Xi)); // Main/calc 2
	}
}