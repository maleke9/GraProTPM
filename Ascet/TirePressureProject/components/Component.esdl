package components;
import components.lib.average;
import components.lib.Integrator;
import components.lib.percentCompare;
import components.lib.diffCheck;
import components.lib.NoiseGenerator;

static class Component
reads veloCar.vfl, distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr, veloCar.vfr, veloCar.vrl, veloCar.vrr, distanceCar.avgDistanceCar, diffWheel.diffFl, diffWheel.diffFr, diffWheel.diffRl, diffWheel.diffRr
writes distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr, distanceCar.avgDistanceCar, diffWheel.diffFl, diffWheel.diffFr, diffWheel.diffRl, diffWheel.diffRr, pressureError.errFl, pressureError.errFr, pressureError.errRl, pressureError.errRr, pressureError.err {
	average average_instance;
	public characteristic boolean reset = false;
	@dT
	public real deltatime = 0.0;
	Integrator Integrator_instance;
	Integrator Integrator_instance1;
	Integrator Integrator_instance2;
	Integrator Integrator_instance3;
	percentCompare percentCompare_instance;
	percentCompare percentCompare_instance1;
	percentCompare percentCompare_instance2;
	percentCompare percentCompare_instance3;
	characteristic integer vflA = 0;
	characteristic integer vflC = 0;
	characteristic integer vflM = 0;
	characteristic real gain = 0.0;
	NoiseGenerator TirePressureProject_instance;
	NoiseGenerator NoiseGenerator_instance;
	NoiseGenerator NoiseGenerator_instance_2;
	NoiseGenerator NoiseGenerator_instance_3;
	NoiseGenerator NoiseGenerator_instance_4;
	SoundOutStateMaschine SoundOutStateMaschine_instance;
	SoundOutStateMaschine SoundOutStateMaschine_instance_2;

	@generated("blockdiagram")
	@thread
	public void calc() {
		distanceCar.sfl = Integrator_instance.outVal(); // Main/calc 1
		distanceCar.sfr = Integrator_instance1.outVal(); // Main/calc 2
		distanceCar.srl = Integrator_instance2.outVal(); // Main/calc 3
		distanceCar.srr = Integrator_instance3.outVal(); // Main/calc 4
		distanceCar.avgDistanceCar = average_instance.calc(distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr); // Main/calc 5
		diffWheel.diffFl = percentCompare_instance.calc(distanceCar.sfl, distanceCar.avgDistanceCar); // Main/calc 6
		diffWheel.diffFr = percentCompare_instance1.calc(distanceCar.sfr, distanceCar.avgDistanceCar); // Main/calc 7
		diffWheel.diffRl = percentCompare_instance2.calc(distanceCar.srl, distanceCar.avgDistanceCar); // Main/calc 8
		diffWheel.diffRr = percentCompare_instance3.calc(distanceCar.srr, distanceCar.avgDistanceCar); // Main/calc 9
		pressureError.errFl = diffCheck.calc(diffWheel.diffFl); // Main/calc 10
		pressureError.errFr = diffCheck.calc(diffWheel.diffFr); // Main/calc 11
		pressureError.errRl = diffCheck.calc(diffWheel.diffRl); // Main/calc 12
		pressureError.errRr = diffCheck.calc(diffWheel.diffRr); // Main/calc 13
		pressureError.err = (((diffCheck.calc(diffWheel.diffFl) || diffCheck.calc(diffWheel.diffFr)) || diffCheck.calc(diffWheel.diffRl)) || diffCheck.calc(diffWheel.diffRr)); // Main/calc 14
		Integrator_instance.integrate((NoiseGenerator_instance.calc(2, 7, 17, 0.01) + veloCar.vfl), deltatime); // Main/calc 15
		Integrator_instance1.integrate((NoiseGenerator_instance_2.calc(3, 9, 17, 0.01) + veloCar.vfr), deltatime); // Main/calc 16
		Integrator_instance2.integrate((NoiseGenerator_instance_3.calc(2, 7, 17, 0.01) + veloCar.vrl), deltatime); // Main/calc 17
		Integrator_instance3.integrate((NoiseGenerator_instance_4.calc(4, 11, 17, 0.01) + veloCar.vrr), deltatime); // Main/calc 18
		if (((diffCheck.calc(diffWheel.diffFl) || diffCheck.calc(diffWheel.diffFr)) || diffCheck.calc(diffWheel.diffRl)) || diffCheck.calc(diffWheel.diffRr)) {
			SoundOutStateMaschine_instance_2.soundOutStateMaschineStatemachineTrigger(); // Main/calc 19/if-then 1
		} else {
			SoundOutStateMaschine_instance_2.lampOn = false; // Main/calc 19/if-else 1
		} // Main/calc 19
		SoundOutStateMaschine_instance_2.deltaTime = deltatime; // Main/calc 20
	}
}