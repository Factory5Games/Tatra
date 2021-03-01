class Truck_TatraBajaLight extends CarLightBase
{
	void Truck_TatraBajaLight()
	{
		m_SegregatedBrightness = 8;
		m_SegregatedRadius = 70;
		m_SegregatedAngle = 120;
		m_SegregatedColorRGB = Vector(1.0, 0.8, 0.6);
		
		m_AggregatedBrightness = 25;
		m_AggregatedRadius = 130;
		m_AggregatedAngle = 170;
		m_AggregatedColorRGB = Vector(1.0, 0.8, 0.6);
		
		FadeIn(0.3);
		SetFadeOutTime(0.25);
		
		SegregateLight();
	}
}