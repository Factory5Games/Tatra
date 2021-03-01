modded class EffVehicleSmoke : EffectParticle
{
	void EffVehicleSmoke()
	{
		SetParticleStateLight();
		SetEnableEventFrame(true);
	}
	
	override void SetParticleStateHeavy()
	{
		SetParticleState( ParticleList.SMOKING_HELI_WRECK );
	}
	

}




