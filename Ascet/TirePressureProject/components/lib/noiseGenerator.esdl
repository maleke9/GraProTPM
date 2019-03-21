package components.lib;

type myInt is integer 1 .. 10000;
class NoiseGenerator {
	myInt mem = 1;

	@generated("blockdiagram")
	public real calc(myInt in argA, myInt in argC, myInt in argM, real in scaleGain) {
		mem = (((mem * argA) + argC) % argM); // Main/calc 1
		return(real(mem) * scaleGain); // Main/calc 2
	}
}