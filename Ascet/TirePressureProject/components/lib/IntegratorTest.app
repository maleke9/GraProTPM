application {
	class components.lib.IntegratorTest
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.lib.IntegratorTest.calc
		process components.lib.IntegratorTest.integrate
		process components.lib.IntegratorTest.outVal
	}
}