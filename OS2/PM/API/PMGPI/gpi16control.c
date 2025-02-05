#ifndef GPI16CONTROL_INCLUDED
#define GPI16CONTROL_INCLUDED

HPS  APIENTRY16 GPICREATEPS(HAB hab,HDC hdc,PSIZEL psizlSize,ULONG flOptions);
HPS  APIENTRY16 GPICREATEPS(HAB hab,HDC hdc,PSIZEL psizlSize,ULONG flOptions)
{
#ifdef BIT32
	return GpiCreatePS(hab,hdc,psizlSize,flOptions);
#else
	return unimplemented(__FUNCTION__);
#endif
}

BOOL APIENTRY16 GPIDESTROYPS(HPS hps);
BOOL APIENTRY16 GPIDESTROYPS(HPS hps)
{
#ifdef BIT32
	return GpiDestroyPS(hps);
#else
	return unimplemented(__FUNCTION__);
#endif
}

BOOL APIENTRY16 GPIASSOCIATE(HPS hps,HDC hdc);
BOOL APIENTRY16 GPIASSOCIATE(HPS hps,HDC hdc)
{
#ifdef BIT32
	return GpiAssociate(hps, hdc);
#else
	return unimplemented(__FUNCTION__);
#endif
}

#ifdef PMWIN
BOOL FAR PASCAL RestoreDC(HDC, SHORT);
#endif
#ifdef PMOS2
// fix prototype !!!
USHORT APIENTRY16 GPIRESTOREPS(HPS hps,SHORT a)
#endif
{
#ifdef BIT32
	return GpiRestorePS(hps, a);
#else
	return unimplemented(__FUNCTION__);
#endif
}

#ifdef PMWIN
SHORT FAR PASCAL SaveDC(HDC hdc);
#endif
#ifdef PMOS2
USHORT APIENTRY16 GPISAVEPS(HPS hps)
#endif
{
#ifdef BIT32
	return GpiSavePS(hps);
#else
	return unimplemented(__FUNCTION__);
#endif
}

//BOOL  APIENTRY GpiErase( HPS hps );
// fix prototype !!!
BOOL APIENTRY16 GPIERASE(HPS hps)
{
#ifdef BIT32
	return GpiErase(hps);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIQUERYDEVICE(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

BOOL  APIENTRY16 GpiResetPS( HPS hps, ULONG flOptions )
{
#ifdef BIT32
	return GpiResetPS(hps, flOptions);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPISETPS(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIQUERYPS(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIERRORSEGMENTDATA(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIQUERYDRAWCONTROL(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPISETDRAWCONTROL(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPISETDRAWINGMODE(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIQUERYDRAWINGMODE(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPISETSTOPDRAW(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

// fix prototype !!!
USHORT APIENTRY16 GPIQUERYSTOPDRAW(void)
{
#ifdef BIT32
	return unimplemented(__FUNCTION__);
#else
	return unimplemented(__FUNCTION__);
#endif
}

#endif
