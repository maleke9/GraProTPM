application {
	class components.lib.IntegratorTest
	class components.lib.diffCheck
	class components.Component
	class components.lib.statemaschine
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Component.calc
	}
}