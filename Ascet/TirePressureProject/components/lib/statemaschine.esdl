package components.lib;
import components.SoundOutStateMaschine;
import components.Component;

static class statemaschine {
	SoundOutStateMaschine SoundOutStateMaschine_instance;

	@generated("blockdiagram")
	public void calc() {
		SoundOutStateMaschine_instance.soundOutStateMaschineStatemachineTrigger(); // Main/calc 1
		SoundOutStateMaschine_instance.deltaTime = Component.deltatime; // Main/calc 2
	}
}