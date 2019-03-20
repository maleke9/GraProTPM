package example;
import components.BitAccess;

static class Example using R {
    BitAccess bits;
    BitAccess bits8;
    BitAccess bits16;
    integer bitPackedVariable = 8;
    boolean status;
    
    @thread
	public void mainMethod() {
		status = bits.getBit(bitPackedVariable, 3);
		status = bits8.getBit(bitPackedVariable, 3);
		status = bits16.getBit(bitPackedVariable, 3);
	}

	representation R {
		represent bits8 using RU8;
		represent bits16 using RU16;
	}
}
