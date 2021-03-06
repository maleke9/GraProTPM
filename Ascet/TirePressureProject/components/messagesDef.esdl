package components;

data interface veloCar {
	
	real vfl = 0.0;
	
	real vfr = 0.0;
	
	real vrl = 0.0;
	
	real vrr = 0.0;
			
}

data interface distanceCar {
	
	real sfl = 0.0;
	
	real sfr = 0.0;
	
	real srl = 0.0;
	
	real srr = 0.0;
	
	real avgDistanceCar = 0.0;
		
}

data interface diffWheel {
	
	real diffFl = 0.0;
	
	real diffFr = 0.0;
	
	real diffRl = 0.0;
	
	real diffRr = 0.0;		
}

data interface pressureError {
	
	boolean errFl = false;
	
	boolean errFr = false;
	
	boolean errRl = false;
	
	boolean errRr = false;		
	
	boolean err = false;
}





