package components.lib;

static class diffCheck {
	characteristic real border = 0.005;

	@generated("blockdiagram")
	@no_side_effect
	public boolean calc(real in arg) {
		return(abs(arg) >= border); // Main/calc 1
	}
}