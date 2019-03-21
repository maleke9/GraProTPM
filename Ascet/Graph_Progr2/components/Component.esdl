package components;
import components.lib.average;
import components.lib.Integrator;
import components.lib.percentCompare;
import components.lib.diffCheck;
import components.lib.statemaschine;

static class Component
reads veloCar.vfl, distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr, veloCar.vfr, veloCar.vrl, veloCar.vrr, distanceCar.avgDistanceCar, diffWheel.diffFl, diffWheel.diffFr, diffWheel.diffRl, diffWheel.diffRr
writes distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr, distanceCar.avgDistanceCar, diffWheel.diffFl, diffWheel.diffFr, diffWheel.diffRl, diffWheel.diffRr, pressureError.errFl, pressureError.errFr, pressureError.errRl, pressureError.errRr, pressureError.err {
	average average_instance;
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

	@generated("blockdiagram")
	@thread
	public void calc() {
		Integrator_instance.integrate(veloCar.vfl, deltatime); // Main/calc 1
		distanceCar.sfl = Integrator_instance.outVal(); // Main/calc 2
		distanceCar.sfr = Integrator_instance1.outVal(); // Main/calc 3
		distanceCar.srl = Integrator_instance2.outVal(); // Main/calc 4
		distanceCar.srr = Integrator_instance3.outVal(); // Main/calc 5
		Integrator_instance1.integrate(veloCar.vfr, deltatime); // Main/calc 6
		Integrator_instance2.integrate(veloCar.vrl, deltatime); // Main/calc 7
		Integrator_instance3.integrate(veloCar.vrr, deltatime); // Main/calc 8
		distanceCar.avgDistanceCar = average_instance.calc(distanceCar.sfl, distanceCar.sfr, distanceCar.srl, distanceCar.srr); // Main/calc 9
		diffWheel.diffFl = percentCompare_instance.calc(distanceCar.sfl, distanceCar.avgDistanceCar); // Main/calc 10
		diffWheel.diffFr = percentCompare_instance1.calc(distanceCar.sfr, distanceCar.avgDistanceCar); // Main/calc 11
		diffWheel.diffRl = percentCompare_instance2.calc(distanceCar.srl, distanceCar.avgDistanceCar); // Main/calc 12
		diffWheel.diffRr = percentCompare_instance3.calc(distanceCar.srr, distanceCar.avgDistanceCar); // Main/calc 13
		pressureError.errFl = diffCheck.calc(diffWheel.diffFl); // Main/calc 14
		pressureError.errFr = diffCheck.calc(diffWheel.diffFr); // Main/calc 15
		pressureError.errRl = diffCheck.calc(diffWheel.diffRl); // Main/calc 16
		pressureError.errRr = diffCheck.calc(diffWheel.diffRr); // Main/calc 17
		pressureError.err = (((diffCheck.calc(diffWheel.diffFl) || diffCheck.calc(diffWheel.diffFr)) || diffCheck.calc(diffWheel.diffRl)) || diffCheck.calc(diffWheel.diffRr)); // Main/calc 18
		if (((diffCheck.calc(diffWheel.diffFl) || diffCheck.calc(diffWheel.diffFr)) || diffCheck.calc(diffWheel.diffRl)) || diffCheck.calc(diffWheel.diffRr)) {
			statemaschine.calc(); // Main/calc 19/if-then 1
		} // Main/calc 19
	}
}